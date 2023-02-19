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
	int hobby = 0, final_hobby = 0, music_genre = 0,
		artist = 0, drink = 0, final_drink = 0, foodplace = 0, final_food = 0,
		activity = 0, final_activity = 0;

	printf("Hello! I'm so glad you are using this program to try some new things!\n It's going to be pretty simple. You will be prompted, and based off your decisions, we will land on some new things for you to try!\n ");
	printf("To start things out, let's pick a new hobby to try!\n");
	printf("Here are some hobby options:\n Option 1: Cooking\n Option 2: Crochet\n Option 3: Hiking\n ");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", &hobby);
	printf("Execellent! Now in this category, let's get a little more specific.\n");


	// choosing exact new hobby
	final_hobby = new_hobby(hobby);

	// print out the hobby 

	finalized_hobby1(final_hobby, hobby);
	finalized_hobby2(final_hobby, hobby);
	finalized_hobby3(final_hobby, hobby);

	// On to the music part
	printf("Next, let's pick a new music genre to try!\n");
	printf("Here are some genre options:\n Option 1: Rock\n Option 2: Hip-Hop\n Option 3: Country\nOption 4: Classical\n Option 5: Punk\n Option 6: Soul\n Option 7: Classic Rock\n Option 8: Indie\n Option 9: Disco\n Option 10: Jazz\n Option 11: Pop\n Option 12: R&B\n Option 13: KPop\n Option 14: Instrumental\nOption 15: Alternative\n Option 16: Latin Music Rock");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", &music_genre);
	printf("Fantastic! Now in this category, let's get a little more specific.\n");


	// choosing exact new hobby
	artist = type_music(music_genre);


	// print out the hobby 
	finalized_music1(music_genre, artist);
	finalized_music2(music_genre, artist);
	finalized_music3(music_genre, artist);
	finalized_music4(music_genre, artist);
	finalized_music5(music_genre, artist);
	finalized_music6(music_genre, artist);
	finalized_music7(music_genre, artist);
	finalized_music8(music_genre, artist);
	finalized_music9(music_genre, artist);
	finalized_music10(music_genre, artist);
	finalized_music11(music_genre, artist);
	finalized_music12(music_genre, artist);
	finalized_music13(music_genre, artist);
	finalized_music14(music_genre, artist);
	finalized_music15(music_genre, artist);
	finalized_music16(music_genre, artist);

	// On to the drink part
	printf("Next, let's pick a new drink to try!\n");
	printf("Here are some options to narrow down:\n Option 1: Coffee\n Option 2: Boba\n Option 3: Juice\n");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", &drink);
	printf("Phenomenal! Now in this category, let's get a little more specific.\n");

	// choosing exact new drink
	final_drink = drink_time(drink);


	// print out the drink 
	finalized_drink1(final_drink, drink);
	finalized_drink2(final_drink, drink);
	finalized_drink3(final_drink, drink);
	

	// On to the foodie part
	printf("Next, let's pick a new foodie place to try!\n");
	printf("Here are some options to narrow down:\n Option 1: Sushi\n Option 2: Pizza\n Option 3: Greek\n Option 4: Soup\n Option 5: Breakfast\n");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", &foodplace);
	printf("Great! Now in this category, let's get a little more specific.\n");

	// choosing exact new drink
	final_food = foodie_time(foodplace);

	// print out the food place 
	finalized_food1(final_food, foodplace);
	finalized_food2(final_food, foodplace);
	finalized_food3(final_food, foodplace);
	finalized_food4(final_food, foodplace);
	finalized_food5(final_food, foodplace);


	// On to the activity part
	printf("Lastly, let's pick a new activity to try!\n");
	printf("Here are some options to narrow down:\n Option 1: active activity\n Option 2: semi-sedentary activity\n Option 3: sedentary activity\n");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", &activity);
	printf("Great! Now in this category, let's get a little more specific.\n");

	// choosing exact activity
	final_activity = activity_time(activity);

	// print out the activity place 
	finalized_activity1(final_activity, activity);
	finalized_activity2(final_activity, activity);
	finalized_activity3(final_activity, activity);

	// Final Notes to User
	printf("I hope you have fun with your new experiences, I hope you take note of the suggestions!\n Feel free to run again when you want to try some more new things. :)");
	return 0;
}