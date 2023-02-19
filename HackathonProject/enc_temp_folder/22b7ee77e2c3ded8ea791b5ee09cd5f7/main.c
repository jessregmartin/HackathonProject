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
	int hobby_1 = 0, hobby_2 = 0, hobby_3 = 0, final_hobby = 0;
	char;

	output_stream = fopen("try_new_things.dat", "w");

	printf("Hello! I'm so glad you are using this program to try some new things!\n It's going to be pretty simple. You will be prompted, and based off your decisions, we will land on some new things for you to try!\n ");
	printf("To start things out, let's pick a new hobby to try!\n");
	printf("Here are some hobby options:\n Option 1: Cooking\n Option 2: Crochet\n Option 3: Hiking\n ");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", hobby_1);
	printf("Execellent! Now in this category, let's get a little more specific.\n");
	
	// choosing exact new hobby
	final_hobby = new_hobby(hobby_1);

	// write hobby to file
	finalized_hobby1(output_stream, final_hobby, hobby_1);
	finalized_hobby2(output_stream, final_hobby, hobby_2);
	finalized_hobby3(output_stream, final_hobby, hobby_3);


	return 0;
}