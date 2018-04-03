//
// Created by sohail on 30/3/18.
//

#ifndef GMS_USER_H
#define GMS_USER_H


#include <iostream>
#include <string>
#include <map>
#include <list>
#include "Statistics.h"
#include "Courses.h"

using namespace std;

class User{

    static map <string ,User> object_list;

protected:
    string user_name, user_id, email, pass_word;


public:

    string  user_type;

    Grades grades;

    Course course;

    User()=default;

    User(const string&, const string&, const string&, const string&);
    //Parametrized Constructor

    static map<string, User>& all();
    //Returns the userlist

    void set_user_name(const string&);
    //Returns username

    string get_user_name() const;
    //Returns username

    void set_user_id(const string&);
    //Returns userid

    string get_user_id() const;
    //Returns userid

    void set_email(const string&);
    //Returns the email of user

    string get_email() const;
    //Returns the email of user

    virtual void set_pass_word(const string&);
    //sets the password of a year

    virtual bool check_pass_word(const string&);

    virtual bool is_authenticated();
    //Returns whether the user is registered or not

    User& save();

    void view_profile();

    void modify_profile();

    void view_courses();

    void view_stats();

    void select_courses();

};

extern User* current_user;

class Student : public User{

    static map <string ,Student> student_list;

public:

    Student()= default;

    Student(const string&, const string&, const string&, const string&);

    static map<string, Student>& all_students();

    Student& save_student();
};

extern Student* student_user;

class Faculty : public User{

    static map <string ,Faculty> faculty_list;


public:

    Faculty()= default;

    Faculty(const string&, const string&, const string&, const string&);

    static map<string, Faculty>& all_faculty();

    Faculty& save_faculty();

    void update_marks();

    void modify_grades();
};

extern Faculty* faculty_user;


#endif //GMS_USER_H
