//
// Created by sohail on 31/3/18.
//

#ifndef GMS_STATISTICS_H
#define GMS_STATISTICS_H

#include "string.h"
#include <iostream>
using namespace std;

class Statistics {
public:
    int get_average_marks( const string&);

    int get_mean_deviation(const string&);

protected:
    int average_marks;
    int mean_deviation;
};

class Marks : public Statistics{

public:

};

class Grades : public Statistics{
public:
    Grades()= default;

   void grades_criteria(const string&);
};
#endif //GMS_STATISTICS_H

