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
	int hobby_1 = 0, hobby_2 = 0, hobby_3 = 0, final_hobby = 0, music_genre = 0,
		artist = 0;


	printf("Hello! I'm so glad you are using this program to try some new things!\n It's going to be pretty simple. You will be prompted, and based off your decisions, we will land on some new things for you to try!\n ");
	printf("To start things out, let's pick a new hobby to try!\n");
	printf("Here are some hobby options:\n Option 1: Cooking\n Option 2: Crochet\n Option 3: Hiking\n ");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", hobby_1);
	printf("Execellent! Now in this category, let's get a little more specific.\n");
	
	do
	{
		printf("Option 1: Make a homeade pizza \n");
		printf("Option 2: Make a cool dip \n ");
		printf("Option 3: make a pasta dish \n ");
		printf("Option 4: Make a salad \n");
		printf("Option 5: Make a quesadilla \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_hobby);
	} while (hobby_1 == 1);

	do
	{
		printf("Option 1: Make a pillow \n");
		printf("Option 2: Make a stove mat \n ");
		printf("Option 3: make a beanie \n ");
		printf("Option 4: Make a infinity scarf \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_hobby);
	} while (hobby_1 == 2);

	do
	{
		printf("Option 1: Hike to a water fall \n");
		printf("Option 2: Hike to a pond \n ");
		printf("Option 3: Hike to a forest \n ");
		printf("Option 4: Hike to a Geocache \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_hobby);
	} while (hobby_1 == 3);


	// choosing exact new hobby
	final_hobby = new_hobby(hobby_1);

	// print out the hobby 
	finalized_hobby1(final_hobby, hobby_1);
	finalized_hobby2(final_hobby, hobby_2);
	finalized_hobby3(final_hobby, hobby_3);

	// On to the music part
	printf("Next, let's pick a new music genre to try!\n");
	printf("Here are some genre options:\n Option 1: Rock\n Option 2: Hip-Hop\n Option 3: Country\nOption 4: Classical\n Option 5: Punk\n Option 6: Soul\n Option 7: Classic Rock\n Option 8: Indie\n Option 9: Disco\n Option 10: Jazz\n Option 11: Pop\n Option 12: R&B\n Option 13: KPop\n Option 14: Instrumental\n");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", music_genre);
	printf("Fantastic! Now in this category, let's get a little more specific.\n");




	return 0;
}