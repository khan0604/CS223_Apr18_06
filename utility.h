//
// Created by sohail on 30/3/18.
//

#ifndef GMS_UTILITY_H
#define GMS_UTILITY_H

#define cin_email(var) {                                                    \
            getline(cin,var);                                               \
            while((var).find(" ") != std::string::npos){                    \
                cout << "Spaces are not allowed!\nPlease enter again: ";    \
                getline(cin, var);                                          \
            }                                                               \
            size_t foundat = (var).find("@");                               \
            size_t founddot = (var).find(".", foundat + 2);                 \
            while(foundat == 0 || foundat == std::string::npos || founddot == std::string::npos || founddot == (var).size() - 1){ \
                cout << "Enter a valid e-mail id: "<<endl;                        \
                getline(cin,var);                                           \
                foundat = (var).find("@");                                  \
                founddot = (var).find(".", foundat + 2);                    \
            }                                                               \
        }


#include "user.h"
#include <iostream>
#include "init.h"

using namespace std;

class Utility
{
public:

     static void choices();
     void start();
     static void user_login();
     static void user_register();
};

extern bool EXIT_CODE;
#endif //GMS_UTILITY_H
