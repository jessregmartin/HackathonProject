/*
* Name: Jessica Martin
* Class: CptS 121 with Andy O'Fallon
* Theme: Try Something New
* Project: Helps users find new things to try
* Description: prompts users and takes in users choices
* Created: 02-18-23
* Edit History: started 11am, crashed, restart from scratch 1pm
*
*/

#include "header.h"

int main(void)
{
	FILE* output_stream = NULL;
	int hobby_1 = 0, hom_piz = 0, dip = 0, pasta = 0, salad = 0, quesadilla = 0, 	
		hobby_2 = 0, pillow = 0, mat = 0, beanie = 0, inf_scarf = 0,
		hobby_3 = 0, waterfall = 0, pond = 0, forest = 0, geocache = 0,
		;
	char;

	output_stream = fopen("try_new_things.dat", "w");

	printf("Hello! I'm so glad you are using this program to try some new things!\n It's going to be pretty simple. You will be prompted, and based off your decisions, we will land on some new things for you to try!\n ");
	printf("To start things out, let's pick a new hobby to try!\n");
	printf("Here are some hobby options:\n Option 1: Cooking\n Option 2: Crochet\n Option 3: Hiking\n ");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", hobby_1);
	printf("Execellent! Now in this category, let's get a little more specific.\n");
	

	print_double(output_stream, x)

	return 0;
}