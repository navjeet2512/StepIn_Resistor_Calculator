/**
 * @file main.c
 * @author Navjeet
 * @brief Main code to call all the other functions of the Resistance Colour Coding
 * @version 0.1
 * @date 2021-09-02
 * 
 * @copyright Copyright (c) 2021
 *
 *
 */
#include "calculate.h"
#include "compute.h"
#include "stdio.h"



int main()
{
	colour c1={0}, c2={0}, c3={0}, c4={0}, c5={0}, c6={0};
	int number_of_colours;
	printf("Enter Number Of Colours: 4,5,6\n");
	scanf("%d",&number_of_colours);
	
	switch(number_of_colours)
	{
		case 4:
			printf("Select Your Colour digits\n");
			printf("0:Black \n1:Brown \n2:Red \n3:Orange \n4:Yellow \n5:Green \n6:Blue \n7:Violet \n8:Grey \n9:White\n");
			int first_colour, second_colour, third_colour, fourth_colour;
			printf("Enter First Colour: ");
			scanf("%d",&c1.first_colour);
			printf("Enter Second Colour: ");
			scanf("%d",&c2.second_colour);
			printf("Enter Third Colour: ");
			scanf("%d",&c3.third_colour);
			printf("Enter Fourth Colour: ");
			scanf("%d",&c4.fourth_colour);
			
			result = four_colour_resistor(c1, c2, c3, c4);
			break;
		
		case 5:
			break;
			
		case 6:
			break;
			
		default:
			printf("Enter valid Number");
			break;
	}
	
    return 0;
}
