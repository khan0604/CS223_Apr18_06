//
// Created by sohail on 30/3/18.
//

#include <iostream>
#include <iomanip>
#include "utility.h"
#include <typeinfo>



using namespace std;


bool EXIT_CODE = false;

void Utility::user_login() {
    cout << "Welcome to login screen\n";
    string username, password;
    cout << "Enter username\n";
    cin >> username;
    cout << "Enter password\n";
    cin >> password;
    try {
        auto student = Student::all_students().find(username);
        auto faculty = Faculty::all_faculty().find(username);
        auto user = User::all().find(username);
        if (user != User::all().end() && user->second.check_pass_word(password)) {
            current_user = &(user->second);
            student_user = &(student->second);
            faculty_user = &(faculty->second);
            cout << current_user->get_user_name() << " successfully logged in" << endl;
        } else {
            cout << "Either username or password is incorrect\n";
        }
    }
    catch (string) {
        cout << "login failed" << endl;
    }
    if (current_user->is_authenticated()) Utility::choices();
}

void Utility::user_register() {
    cout << "Welcome to register screen\n";
    cout << "At present there are " << User::all().size() << " users in the system\n";
    string username, userid, mail, usertype, pass = "   $", c_pass = "     ";
    cout << "Enter Username\n";
    cin >> username;
    cout << "Enter Userid\n";
    cin >> userid;
    cin_email(mail);
    char ch;
    cout << "Define your user type\n1. student\n2. faculty\n";
    cin >> ch;
    switch (ch) {
        case '1': {
            usertype = "Student";
            break;
        }
        case '2': {
            usertype = "Faculty";
            break;
        }
        default: {
            cout << "Please enter a valid choice. \n";

        }
    }

    User user(username, userid, mail, usertype);

    while (pass != c_pass) {
        if (pass != "   $") {
            cout << "Password doesn't match, retry!\n" << endl;
        }
        cout << "Enter password\n" << endl;
        cin >> pass;
        cout << "Confirm password\n" << endl;
        cin >> c_pass;
    }
    user.set_pass_word(pass);

    try {
        if (usertype == "Student") {
            Student student(username, userid, mail, usertype);
            student.save_student();
            cout << "Hi " << student.get_user_name() << " you have registered successfully\n";
        }
        if (usertype == "Faculty") {
            Faculty faculty(username, userid, mail, usertype);
            faculty.save_faculty();
        }
        user.save();
        cout << "Now there are " << User::all().size() << " users in the system\n" << endl;
        cout << "please login to continue\n";
        ///view_choice = VIEW_CHOICES(DETAIL);
    }
    catch (string) {
        cout << "registration failed\n" << endl;
    }
}

void Utility::start() {

    char c;
    cout << "select any choice\n 1.Register\n 2.Login\n 3.Exit\n";
    cin >> c;

    switch (c) {
        case '1': {
            Utility::user_register();
            Utility::user_login();
            break;
        }
        case '2': {
            Utility::user_login();
            break;
        }
        case '3': {
            EXIT_CODE = true;
            break;
        }
        default: {
            cout << "Invalid Choice\n";
            break;
        }

    }

    if (EXIT_CODE)
        return;
}

void Utility::choices() {

    char c;
    //if user is student
    if (current_user->user_type == "Student") {



        while (!EXIT_CODE) {
            cout<<endl;
            cout << "select any choice\n 1.View Profile\n 2.Modify Profile\n 3.Add Courses\n 4.View Courses\n 5.View Stats\n 6.Logout\n";
            cin >> c;

            switch (c) {
                case '1': {
                    student_user->view_profile();
                    break;
                }
                case '2': {
                    student_user->modify_profile();
                    break;
                }
                case '3': {
                    student_user->select_courses();
                    break;
                }
                case '4': {
                    student_user->view_courses();
                    break;
                }
                case '5': {
                    student_user->view_stats();
                    break;
                }
                case '6': {
                    Utility utility;
                    utility.start();
                    break;
                }
                default: {
                    cout << "Please enter a valid choice. \n";

                }
            }
        }
    }


    //if user is faculty
    if (current_user->user_type == "Faculty") {


        while (!EXIT_CODE) {
            cout<<endl;
            cout << "select any choice\n 1.View Profile\n 2.Modify Profile\n 3.Add Courses\n 4.View Courses\n 5.View All Stats\n 6.Update Marks\n 7.Modify Grades\n 8.Logout\n";
            cin >> c;

            switch (c) {
                case '1': {
                    faculty_user->view_profile();
                    break;
                }
                case '2': {
                    faculty_user->modify_profile();
                    break;
                }
                case '3': {
                    faculty_user->select_courses();
                    break;
                }
                case '4': {
                    faculty_user->view_courses();
                    break;
                }
                case '5': {
                    faculty_user->view_stats();
                    break;
                }
                case '6': {
                    faculty_user->update_marks();
                    break;
                }
                case '7': {
                    faculty_user->modify_grades();
                    break;
                }
                case '8': {
                    Utility utility;
                    utility.start();
                    break;
                }
                default: {
                    cout << "Please enter a valid choice. \n";

                }
            }
        }
    }
}


