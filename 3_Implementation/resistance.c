#include "resistance.h"
/**
 * @brief calulation of the resistance colour coding
 * 
 * @param C1 Colour_1
 * @param C2 Colour_2
 * @param C3 Colour_3
 * @param C4 Colour_4
 * @return int 
 */
float resistance(int C1, int C2, int C3)
{
    float resistance[3];

    //colour_1
    if(C1 == 0)
    {
        resistance[0] = 0;
    }
    if(C1 == 1)
    {
        resistance[0] = 1;
    }
    if(C1 == 2)
    {
        resistance[0] = 2;
    }
    if(C1 == 3)
    {
        resistance[0] = 3;
    }
    if(C1 == 4)
    {
        resistance[0] = 4;
    }
    if(C1 == 5)
    {
        resistance[0] = 5;
    }
    if(C1 == 6)
    {
        resistance[0] = 6;
    }
    if(C1 == 7)
    {
        resistance[0] = 7;
    }
    if(C1 == 8)
    {
        resistance[0] = 8;
    }
    if(C1 == 9)
    {
        resistance[0] = 9;
    }

    // colour_2
    if(C2 == 0)
    {
        resistance[1] = 0;
    }
    if(C2 == 1)
    {
        resistance[1] = 1;
    }
    if(C2 == 2)
    {
        resistance[1] = 2;
    }
    if(C2 == 3)
    {
        resistance[1] = 3;
    }
    if(C2 == 4)
    {
        resistance[1] = 4;
    }
    if(C2 == 5)
    {
        resistance[1] = 5;
    }
    if(C2 == 6)
    {
        resistance[1] = 6;
    }
    if(C2 == 7)
    {
        resistance[1] = 7;
    }
    if(C2 == 8)
    {
        resistance[1] = 8;
    }
    if(C2 == 9)
    {
        resistance[1] = 9;
    }

    //colour_3
    if(C3 == 0)
    {
        resistance[2] = 1;
    }
    if(C3 == 1)
    {
        resistance[2] = 10;
    }
    if(C3 == 2)
    {
        resistance[2] = 100;
    }
    if(C3 == 3)
    {
        resistance[2] = 1000;
    }
    if(C3 == 4)
    {
        resistance[2] = 10000;
    }
    if(C3 == 5)
    {
        resistance[2] = 100000;
    }
    if(C3 == 6)
    {
        resistance[2] = 1000000;
    }
    if(C3 == 7)
    {
        resistance[2] = 10000000;
    }

    

    float total_resistance = ((resistance[0]*10) + resistance[1]) * resistance[2];
    return total_resistance;
}

float tolerance(int C4)
{ 
    float tollerance = 0;
 
    if(C4 == 1)
    {
        tollerance = 1;
    }
    if(C4 == 2)
    {
        tollerance = 2;
    }
    if(C4 == 5)
    {
        tollerance = 0.5;
    }
    if(C4 == 6)
    {
        tollerance = 0.25;
    }
    if(C4 == 7)
    {
        tollerance = 0.1;
    }
    if(C4 == 8)
    {
        tollerance = 0.05;
    }

    return tollerance;
}