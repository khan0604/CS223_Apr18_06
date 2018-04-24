#include <iostream>
#include <string>
#include <map>
#include <list>
#include "utility.h"
#include "init.h"
#include "Statistics.h"
using namespace std;

int main()
{
    Init::init();
    Utility utility;
    do {
        utility.start();
    }
    while (!EXIT_CODE);
    return 0;
}
