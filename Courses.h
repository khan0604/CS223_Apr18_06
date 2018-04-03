//
// Created by sohail on 1/4/18.
//

#ifndef GMS_COURSES_H
#define GMS_COURSES_H


#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include "Statistics.h"


using namespace std;

class Course {


    static multimap<string, Course> course_list;             //A map containing all the courses

public:

    string student_name, faculty_name;
    static string courses[100];
    static int count;

    string name;
    int course_mark;
    char course_grade;

    Grades grade;

    bool check = false;

    Course()= default;

    Course(const string&, const string&, int, char);
    //Constructor
    Course(const string&);

    Course(const string&, const string&);

   void show_user_courses();
    //Prints the Courses of a particular user.

    static multimap<string, Course>& all();
    //Returns course_list(all the courses)

    string get_course_name();
    //Returns name of Course

   Course& save_courses();

   void show_course_grade(const string& );

   void get_course_grade(const string& );

   int get_course_marks();

   void update_marks(int marks);

    void update_grades(char);

    Course& add_courses();

    void show_courses();

    void select_courses();

};



#endif //GMS_COURSES_H
