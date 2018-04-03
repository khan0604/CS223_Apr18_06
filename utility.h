//
// Created by sohail on 30/3/18.
//

#ifndef GMS_UTILITY_H
#define GMS_UTILITY_H

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
