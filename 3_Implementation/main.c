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
#include "unity.h"

void setUp()
{
}
void tearDown()
{
}

void test_resistance()
{
    TEST_ASSERT_EQUAL(1100.000000, resistance(1, 1, 2));
    TEST_ASSERT_EQUAL(10000000.000000, resistance(0, 1, 7));
    TEST_ASSERT_EQUAL(220000.000000, resistance(2, 2, 4));
    TEST_ASSERT_EQUAL(440000.000000, resistance(4, 4, 4));   
}
void test_tolerance()
{
    TEST_ASSERT_EQUAL(0.5, tolerance(5));
    TEST_ASSERT_EQUAL(0.05, tolerance(8));
    TEST_ASSERT_EQUAL(1.000000, tolerance(1));
    TEST_ASSERT_EQUAL(0.5, tolerance(7));
    
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_resistance);
    RUN_TEST(test_tolerance);
    return UNITY_END();

    printf("Welcome to Resitor Colour Coding Calculator");
    printf("Select Your Colour Digits");
    printf("0 : Black");
    printf("1 : Brown");
    printf("2 : Red");
    printf("3 : Orange");
    printf("4 : Yellow");
    printf("5 : Green");
    printf("6 : Blue");
    printf("7 : Violet");
    printf("8 : Grey");
    printf("9 : White");

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
    
    int result = resistance(c1,c2,c3);
    float tolerance_output = tolerance(c4);
    printf("The total resistacne of the Resistor is %d Ohm, With %f Tolerance.",result, tolerance_output);

    return 0;
}