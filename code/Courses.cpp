//
// Created by sohail on 1/4/18.
//

#include "Courses.h"
#include <map>
#include <iostream>
#include "user.h"

int Course::count = 1;
string Course::courses[100] = {"default"};

multimap<string, Course> Course::course_list = {};

Course::Course(const string &c_name, const string &std_name, int marks, char grade) {

    name = c_name;
    student_name = std_name;
    course_mark = marks;
    course_grade = grade;
}

string Course::get_course_name() {
    return name;
}

multimap<string, Course> &Course::all() {
    return course_list;
}

void Course::show_user_courses() {
    int count = 1;
    string u_name = current_user->get_user_name();
    for (auto &i : course_list) {
        if (i.second.student_name == u_name || i.second.faculty_name == u_name) {
            cout << count << ". " << i.second.get_course_name() << endl;
            count++;
        }
    }
    if(count == 1) cout<< "No course Registered" <<endl;
}


Course &Course::save_courses() {
    if ((Course::all().find(this->get_course_name())!=Course::all().end()) &&  (this->get_user() == current_user->get_user_name()))
    {
        cout<<"Course already added"<<endl;
    }
    else {
        course_list.insert(pair<string, Course>(this->get_course_name(), *this));
    }
    return *this;
}

void Course::get_course_grade(const string &cname) {
        grade.grades_criteria(cname);
}

int Course::get_course_marks() {
    return course_mark;
}


void Course::update_marks(int marks) {
    course_mark = marks;
}

void Course::update_grades(char grades) {
    course_grade = grades;
}

 Course::Course(const string & c_name, const string & fac_name) {
     name = c_name;
     faculty_name = fac_name;
}

Course::Course(const string & c_name) {
  name = c_name;
}

Course &Course::add_courses() {
    courses[count] = this->get_course_name();
    count++;
    return *this;
}

void Course::show_courses() {

    for (int i=1; i<count ; i++)
    {
        cout<<i<<". "<<courses[i]<<endl;
    }
}

string Course::get_user() {

    if(current_user->user_type == "Student")
    {
    return student_name;
    }

    if (current_user->user_type == "Faculty") {
            return faculty_name;
        }
}




