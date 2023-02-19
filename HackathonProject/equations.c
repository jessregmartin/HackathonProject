#include "header.h"


/* HOBBY ZONE*/
int new_hobby(int hobby_1)
{
	int final_hobby = 0;


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

	return final_hobby;
}

// prints the option for the first option hobby to file
void finalized_hobby1(int final_hobby, int hobby_1)
{
	if (hobby_1 == 1 && final_hobby == 1)
	{
		printf("Your new hobby to try is cooking a homeade pizza!");
	}
	if (hobby_1 == 1 && final_hobby == 2)
	{
		printf("Your new hobby to try is cooking a dip!");
	}
	if (hobby_1 == 1 && final_hobby == 3)
	{
		printf("Your new hobby to try is cooking a pasta dish!");
	}
	if (hobby_1 == 1 && final_hobby == 4)
	{
		printf("Your new hobby to try is cooking a salad!");
	}
	if (hobby_1 == 1 && final_hobby == 5)
	{
		printf("Your new hobby to try is cooking a quesadilla!");
	}
	else {
		printf("");
	}
}

// prints the option for the second option hobby to file
void finalized_hobby2(int final_hobby, int hobby_2)
{
	if (hobby_2 == 2 && final_hobby == 1)
	{
		printf("Your new hobby to try is crocheting a pillow!");
	}
	if (hobby_2 == 2 && final_hobby == 2)
	{
		printf("Your new hobby to try is crocheting a stove mat!");
	}
	if (hobby_2 == 2 && final_hobby == 3)
	{
		printf("Your new hobby to try is crocheting a beanie!");
	}
	if (hobby_2 == 2 && final_hobby == 4)
	{
		printf("Your new hobby to try is crocheting a scarf!");
	}
	else {
		printf("");
	}
}

// prints the option for the third option hobby to file
void finalized_hobby3(int final_hobby, int hobby_3)
{
	if (hobby_3 == 3 && final_hobby == 1)
	{
		printf("Your new hobby to try is hiking to a waterfall!");
	}
	if (hobby_3 == 3 && final_hobby == 2)
	{
		printf("Your new hobby to try is hiking to a pond!");
	}
	if (hobby_3 == 3 && final_hobby == 3)
	{
		printf("Your new hobby to try is hiking to a forest!");
	}
	else if (hobby_3 == 3 && final_hobby == 4)
	{
		printf("Your new hobby to try is hiking to a geocache!");
	}
}

/* END HOBBY ZONE*/


/* START MUSIC ZONE */

