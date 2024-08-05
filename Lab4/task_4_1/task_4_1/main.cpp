#include <iostream>
#include "unit.h"

#define Unit 1
//#define Unit 2
//#define Unit 3
//#define Unit 4
//#define Unit 5
//#define Unit 6
//#define Unit 7
//#define Unit 8

int main() {

    #if Unit == 1
        unit1();
    #elif Unit == 2
        unit2();
    #elif Unit == 3
        unit3();
    #elif Unit == 4
        unit4();
    #elif Unit == 5
        unit5();
    #elif Unit == 6
    unit6();
    #elif Unit == 7
    unit7();
    #elif Unit == 8
    unit8();
    #endif

    return 0;
}
