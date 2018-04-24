//
// Created by sohail on 31/3/18.
//

#include "Statistics.h"
#include <iostream>
#include <map>
#include "user.h"
#include "Courses.h"

using namespace std;


void Grades::grades_criteria(const string& coursename ) {

    int averagemarks, meandeviation;

    averagemarks = get_average_marks(coursename);
    meandeviation = get_mean_deviation(coursename);


    int totalmarks = 0, count=0;
    multimap<string, Course> course_list;
    course_list = Course::all();
    multimap<string, Course>::iterator it;


    for (it = course_list.begin(); it != course_list.end(); it++) {

        if (current_user->user_type == "Student") {

            string studentname = current_user->get_user_name();

            if (it->second.get_course_name() == coursename && it->second.student_name == studentname) {
                totalmarks = it->second.course_mark;
                count++;

                if (!it->second.check) {

                if (totalmarks >= (averagemarks + 1.5 * (meandeviation))) {
                    it->second.course_grade = 'A';
                    cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'A' << endl;
                }
                if (((averagemarks + (meandeviation)) <= totalmarks) &&
                    (totalmarks < (averagemarks + (1.5 * (meandeviation))))) {
                    it->second.course_grade = 'B';
                    cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'B' << endl;
                }
                if ((averagemarks <= totalmarks) && (totalmarks < (averagemarks + meandeviation))) {
                    it->second.course_grade = 'C';
                    cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'C' << endl;
                }
                if (((averagemarks - meandeviation) <= totalmarks) && (totalmarks < averagemarks)) {
                    it->second.course_grade = 'D';
                    cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'D' << endl;
                }
                if (totalmarks < (averagemarks - meandeviation)) {
                    it->second.course_grade = 'F';
                    cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'F' << endl;
                }

            }
                else

                {
                    cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << it->second.course_grade<<endl;
                }
            }

        }


        if (current_user->user_type == "Faculty") {
            string facultyname = current_user->get_user_name();


            if (it->second.get_course_name() == coursename && !it->second.student_name.empty()) {
                totalmarks = it->second.course_mark;
                count++;

                if (!it->second.check) {

                    if (totalmarks >= (averagemarks + 1.5 * (meandeviation))) {
                        it->second.course_grade = 'A';
                        cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'A'
                             << endl;
                    }
                    if (((averagemarks + (meandeviation)) <= totalmarks) &&
                        (totalmarks < (averagemarks + (1.5 * (meandeviation))))) {
                        it->second.course_grade = 'B';
                        cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'B'
                             << endl;
                    }
                    if ((averagemarks <= totalmarks) && (totalmarks < (averagemarks + meandeviation))) {
                        it->second.course_grade = 'C';
                        cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'C'
                             << endl;
                    }
                    if (((averagemarks - meandeviation) <= totalmarks) && (totalmarks < averagemarks)) {
                        it->second.course_grade = 'D';
                        cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'D'
                             << endl;
                    }
                    if (totalmarks < (averagemarks - meandeviation)) {
                        it->second.course_grade = 'F';
                        cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << 'F'
                             << endl;
                    }


                }

                else

                {
                    cout << it->second.student_name << " - " << it->second.get_course_marks() << " - " << it->second.course_grade<<endl;
                }
            }


        }


    }
    if(count == 0)
    {
        cout<<"Course is not registered yet"<<endl;
    }
}





int Statistics::get_average_marks(const string& coursename) {

    int total_marks = 0, count = 0;
    multimap<string, Course> course_list;
    course_list = Course::all();
    multimap<string, Course>::iterator it;


    for (it = course_list.begin(); it != course_list.end(); it++) {

        if(it->second.get_course_name() == coursename) {
            total_marks += it->second.course_mark;
            count++;
        }
    }

    average_marks = total_marks / count;

    return average_marks;

}

int Statistics::get_mean_deviation(const string& coursename) {

    int total_marks = 0, count = 0, mean_marks;
    multimap<string, Course> course_list;
    course_list = Course::all();
    multimap<string, Course>::iterator it;

    mean_marks = get_average_marks(coursename);

    for (it = course_list.begin(); it != course_list.end(); it++) {
        if(it->second.get_course_name() == coursename) {
            total_marks += abs((it->second).course_mark - mean_marks);
            count++;
        }
    }

    mean_deviation = total_marks / count;
    return mean_deviation;


}
