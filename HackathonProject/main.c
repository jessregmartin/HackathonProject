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
		artist = 0, drink_1 = 0, final_drink = 0;

	printf("Hello! I'm so glad you are using this program to try some new things!\n It's going to be pretty simple. You will be prompted, and based off your decisions, we will land on some new things for you to try!\n ");
	printf("To start things out, let's pick a new hobby to try!\n");
	printf("Here are some hobby options:\n Option 1: Cooking\n Option 2: Crochet\n Option 3: Hiking\n ");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", &hobby_1);
	printf("Execellent! Now in this category, let's get a little more specific.\n");


	// choosing exact new hobby
	final_hobby = new_hobby(hobby_1);

	// print out the hobby 
	finalized_hobby1(final_hobby, hobby_1);
	finalized_hobby2(final_hobby, hobby_2);
	finalized_hobby3(final_hobby, hobby_3);

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

	// On to the foodie part
	printf("Next, let's pick a new drink to try!\n");
	printf("Here are some options to narrow down:\n Option 1: Coffee\n Option 2: Boba\n Option 3: Juice\n");
	printf("Now, from these options, enter the numerical digit which you most want to try: \n");
	scanf("%d", &drink_1);
	printf("Fantastic! Now in this category, let's get a little more specific.\n");

	// choosing exact new drink
	final_drink = drink_time(drink_1);





	return 0;
}