int type_music(music_genre)
{
	int artist = 0;

	do
	{
		printf("Option 1: Rolling Stones\n");
		printf("Option 2: Pink Floyd\n ");
		printf("Option 3: Queen \n ");
		printf("Option 4: Beatles\n");
		printf("Option 5: Metalica\n");
		printf("Option 6: Led Zeppelin \n");
		printf("Option 7: Red Hot Chili Peppers \n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 1);

	do
	{
		printf("Option 1: Drake\n");
		printf("Option 2: 50 Cent\n ");
		printf("Option 3: Kendrick Lamar \n ");
		printf("Option 4: Nicki Minaj\n");
		printf("Option 5: Jay-Z\n");
		printf("Option 6: Tupac \n");
		printf("Option 7: Eminem\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 2);

	do
	{
		printf("Option 1: George Strait\n");
		printf("Option 2: Carrie Underwood\n ");
		printf("Option 3: Luke Bryan \n ");
		printf("Option 4: Tim McGraw\n");
		printf("Option 5: Shania Twain\n");
		printf("Option 6: Johnny Cash \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 3);

	do
	{
		printf("Option 1: Ludwig van Beethoven \n");
		printf("Option 2: Wolfgang Amadeus Mozart\n ");
		printf("Option 3: Claude Debussy \n ");
		printf("Option 4: Johannes Brahms\n");
		printf("Option 5: Johann Bach\n");
		printf("Option 6: Frederic Chopin\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 4);

	do
	{
		printf("Option 1: The Clash\n");
		printf("Option 2: Black Flag\n ");
		printf("Option 3: Ramones \n ");
		printf("Option 4: Green Day\n");
		printf("Option 5: Misfits\n");
		printf("Option 6: Dead Kennedys \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 5);

	do
	{
		printf("Option 1: Marvin Gaye\n");
		printf("Option 2: James Brown\n ");
		printf("Option 3: Aretha Franklin \n ");
		printf("Option 4: Stevie Wonder\n");
		printf("Option 5: Sam Cooke\n");
		printf("Option 6: Smokey Robinson\n");
		printf("Option 7: Ray Charles\n ");
		printf("Option 8: Al Green\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 6);

	do
	{
		printf("Option 1: Aerosmith \n");
		printf("Option 2: AC/DC\n ");
		printf("Option 3: Guns N’Roses\n ");
		printf("Option 4: Nirvana\n");
		printf("Option 5: Elvis Presley\n");
		printf("Option 6: Bon Jovi\n");
		printf("Option 7: Billy Joel \n ");
		printf("Option 8: Elton John\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 7);

	do
	{
		printf("Option 1: The Smithes \n");
		printf("Option 2: Artic Monkeys\n ");
		printf("Option 3: Modest Mouse\n ");
		printf("Option 4: Florence + the Machines\n");
		printf("Option 5: Radiohead \n");
		printf("Option 6: alt-J\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 8);

	do
	{
		printf("Option 1: Bee Gees \n");
		printf("Option 2: Boney M. Sister Sledge\n ");
		printf("Option 3: Gloria Gaynor\n ");
		printf("Option 4: Chic\n");
		printf("Option 5: Village People\n");
		printf("Option 6: KC and The Sunshine Band\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 9);

	do
	{
		printf("Option 1: Louis Armstrong \n");
		printf("Option 2: Billie Holiday \n ");
		printf("Option 3: Nat King Cole\n ");
		printf("Option 4: John Coltrane\n");
		printf("Option 5: Ella Fitzgerald\n");
		printf("Option 6: Chet Baker\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 10);

	do
	{
		printf("Option 1: Ariana Grande\n");
		printf("Option 2: Adele\n ");
		printf("Option 3: Harry Styles \n ");
		printf("Option 4: Michael Jackson\n");
		printf("Option 5: Selena Gomez \n");
		printf("Option 6: Taylor Swift\n");
		printf("Option 7: Oliva Rodrigo\n ");
		printf("Option 8: Bruno Mars\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 11);

	do
	{
		printf("Option 1: Lionel Richie \n");
		printf("Option 2: Beyonce\n ");
		printf("Option 3: Stevie Wonder\n ");
		printf("Option 4: Tina Turner \n");
		printf("Option 5: Giveon \n");
		printf("Option 6: Prince\n");
		printf("Option 7: SZA \n ");
		printf("Option 8: Khalid\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 12);

	do
	{
		printf("Option 1: BTS\n");
		printf("Option 2: EXO\n ");
		printf("Option 3: BIGBANG\n ");
		printf("Option 4: TWICE \n");
		printf("Option 5: Red Velvet\n");
		printf("Option 6: BLACKPINK\n");
		printf("Option 7: IU \n ");
		printf("Option 8: SUGA\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 13);

	do
	{
		printf("Option 1: The Shadows\n");
		printf("Option 2: Steve Vai \n ");
		printf("Option 3: Penguin Cafe Orchestra \n ");
		printf("Option 4: Liquid Tension Experiment \n");
		printf("Option 5: Red Velvet\n");
		printf("Option 6: Animals as Leaders\n");
		printf("Option 7: Scale the Sumit \n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 14);

	do
	{
		printf("Option 1: Pearl Jam\n");
		printf("Option 2: Weezer\n ");
		printf("Option 3: The Killers\n ");
		printf("Option 4: Twenty-One Pilots \n");
		printf("Option 5: My Chemical Romance\n");
		printf("Option 6: Linkin Park\n");
		printf("Option 7: The Cure \n ");
		printf("Option 8: Green Day\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 15);


	do
	{
		printf("Option 1: Bad Bunny\n");
		printf("Option 2: J Balvin\n ");
		printf("Option 3: Selena\n ");
		printf("Option 4: Marc Anthony \n");
		printf("Option 5: Enrique Iglesias\n");
		printf("Option 6: Luis Fonsi\n");
		printf("Option 7: Gloria Estefan \n ");
		printf("Option 8: Celia Cruz\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} while (music_genre == 16);


	return artist;
}


void finalized_music1(int music_genre, int artist)
{
	if (music_genre == 1 && artist == 1)
	{
		printf("Your new artist to listen to is Rolling Stones!");
	}
	if (music_genre == 1 && artist == 2)
	{
		printf("Your new artist to listen to is Pink Floyd!");
	}
	if (music_genre == 1 && artist == 3)
	{
		printf("Your new artist to listen to is Queen!");
	}
	if (music_genre == 1 && artist == 4)
	{
		printf("Your new artist to listen to is Beatles!");
	}
	if (music_genre == 1 && artist == 5)
	{
		printf("Your new artist to listen to is Metalica!");
	}
	if (music_genre == 1 && artist == 6)
	{
		printf("Your new artist to listen to is Led Zeplin!");
	}
	if (music_genre == 1 && artist == 7)
	{
		printf("Your new artist to listen to is Red Hot Chili Peppers!");
	}
	else {
		printf("");
	}
}


void finalized_music2(int music_genre, int artist)
{
	if (music_genre == 2 && artist == 1)
	{
		printf("Your new artist to listen to is Drake!");
	}
	if (music_genre == 2 && artist == 2)
	{
		printf("Your new artist to listen to is 50 Cent");
	}
	if (music_genre == 2 && artist == 3)
	{
		printf("Your new artist to listen to is Kendrick Lamar!");
	}
	if (music_genre == 2 && artist == 4)
	{
		printf("Your new hobby to try is hiking to a geocache!");
	}
	if (music_genre == 2 && artist == 5)
	{
		printf("Your new artist to listen to is Nicki Minaj!");
	}
	if (music_genre == 2 && artist == 6)
	{
		printf("Your new artist to listen to is Jay-Z!");
	}
	if (music_genre == 2 && artist == 7)
	{
		printf("YYour new artist to listen to is Tupac!");
	}
	if (music_genre == 2 && artist == 8)
	{
		printf("Your new artist to listen to is Eminem!");
	}
	else {
		printf("");
	}
}

void finalized_music3(int music_genre, int artist)
{
	if (music_genre == 3 && artist == 1)
	{
		printf("Your new artist to listen to is George Strait!");
	}
	if (music_genre == 3 && artist == 2)
	{
		printf("Your new artist to listen to is Carrie Underwood!");
	}
	if (music_genre == 3 && artist == 3)
	{
		printf("Your new artist to listen to is Luke Bryan!");
	}
	if (music_genre == 3 && artist == 4)
	{
		printf("Your new artist to listen to is Tim McGraw!");
	}
	if (music_genre == 3 && artist == 5)
	{
		printf("Your new artist to listen to is Shania Twain!");
	}
	if (music_genre == 3 && artist == 6)
	{
		printf("Johnny Cash!");
	}
	else {
		printf("");
	}
}

void finalized_music4(int music_genre, int artist)
{
	if (music_genre == 4 && artist == 1)
	{
		printf("Your new artist to listen to is Ludwig can Beethoven!");
	}
	if (music_genre == 4 && artist == 2)
	{
		printf("Your new artist to listen to is Wolfgang Amadeus Mozart!");
	}
	if (music_genre == 4 && artist == 3)
	{
		printf("Your new artist to listen to is Claude Debussy!");
	}
	if (music_genre == 4 && artist == 4)
	{
		printf("Johannes Brahms!");
	}
	if (music_genre == 4 && artist == 5)
	{
		printf("Your new artist to listen to is Johann Bach!");
	}
	if (music_genre == 4 && artist == 6)
	{
		printf("Your new artist to listen to is Frederic Chopin!");
	}
	else {
		printf("");
	}
}

void finalized_music5(int music_genre, int artist)
{
	if (music_genre == 5 && artist == 1)
	{
		printf("Your new artist to listen to is The Clash!");
	}
	if (music_genre == 5 && artist == 2)
	{
		printf("Your new artist to listen to is Black Flag");
	}
	if (music_genre == 5 && artist == 3)
	{
		printf("Your new artist to listen to is Ramones!");
	}
	if (music_genre == 5 && artist == 4)
	{
		printf("Your new artist to listen to is Green Day!");
	}
	if (music_genre == 5 && artist == 5)
	{
		printf("Your new artist to listen to is Misfits!");
	}
	if (music_genre == 5 && artist == 6)
	{
		printf("Your new artist to listen to is Dead Kennedys!");
	}
	else {
		printf("");
	}
}

void finalized_music6(int music_genre, int artist)
{
	if (music_genre == 6 && artist == 1)
	{
		printf("Your new artist to listen to is Marvin Gaye!");
	}
	if (music_genre == 6 && artist == 2)
	{
		printf("Your new artist to listen to is James Brown!");
	}
	if (music_genre == 6 && artist == 3)
	{
		printf("Your new artist to listen to is Aretha Franklin!");
	}
	if (music_genre == 6 && artist == 4)
	{
		printf("YYour new artist to listen to is Stevie Wonder!");
	}
	if (music_genre == 6 && artist == 5)
	{
		printf("Your new artist to listen to is Sam Cooke!");
	}
	if (music_genre == 6 && artist == 6)
	{
		printf("Your new artist to listen to is Smokey Robinson!");
	}
	if (music_genre == 6 && artist == 7)
	{
		printf("Your new artist to listen to is Ray Charles!");
	}
	if (music_genre == 6 && artist == 8)
	{
		printf("Your new artist to listen to is Al Green!");
	}
	else {
		printf("");
	}
}

void finalized_music7(int music_genre, int artist)
{
	if (music_genre == 7 && artist == 1)
	{
		printf("Your new artist to listen to is Aerosmith!");
	}
	if (music_genre == 7 && artist == 2)
	{
		printf("Your new artist to listen to is AC/DC!");
	}
	if (music_genre == 7 && artist == 3)
	{
		printf("Your new artist to listen to is Guns N'Roses!");
	}
	if (music_genre == 7 && artist == 4)
	{
		printf("Your new artist to listen to is Nirvana!");
	}
	if (music_genre == 7 && artist == 5)
	{
		printf("Your new artist to listen to is Elvis Presley!");
	}
	if (music_genre == 7 && artist == 6)
	{
		printf("Your new artist to listen to is Bon Jovi!");
	}
	if (music_genre == 7 && artist == 7)
	{
		printf("Your new artist to listen to is Billy Joel!");
	}
	if (music_genre == 7 && artist == 8)
	{
		printf("Your new artist to listen to is Elton John!");
	}
	else {
		printf("");
	}
}

void finalized_music8(int music_genre, int artist)
{
	if (music_genre == 8 && artist == 1)
	{
		printf("Your new artist to listen to is The Smithes!");
	}
	if (music_genre == 8 && artist == 2)
	{
		printf("Your new artist to listen to is Arctic Monkeys!");
	}
	if (music_genre == 8 && artist == 3)
	{
		printf("Your new artist to listen to is Modest Mouse!");
	}
	if (music_genre == 8 && artist == 4)
	{
		printf("Your new artist to listen to is Florence + the Machines!");
	}
	if (music_genre == 8 && artist == 5)
	{
		printf("Your new artist to listen to is Radiohead!");
	}
	if (music_genre == 8 && artist == 6)
	{
		printf("Your new artist to listen to is alt-J!");
	}
	else {
		printf("");
	}
}

void finalized_music9(int music_genre, int artist)
{
	if (music_genre == 9 && artist == 1)
	{
		printf("Your new artist to listen to is Bee Gees!");
	}
	if (music_genre == 9 && artist == 2)
	{
		printf("Your new artist to listen to is Boney M. Sister Sledge!");
	}
	if (music_genre == 9 && artist == 3)
	{
		printf("Your new artist to listen to is Gloria Gaynor!");
	}
	if (music_genre == 9 && artist == 4)
	{
		printf("Your new artist to listen to is Chic!");
	}
	if (music_genre == 9 && artist == 5)
	{
		printf("Your new artist to listen to is Village People!");
	}
	if (music_genre == 9 && artist == 6)
	{
		printf("Your new artist to listen to is KC and The Sunshine Band!");
	}
	else {
		printf("");
	}
}

void finalized_music10(int music_genre, int artist)
{
	if (music_genre == 10 && artist == 1)
	{
		printf("Your new artist to listen to is Louis Armstrong!");
	}
	if (music_genre == 10 && artist == 2)
	{
		printf("Your new artist to listen to is Billie Holiday!");
	}
	if (music_genre == 10 && artist == 3)
	{
		printf("Your new artist to listen to is Nat King!");
	}
	if (music_genre == 10 && artist == 4)
	{
		printf("Your new artist to listen to is John Coltrane!");
	}
	if (music_genre == 10 && artist == 5)
	{
		printf("Your new artist to listen to is Ella Fitzgerald!");
	}
	if (music_genre == 10 && artist == 6)
	{
		printf("Your new artist to listen to is Chet Baker!");
	}
	else {
		printf("");
	}
}

void finalized_music11(int music_genre, int artist)
{
	if (music_genre == 11 && artist == 1)
	{
		printf("Your new artist to listen to is Ariana Grande!");
	}
	if (music_genre == 11 && artist == 2)
	{
		printf("Your new artist to listen to is Adele!");
	}
	if (music_genre == 11 && artist == 3)
	{
		printf("YYour new artist to listen to is Harry Styles!");
	}
	if (music_genre == 11 && artist == 4)
	{
		printf("Your new artist to listen to is Michael Jackson!");
	}
	if (music_genre == 11 && artist == 5)
	{
		printf("Your new artist to listen to is Selena Gomez!");
	}
	if (music_genre == 11 && artist == 6)
	{
		printf("Your new artist to listen to is Taylor Swift!");
	}
	if (music_genre == 11 && artist == 7)
	{
		printf("Your new artist to listen to is Olivia Rodrigo!");
	}
	if (music_genre == 11 && artist == 8)
	{
		printf("Bruno Mars!");
	}
	else {
		printf("");
	}
}

void finalized_music12(int music_genre, int artist)
{
	if (music_genre == 12 && artist == 1)
	{
		printf("Your new artist to listen to is Lionel Richie!");
	}
	if (music_genre == 12 && artist == 2)
	{
		printf("Your new artist to listen to is Beyonce!");
	}
	if (music_genre == 12 && artist == 3)
	{
		printf("Your new artist to listen to is Stevie Wonder!");
	}
	if (music_genre == 12 && artist == 4)
	{
		printf("Your new artist to listen to is Tina Turner!");
	}
	if (music_genre == 12 && artist == 5)
	{
		printf("Your new artist to listen to is Giveon!");
	}
	if (music_genre == 12 && artist == 6)
	{
		printf("Your new artist to listen to is Prince!");
	}
	if (music_genre == 12 && artist == 7)
	{
		printf("Your new artist to listen to is Steve Lacy!");
	}
	if (music_genre == 12 && artist == 8)
	{
		printf("Your new artist to listen to is SZA!");
	}
	if (music_genre == 12 && artist == 9)
	{
		printf("Your new artist to listen to is Khalid!");
	}
	else {
		printf("");
	}
}

void finalized_music13(int music_genre, int artist)
{
	if (music_genre == 13 && artist == 1)
	{
		printf("Your new artist to listen to is BTS!");
	}
	if (music_genre == 13 && artist == 2)
	{
		printf("Your new artist to listen to is EXO!");
	}
	if (music_genre == 13 && artist == 3)
	{
		printf("Your new artist to listen to is BIGBANG!");
	}
	if (music_genre == 13 && artist == 4)
	{
		printf("Your new artist to listen to is TWICE!");
	}
	if (music_genre == 13 && artist == 5)
	{
		printf("Your new artist to listen to is Red Velvet!");
	}
	if (music_genre == 13 && artist == 6)
	{
		printf("Your new artist to listen to is BLACKPINK!");
	}
	if (music_genre == 13 && artist == 7)
	{
		printf("Your new artist to listen to is IU!");
	}
	if (music_genre == 13 && artist == 8)
	{
		printf("Your new artist to listen to is SUGA!");
	}
	else {
		printf("");
	}
}

void finalized_music14(int music_genre, int artist)
{
	if (music_genre == 14 && artist == 1)
	{
		printf("Your new artist to listen to is The Shadows!");
	}
	if (music_genre == 14 && artist == 2)
	{
		printf("Your new artist to listen to is Steve Vai!");
	}
	if (music_genre == 14 && artist == 3)
	{
		printf("Your new artist to listen to is Penguin Cafe Orchestra!");
	}
	if (music_genre == 14 && artist == 4)
	{
		printf("Your new artist to listen to is Liquid Tension Experiment!");
	}
	if (music_genre == 14 && artist == 5)
	{
		printf("Your new artist to listen to is Animals as Leaders!");
	}
	if (music_genre == 14 && artist == 6)
	{
		printf("Your new artist to listen to is Scale the Summit!");
	}
	else {
		printf("");
	}
}

void finalized_music15(int music_genre, int artist)
{
	if (music_genre == 15 && artist == 1)
	{
		printf("Your new artist to listen to is Pearl Jam!");
	}
	if (music_genre == 15 && artist == 2)
	{
		printf("Your new artist to listen to is Weezer!");
	}
	if (music_genre == 15 && artist == 3)
	{
		printf("Your new artist to listen to is The Killers!");
	}
	if (music_genre == 15 && artist == 4)
	{
		printf("Your new artist to listen to is Twenty-One Pilots!");
	}
	if (music_genre == 15 && artist == 5)
	{
		printf("Your new artist to listen to is My Chemical Romance!");
	}
	if (music_genre == 15 && artist == 6)
	{
		printf("Your new artist to listen to is Linkin Park!");
	}
	if (music_genre == 15 && artist == 7)
	{
		printf("Your new artist to listen to is The Cure!");
	}
	if (music_genre == 15 && artist == 8)
	{
		printf("Your new artist to listen to is Green Day!");
	}
	else {
		printf("");
	}
}

void finalized_music16(int music_genre, int artist)
{
	if (music_genre == 16 && artist == 1)
	{
		printf("Your new artist to listen to is Bad Bunny!");
	}
	if (music_genre == 16 && artist == 2)
	{
		printf("Your new artist to listen to is J Balvin!");
	}
	if (music_genre == 16 && artist == 3)
	{
		printf("Your new artist to listen to is Selena!");
	}
	if (music_genre == 16 && artist == 4)
	{
		printf("Your new artist to listen to is Marc Anthony!");
	}
	if (music_genre == 16 && artist == 5)
	{
		printf("Your new artist to listen to is Enrique Iglesias!");
	}
	if (music_genre == 16 && artist == 6)
	{
		printf("Your new artist to listen to is Luis Fonsi!");
	}
	if (music_genre == 16 && artist == 7)
	{
		printf("Your new artist to listen to is Gloria Estefan!");
	}
	if (music_genre == 16 && artist == 8)
	{
		printf("Your new artist to listen to is Celia Cruz!");
	}
	else {
		printf("");
	}
}

int drink_time(drink_1)
{
	int final_drink = 0;
	do
	{
		printf("Option 1: Zoe Coffeehouse\n");
		printf("Option 2: Roost Coffeehouse\n ");
		printf("Option 3: Pups & Cups Cafe\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_drink);
	} while (drink_1 == 1);
	do
	{
		printf("Option 1: Zoe Coffeehouse\n");
		printf("Option 2: Roost Coffeehouse\n ");
		printf("Option 3: Pups & Cups Cafe\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_drink);
	} while (drink_1 == 1);
	do
	{
		printf("Option 1: Zoe Coffeehouse\n");
		printf("Option 2: Roost Coffeehouse\n ");
		printf("Option 3: Pups & Cups Cafe\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_drink);
	} while (drink_1 == 1);


	return drink_1;
}
