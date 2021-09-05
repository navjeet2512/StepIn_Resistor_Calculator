/**
 * @file main.c
 * @author Navjeet Singh
 * @brief this is the main function for the resistance calulator of a resistor
 * @version 0.1
 * @date 2021-09-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "stdio.h"
#include "resistance.h"

int main()
{
    int c1, c2, c3,c4;
    scanf("%d",&c1);
    scanf("%d",&c2);
    scanf("%d",&c3);
    scanf("%d",&c4);

    if((c3 == 8) || (c3 == 9) || (c4 == 0) || (c4 == 3) || (c4 == 4) || (c4 == 9))
    {
        printf("Invalid Input");
        exit(0);
    }
    
    float result = resistance(c1,c2,c3,c4);

    printf("%f \n",result);

    return 0;
}