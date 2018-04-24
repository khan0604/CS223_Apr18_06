 //
// Created by sohail on 30/3/18.
//

#include <iostream>
#include <string>
#include <queue>
#include <regex>
#include "user.h"
#include "utility.h"
#include "Statistics.h"

using namespace std;

User *current_user = new User;

Student *student_user = new Student;

Faculty *faculty_user = new Faculty;

map<string, User> User::object_list = {};

map<string, Student> Student::student_list = {};

map<string, Faculty> Faculty::faculty_list = {};

User::User(const string &username, const string &userid, const string &mail, const string &type) {
    user_name = username;
    user_id = userid;
    email = mail;
    user_type = type;
}

map<string, User> &User::all() {
    return object_list;
}

void User::set_user_name(const string &username) {
    user_name = username;
}

string User::get_user_name() const {
    return user_name;
}

void User::set_user_id(const string &userid) {
    user_id = userid;
}

string User::get_user_id() const {
    return user_id;
}

void User::set_email(const string &mail) {
    email = mail;
}

string User::get_email() const {
    return email;
}

void User::set_pass_word(const string &password) {
    pass_word = password;
}

bool User::check_pass_word(const string &raw_password) {
    return pass_word == raw_password;
}

bool User::is_authenticated() {
    return true;
}

User &User::save() {
    object_list.insert(pair<string, User>(this->get_user_name(), *this));
    return *this;
}

void User::view_profile() {
    cout << "UserName  : "<<User::get_user_name() << endl;
    cout << "UserId    : "<<User::get_user_id() << endl;
    cout << "UserEmail : "<<User::get_email() << endl;
    cout << "UserType  : "<<User::user_type << endl;
   }

void User::modify_profile() {
    string userid, mail;
    cout << "Enter Userid\n";
    cin >> userid;
    cout << "Enter email\n";
    cin >> mail;
    User::set_user_id(userid);
    User::set_email(mail);
    cout<<"Profile Updated Successfully !"<<endl;
    User::view_profile();
}

void User::view_stats() {
    start:
    cin.ignore(1000000000, '\n');
    course.show_courses();
    int c;
    cout << "Please Select any Course from the above list" << endl;
    cin >> c;
    if(cin.fail())
    {
        cin.clear();
        goto start;
    }
    if( c==1 || c==2 || c==3 || c==4 || c==5 || c==6) {
        string cname = Course::courses[c];
        course.get_course_grade(cname);
    } else{
        cout<<"enter a valid input";
        goto start;
    }
}

void User::view_courses() {

    cout<<"Registered Courses List:"<<endl;
    course.show_user_courses();
}

void User::select_courses() {

    course.show_courses();
    int c;
    cout<<"Select any course from the list "<<endl;
    cin>>c;
    if(current_user->user_type == "Student")
    {
        Course s(Course::courses[c],current_user->get_user_name(),0,'E');
        s.save_courses();
    }
    if(current_user->user_type == "Faculty")
    {
        Course f(Course::courses[c],current_user->get_user_name());
        f.save_courses();
    }
    cout<<endl;
    cout<<"Course added successfully !"<<endl;
    current_user->view_courses();
}

Student::Student(const string &username, const string &userid, const string &mail, const string &type) {
    user_name = username;
    user_id = userid;
    email = mail;
    user_type = type;
}

Student &Student::save_student() {
    student_list.insert(pair<string, Student>(this->get_user_name(), *this));
    return *this;
}

map<string, Student> &Student::all_students() {
    return student_list;
}

Faculty::Faculty(const string &username, const string &userid, const string &mail, const string &type) {
    user_name = username;
    user_id = userid;
    email = mail;
    user_type = type;
}

Faculty &Faculty::save_faculty() {
    faculty_list.insert(pair<string, Faculty>(this->get_user_name(), *this));
    return *this;
}

map<string, Faculty> &Faculty::all_faculty() {
    return faculty_list;
}

void Faculty::update_marks() {

    string username, cname;
    int marks,c;
    course.show_user_courses();
    cout << "Please enter any Course name from the above list" << endl;
    cin >> c;
    cname = Course::courses[c];
    cout << "Enter student name\n";
    cin >> username;
    cout << "Enter student marks\n";
    cin >> marks;

    for (auto &i : Course::all()) {
        if (i.second.get_course_name() == cname && i.second.student_name == username) {
            i.second.update_marks(marks);
        }
    }
    User::view_stats();
}

void Faculty::modify_grades() {

    int c;
    string username, cname;
    char grades;
    course.show_user_courses();
    cout << "Please enter any Course name from the above list" << endl;
    cin >> c;
    cname = Course::courses[c];
    cout << "Enter student name\n";
    cin >> username;
    cout << "Enter student grades\n";
    cin >> grades;
    for (auto &i : Course::all()) {
        if (i.second.get_course_name() == cname && i.second.student_name == username) {
            i.second.update_grades(grades);
           i.second.check = true;
        }
    }
    User::view_stats();
}

