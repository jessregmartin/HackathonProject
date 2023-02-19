#include "header.h"


/* HOBBY ZONE*/
int new_hobby(int hobby_1)
{
	int final_hobby = 0;


	if (hobby_1 == 1)
	{
		printf("Option 1: Make a homeade pizza \n");
		printf("Option 2: Make a cool dip \n ");
		printf("Option 3: make a pasta dish \n ");
		printf("Option 4: Make a salad \n");
		printf("Option 5: Make a quesadilla \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_hobby);
	}

	else if (hobby_1 == 2)
	{
		printf("Option 1: Make a pillow \n");
		printf("Option 2: Make a stove mat \n ");
		printf("Option 3: make a beanie \n ");
		printf("Option 4: Make a infinity scarf \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_hobby);
	} 

	else if (hobby_1 == 3)
	{
		printf("Option 1: Hike to a water fall \n");
		printf("Option 2: Hike to a pond \n ");
		printf("Option 3: Hike to a forest \n ");
		printf("Option 4: Hike to a Geocache \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_hobby);
	}

	return final_hobby;
}

// prints the option for the first option hobby to file
void finalized_hobby1(int final_hobby, int hobby_1)
{
	if (hobby_1 == 1 && final_hobby == 1)
	{
		printf("Your new hobby to try is cooking a homeade pizza!\n\n");
	}
	else if (hobby_1 == 1 && final_hobby == 2)
	{
		printf("Your new hobby to try is cooking a dip!\n\n");
	}
	else if (hobby_1 == 1 && final_hobby == 3)
	{
		printf("Your new hobby to try is cooking a pasta dish!\n\n");
	}
	else if (hobby_1 == 1 && final_hobby == 4)
	{
		printf("Your new hobby to try is cooking a salad!\n\n");
	}
	else if (hobby_1 == 1 && final_hobby == 5)
	{
		printf("Your new hobby to try is cooking a quesadilla!\n\n");
	}
}

// prints the option for the second option hobby to file
void finalized_hobby2(int final_hobby, int hobby_2)
{
	if (hobby_2 == 2 && final_hobby == 1)
	{
		printf("Your new hobby to try is crocheting a pillow!\n\n");
	}
	if (hobby_2 == 2 && final_hobby == 2)
	{
		printf("Your new hobby to try is crocheting a stove mat!\n\n");
	}
	if (hobby_2 == 2 && final_hobby == 3)
	{
		printf("Your new hobby to try is crocheting a beanie!\n\n");
	}
	if (hobby_2 == 2 && final_hobby == 4)
	{
		printf("Your new hobby to try is crocheting a scarf!\n\n");
	}
}

// prints the option for the third option hobby to file
void finalized_hobby3(int final_hobby, int hobby_3)
{
	if (hobby_3 == 3 && final_hobby == 1)
	{
		printf("Your new hobby to try is hiking to a waterfall!\n\n");
	}
	if (hobby_3 == 3 && final_hobby == 2)
	{
		printf("Your new hobby to try is hiking to a pond!\n\n");
	}
	if (hobby_3 == 3 && final_hobby == 3)
	{
		printf("Your new hobby to try is hiking to a forest!\n\n");
	}
	else if (hobby_3 == 3 && final_hobby == 4)
	{
		printf("Your new hobby to try is hiking to a geocache!\n\n");
	}
}

/* END HOBBY ZONE*/


/* START MUSIC ZONE */

int type_music(music_genre)
{
	int artist = 0;

	if (music_genre == 1)
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
	} 

	if (music_genre == 2)
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
	} 

	if (music_genre == 3)
	{
		printf("Option 1: George Strait\n");
		printf("Option 2: Carrie Underwood\n ");
		printf("Option 3: Luke Bryan \n ");
		printf("Option 4: Tim McGraw\n");
		printf("Option 5: Shania Twain\n");
		printf("Option 6: Johnny Cash \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} 

	if(music_genre == 4)
	{
		printf("Option 1: Ludwig van Beethoven \n");
		printf("Option 2: Wolfgang Amadeus Mozart\n ");
		printf("Option 3: Claude Debussy \n ");
		printf("Option 4: Johannes Brahms\n");
		printf("Option 5: Johann Bach\n");
		printf("Option 6: Frederic Chopin\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} 

	if(music_genre == 5)
	{
		printf("Option 1: The Clash\n");
		printf("Option 2: Black Flag\n ");
		printf("Option 3: Ramones \n ");
		printf("Option 4: Green Day\n");
		printf("Option 5: Misfits\n");
		printf("Option 6: Dead Kennedys \n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	}

	if(music_genre == 6)
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
	}

	if (music_genre == 7)
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
	} 

	if(music_genre == 8)
	{
		printf("Option 1: The Smithes \n");
		printf("Option 2: Artic Monkeys\n ");
		printf("Option 3: Modest Mouse\n ");
		printf("Option 4: Florence + the Machines\n");
		printf("Option 5: Radiohead \n");
		printf("Option 6: alt-J\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} 

	if (music_genre == 9)
	{
		printf("Option 1: Bee Gees \n");
		printf("Option 2: Boney M. Sister Sledge\n ");
		printf("Option 3: Gloria Gaynor\n ");
		printf("Option 4: Chic\n");
		printf("Option 5: Village People\n");
		printf("Option 6: KC and The Sunshine Band\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	}

	if(music_genre == 10)
	{
		printf("Option 1: Louis Armstrong \n");
		printf("Option 2: Billie Holiday \n ");
		printf("Option 3: Nat King Cole\n ");
		printf("Option 4: John Coltrane\n");
		printf("Option 5: Ella Fitzgerald\n");
		printf("Option 6: Chet Baker\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &artist);
	} 

	if(music_genre == 11)
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
	} 

	if (music_genre == 12)
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
	}

	if(music_genre == 13)
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
	} 

	if(music_genre == 14)
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
	} 

	if(music_genre == 15)
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
	} 


	if(music_genre == 16)
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
	} 


	return artist;
}


void finalized_music1(int music_genre, int artist)
{
	if (music_genre == 1 && artist == 1)
	{
		printf("Your new artist to listen to is Rolling Stones!\n\n");
	}
	if (music_genre == 1 && artist == 2)
	{
		printf("Your new artist to listen to is Pink Floyd!\n\n");
	}
	if (music_genre == 1 && artist == 3)
	{
		printf("Your new artist to listen to is Queen!\n\n");
	}
	if (music_genre == 1 && artist == 4)
	{
		printf("Your new artist to listen to is Beatles!\n\n");
	}
	if (music_genre == 1 && artist == 5)
	{
		printf("Your new artist to listen to is Metalica!\n\n");
	}
	if (music_genre == 1 && artist == 6)
	{
		printf("Your new artist to listen to is Led Zeplin!\n\n");
	}
	if (music_genre == 1 && artist == 7)
	{
		printf("Your new artist to listen to is Red Hot Chili Peppers!\n\n");
	}
}


void finalized_music2(int music_genre, int artist)
{
	if (music_genre == 2 && artist == 1)
	{
		printf("Your new artist to listen to is Drake!\n\n");
	}
	if (music_genre == 2 && artist == 2)
	{
		printf("Your new artist to listen to is 50 Cent\n\n");
	}
	if (music_genre == 2 && artist == 3)
	{
		printf("Your new artist to listen to is Kendrick Lamar!\n\n");
	}
	if (music_genre == 2 && artist == 4)
	{
		printf("Your new hobby to try is hiking to a geocache!\n\n");
	}
	if (music_genre == 2 && artist == 5)
	{
		printf("Your new artist to listen to is Nicki Minaj!\n\n");
	}
	if (music_genre == 2 && artist == 6)
	{
		printf("Your new artist to listen to is Jay-Z!\n\n");
	}
	if (music_genre == 2 && artist == 7)
	{
		printf("YYour new artist to listen to is Tupac!\n\n");
	}
	if (music_genre == 2 && artist == 8)
	{
		printf("Your new artist to listen to is Eminem!\n\n");
	}
}

void finalized_music3(int music_genre, int artist)
{
	if (music_genre == 3 && artist == 1)
	{
		printf("Your new artist to listen to is George Strait!\n\n");
	}
	if (music_genre == 3 && artist == 2)
	{
		printf("Your new artist to listen to is Carrie Underwood!\n\n");
	}
	if (music_genre == 3 && artist == 3)
	{
		printf("Your new artist to listen to is Luke Bryan!\n\n");
	}
	if (music_genre == 3 && artist == 4)
	{
		printf("Your new artist to listen to is Tim McGraw!\n\n");
	}
	if (music_genre == 3 && artist == 5)
	{
		printf("Your new artist to listen to is Shania Twain!\n\n");
	}
	if (music_genre == 3 && artist == 6)
	{
		printf("Your new artist to listen to is Johnny Cash!\n\n");
	}
}

void finalized_music4(int music_genre, int artist)
{
	if (music_genre == 4 && artist == 1)
	{
		printf("Your new artist to listen to is Ludwig can Beethoven!\n\n");
	}
	if (music_genre == 4 && artist == 2)
	{
		printf("Your new artist to listen to is Wolfgang Amadeus Mozart!\n\n");
	}
	if (music_genre == 4 && artist == 3)
	{
		printf("Your new artist to listen to is Claude Debussy!\n\n");
	}
	if (music_genre == 4 && artist == 4)
	{
		printf("Your new artist to listen to is Johannes Brahms!\n\n");
	}
	if (music_genre == 4 && artist == 5)
	{
		printf("Your new artist to listen to is Johann Bach!\n\n");
	}
	if (music_genre == 4 && artist == 6)
	{
		printf("Your new artist to listen to is Frederic Chopin!\n\n");
	}
}

void finalized_music5(int music_genre, int artist)
{
	if (music_genre == 5 && artist == 1)
	{
		printf("Your new artist to listen to is The Clash!\n\n");
	}
	if (music_genre == 5 && artist == 2)
	{
		printf("Your new artist to listen to is Black Flag!\n\n");
	}
	if (music_genre == 5 && artist == 3)
	{
		printf("Your new artist to listen to is Ramones!\n\n");
	}
	if (music_genre == 5 && artist == 4)
	{
		printf("Your new artist to listen to is Green Day!\n\n");
	}
	if (music_genre == 5 && artist == 5)
	{
		printf("Your new artist to listen to is Misfits!\n\n");
	}
	if (music_genre == 5 && artist == 6)
	{
		printf("Your new artist to listen to is Dead Kennedys!\n\n");
	}
}

void finalized_music6(int music_genre, int artist)
{
	if (music_genre == 6 && artist == 1)
	{
		printf("Your new artist to listen to is Marvin Gaye!\n\n");
	}
	if (music_genre == 6 && artist == 2)
	{
		printf("Your new artist to listen to is James Brown!\n\n");
	}
	if (music_genre == 6 && artist == 3)
	{
		printf("Your new artist to listen to is Aretha Franklin!\n\n");
	}
	if (music_genre == 6 && artist == 4)
	{
		printf("YYour new artist to listen to is Stevie Wonder!\n\n");
	}
	if (music_genre == 6 && artist == 5)
	{
		printf("Your new artist to listen to is Sam Cooke!\n\n");
	}
	if (music_genre == 6 && artist == 6)
	{
		printf("Your new artist to listen to is Smokey Robinson!\n\n");
	}
	if (music_genre == 6 && artist == 7)
	{
		printf("Your new artist to listen to is Ray Charles!\n\n");
	}
	if (music_genre == 6 && artist == 8)
	{
		printf("Your new artist to listen to is Al Green!\n\n");
	}
}

void finalized_music7(int music_genre, int artist)
{
	if (music_genre == 7 && artist == 1)
	{
		printf("Your new artist to listen to is Aerosmith!\n\n");
	}
	if (music_genre == 7 && artist == 2)
	{
		printf("Your new artist to listen to is AC/DC!\n\n");
	}
	if (music_genre == 7 && artist == 3)
	{
		printf("Your new artist to listen to is Guns N'Roses!\n\n");
	}
	if (music_genre == 7 && artist == 4)
	{
		printf("Your new artist to listen to is Nirvana!\n\n");
	}
	if (music_genre == 7 && artist == 5)
	{
		printf("Your new artist to listen to is Elvis Presley!\n\n");
	}
	if (music_genre == 7 && artist == 6)
	{
		printf("Your new artist to listen to is Bon Jovi!\n\n");
	}
	if (music_genre == 7 && artist == 7)
	{
		printf("Your new artist to listen to is Billy Joel!\n\n");
	}
	if (music_genre == 7 && artist == 8)
	{
		printf("Your new artist to listen to is Elton John!\n\n");
	}
}

void finalized_music8(int music_genre, int artist)
{
	if (music_genre == 8 && artist == 1)
	{
		printf("Your new artist to listen to is The Smithes!\n\n");
	}
	if (music_genre == 8 && artist == 2)
	{
		printf("Your new artist to listen to is Arctic Monkeys!\n\n");
	}
	if (music_genre == 8 && artist == 3)
	{
		printf("Your new artist to listen to is Modest Mouse!\n\n");
	}
	if (music_genre == 8 && artist == 4)
	{
		printf("Your new artist to listen to is Florence + the Machines!\n\n");
	}
	if (music_genre == 8 && artist == 5)
	{
		printf("Your new artist to listen to is Radiohead!\n\n");
	}
	if (music_genre == 8 && artist == 6)
	{
		printf("Your new artist to listen to is alt-J!\n\n");
	}
}

void finalized_music9(int music_genre, int artist)
{
	if (music_genre == 9 && artist == 1)
	{
		printf("Your new artist to listen to is Bee Gees!\n\n");
	}
	if (music_genre == 9 && artist == 2)
	{
		printf("Your new artist to listen to is Boney M. Sister Sledge!\n\n");
	}
	if (music_genre == 9 && artist == 3)
	{
		printf("Your new artist to listen to is Gloria Gaynor!\n\n");
	}
	if (music_genre == 9 && artist == 4)
	{
		printf("Your new artist to listen to is Chic!\n\n");
	}
	if (music_genre == 9 && artist == 5)
	{
		printf("Your new artist to listen to is Village People!\n\n");
	}
	if (music_genre == 9 && artist == 6)
	{
		printf("Your new artist to listen to is KC and The Sunshine Band!\n\n");
	}
}

void finalized_music10(int music_genre, int artist)
{
	if (music_genre == 10 && artist == 1)
	{
		printf("Your new artist to listen to is Louis Armstrong!\n\n");
	}
	if (music_genre == 10 && artist == 2)
	{
		printf("Your new artist to listen to is Billie Holiday!\n\n");
	}
	if (music_genre == 10 && artist == 3)
	{
		printf("Your new artist to listen to is Nat King!\n\n");
	}
	if (music_genre == 10 && artist == 4)
	{
		printf("Your new artist to listen to is John Coltrane!\n\n");
	}
	if (music_genre == 10 && artist == 5)
	{
		printf("Your new artist to listen to is Ella Fitzgerald!\n\n");
	}
	if (music_genre == 10 && artist == 6)
	{
		printf("Your new artist to listen to is Chet Baker!\n\n");
	}
}

void finalized_music11(int music_genre, int artist)
{
	if (music_genre == 11 && artist == 1)
	{
		printf("Your new artist to listen to is Ariana Grande!\n\n");
	}
	if (music_genre == 11 && artist == 2)
	{
		printf("Your new artist to listen to is Adele!\n\n");
	}
	if (music_genre == 11 && artist == 3)
	{
		printf("YYour new artist to listen to is Harry Styles!\n\n");
	}
	if (music_genre == 11 && artist == 4)
	{
		printf("Your new artist to listen to is Michael Jackson!\n\n");
	}
	if (music_genre == 11 && artist == 5)
	{
		printf("Your new artist to listen to is Selena Gomez!\n\n");
	}
	if (music_genre == 11 && artist == 6)
	{
		printf("Your new artist to listen to is Taylor Swift!\n\n");
	}
	if (music_genre == 11 && artist == 7)
	{
		printf("Your new artist to listen to is Olivia Rodrigo!\n\n");
	}
	if (music_genre == 11 && artist == 8)
	{
		printf("Your new artist to listen to is Bruno Mars!\n\n");
	}
}

void finalized_music12(int music_genre, int artist)
{
	if (music_genre == 12 && artist == 1)
	{
		printf("Your new artist to listen to is Lionel Richie!\n\n");
	}
	if (music_genre == 12 && artist == 2)
	{
		printf("Your new artist to listen to is Beyonce!\n\n");
	}
	if (music_genre == 12 && artist == 3)
	{
		printf("Your new artist to listen to is Stevie Wonder!\n\n");
	}
	if (music_genre == 12 && artist == 4)
	{
		printf("Your new artist to listen to is Tina Turner!\n\n");
	}
	if (music_genre == 12 && artist == 5)
	{
		printf("Your new artist to listen to is Giveon!\n\n");
	}
	if (music_genre == 12 && artist == 6)
	{
		printf("Your new artist to listen to is Prince!\n\n");
	}
	if (music_genre == 12 && artist == 7)
	{
		printf("Your new artist to listen to is Steve Lacy!\n\n");
	}
	if (music_genre == 12 && artist == 8)
	{
		printf("Your new artist to listen to is SZA!\n\n");
	}
	if (music_genre == 12 && artist == 9)
	{
		printf("Your new artist to listen to is Khalid!\n\n");
	}
}

void finalized_music13(int music_genre, int artist)
{
	if (music_genre == 13 && artist == 1)
	{
		printf("Your new artist to listen to is BTS!\n\n");
	}
	if (music_genre == 13 && artist == 2)
	{
		printf("Your new artist to listen to is EXO!\n\n");
	}
	if (music_genre == 13 && artist == 3)
	{
		printf("Your new artist to listen to is BIGBANG!\n\n");
	}
	if (music_genre == 13 && artist == 4)
	{
		printf("Your new artist to listen to is TWICE!\n\n");
	}
	if (music_genre == 13 && artist == 5)
	{
		printf("Your new artist to listen to is Red Velvet!\n\n");
	}
	if (music_genre == 13 && artist == 6)
	{
		printf("Your new artist to listen to is BLACKPINK!\n\n");
	}
	if (music_genre == 13 && artist == 7)
	{
		printf("Your new artist to listen to is IU!\n\n");
	}
	if (music_genre == 13 && artist == 8)
	{
		printf("Your new artist to listen to is SUGA!\n\n");
	}
}

void finalized_music14(int music_genre, int artist)
{
	if (music_genre == 14 && artist == 1)
	{
		printf("Your new artist to listen to is The Shadows!\n\n");
	}
	if (music_genre == 14 && artist == 2)
	{
		printf("Your new artist to listen to is Steve Vai!\n\n");
	}
	if (music_genre == 14 && artist == 3)
	{
		printf("Your new artist to listen to is Penguin Cafe Orchestra!\n\n");
	}
	if (music_genre == 14 && artist == 4)
	{
		printf("Your new artist to listen to is Liquid Tension Experiment!\n\n");
	}
	if (music_genre == 14 && artist == 5)
	{
		printf("Your new artist to listen to is Animals as Leaders!\n\n");
	}
	if (music_genre == 14 && artist == 6)
	{
		printf("Your new artist to listen to is Scale the Summit!\n\n");
	}
}

void finalized_music15(int music_genre, int artist)
{
	if (music_genre == 15 && artist == 1)
	{
		printf("Your new artist to listen to is Pearl Jam!\n\n");
	}
	if (music_genre == 15 && artist == 2)
	{
		printf("Your new artist to listen to is Weezer!\n\n");
	}
	if (music_genre == 15 && artist == 3)
	{
		printf("Your new artist to listen to is The Killers!\n\n");
	}
	if (music_genre == 15 && artist == 4)
	{
		printf("Your new artist to listen to is Twenty-One Pilots!\n\n");
	}
	if (music_genre == 15 && artist == 5)
	{
		printf("Your new artist to listen to is My Chemical Romance!\n\n");
	}
	if (music_genre == 15 && artist == 6)
	{
		printf("Your new artist to listen to is Linkin Park!\n\n");
	}
	if (music_genre == 15 && artist == 7)
	{
		printf("Your new artist to listen to is The Cure!\n\n");
	}
	if (music_genre == 15 && artist == 8)
	{
		printf("Your new artist to listen to is Green Day!\n\n");
	}
}

void finalized_music16(int music_genre, int artist)
{
	if (music_genre == 16 && artist == 1)
	{
		printf("Your new artist to listen to is Bad Bunny!\n\n");
	}
	if (music_genre == 16 && artist == 2)
	{
		printf("Your new artist to listen to is J Balvin!\n\n");
	}
	if (music_genre == 16 && artist == 3)
	{
		printf("Your new artist to listen to is Selena!\n\n");
	}
	if (music_genre == 16 && artist == 4)
	{
		printf("Your new artist to listen to is Marc Anthony!\n\n");
	}
	if (music_genre == 16 && artist == 5)
	{
		printf("Your new artist to listen to is Enrique Iglesias!\n\n");
	}
	if (music_genre == 16 && artist == 6)
	{
		printf("Your new artist to listen to is Luis Fonsi!\n\n");
	}
	if (music_genre == 16 && artist == 7)
	{
		printf("Your new artist to listen to is Gloria Estefan!\n\n");
	}
	if (music_genre == 16 && artist == 8)
	{
		printf("Your new artist to listen to is Celia Cruz!\n\n");
	}
}

int drink_time(drink_1)
{
	int final_drink = 0;
	if(drink_1 == 1)
	{
		printf("Option 1: Zoe Coffeehouse\n");
		printf("Option 2: Roost Coffeehouse\n ");
		printf("Option 3: Pups & Cups Cafe\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_drink);
	} 
	if(drink_1 == 2)
	{
		printf("Option 1: Popo\n");
		printf("Now, enter the numerical digit which you most want to try: \n");
		scanf("%d", &final_drink);
	} 
	if(drink_1 == 3)
	{
		printf("Option 1: Palouse Juice\n");
		printf("Option 2: Freshens\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_drink);
	} 


	return final_drink;
}


void finalized_drink1(int final_drink, int drink_1)
{
	if (final_drink == 1 && drink_1 == 1)
	{
		printf("Your new drink to try is Zoe Coffeehouse's coffee!\n\n");
	}
	if (final_drink == 1 && drink_1 == 2)
	{
		printf("Your new drink to try is Roost Coffeehouse's coffee!\n\n");
	}
	if (final_drink == 1 && drink_1 == 3)
	{
		printf("Your new drink to try is Pups & Cups Cafe's coffee!\n\n");
	}
}

void finalized_drink2(int final_drink, int drink_2)
{
	if (final_drink == 2 && drink_2 == 1)
	{
		printf("Your new drink to try is Popo's boba!\n\n");
	}
}

void finalized_drink3(int final_drink, int drink_3)
{
	if (final_drink == 3 && drink_3 == 1)
	{
		printf("Your new drink to try is Palouse Juice's juice!\n\n");
	}
	if (final_drink == 3 && drink_3 == 2)
	{
		printf("Your new drink to try is Freshens!\n\n");
	}
}


int foodie_time(foodplace)
{
	int final_food = 0;

	if(foodplace == 1)
	{
		printf("Option 1: Tokyo Seoul\n");
		printf("Option 2: Red Bento\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_food);
	} 

	if(foodplace == 2)
	{
		printf("Option 1: Sellas Calzone & Pizza\n");
		printf("Option 2: Porch Light Pizza\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_food);
	} 

	if(foodplace == 3)
	{
		printf("Option 1: Yia Yia Nikkis\n");
		printf("Option 2: The Black Cypress\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_food);
	} 

	if(foodplace == 4)
	{
		printf("Option 1: O-Ramen\n");
		printf("Option 2: Minhs\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_food);
	} 

	if (foodplace == 6)
	{
		printf("Option 1: Old European Restaurant\n");
		printf("Option 2: Crybaby Cafe\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_food);
	} 

	return final_food;
}

void finalized_food1(int final_food, int foodplace)
{
	if (final_food == 1 && foodplace == 1)
	{
		printf("Your new food to try is sushi at Tokya Seoul!\n\n");
	}
	if (final_food == 1 && foodplace == 2)
	{
		printf("Your new food to try is sushi at Red Bento!\n\n");
	}
}
void finalized_food2(int final_food, int foodplace)
{
	if (final_food == 2 && foodplace == 1)
	{
		printf("Your new food to try is pizza at Sellas Calzone & Pizza!\n\n");
	}
	if (final_food == 2 && foodplace == 2)
	{
		printf("Your new food to try is pizza at Porch Light Pizza!\n\n");
	}
}
void finalized_food3(int final_food, int foodplace)
{
	if (final_food == 3 && foodplace == 1)
	{
		printf("Your new food to try is Greek food at Yia Yia Nikkis!\n\n");
	}
	if (final_food == 3 && foodplace == 2)
	{
		printf("Your new food to try is Greek food at The Black Cypress!\n\n");
	}
}
void finalized_food4(int final_food, int foodplace)
{
	if (final_food == 4 && foodplace == 1)
	{
		printf("Your new food to try is soup at O-Ramen!\n\n");
	}
	if (final_food == 4 && foodplace == 2)
	{
		printf("Your new food to try is soup at Minhs!\n\n");
	}
}
void finalized_food5(int final_food, int foodplace)
{
	if (final_food == 5 && foodplace == 1)
	{
		printf("Your new food to try is breakfast at Old European Restaurant!\n\n");
	}
	if (final_food == 5 && foodplace == 2)
	{
		printf("Your new food to try is breakfast at Crybaby Cafe!\n\n");
	}
}

int activity_time(int activity)
{
	int final_activity = 0;

	if(activity == 1)
	{
		printf("Option 1: Bill Chipman Walking trail\n");
		printf("Option 2: Rec Pool\n ");
		printf("Option 1: Palouse Ridge Golf Course\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_activity);
	} 

	if(activity == 2)
	{
		printf("Option 1: Art Museum\n");
		printf("Option 2: Saturday Farmers Market (in Moscow ID)\n ");
		printf("Option 3: Zeppos \n");
		printf("Option 4: Sunshine Crafts and Flowers\n");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_activity);
	} 

	if(activity == 3)
	{
		printf("Option 1: Pullman Regional Theatre\n");
		printf("Option 2: Terracotta Pottery Classes\n ");
		printf("Now, enter the numerical digit which you most want to try : \n");
		scanf("%d", &final_activity);
	} 

	return final_activity;
}


void finalized_activity1(int final_activity, int activity)
{
	if (final_activity == 1 && activity == 1)
	{
		printf("Your new active activity to try is Bill Chipman Walking trail!\n\n");
	}
	if (final_activity == 1 && activity == 2)
	{
		printf("Your new active activity to try is Rec Pool!\n\n");
	}
	if (final_activity == 1 && activity == 3)
	{
		printf("Your new active activity to try is Palouse Ridge Golf Course!\n\n");
	}
}



void finalized_activity2(int final_activity, int activity)
{
	if (final_activity == 2 && activity == 1)
	{
		printf("Your new semi-sedentary activity to try is Art Museum !\n\n");
	}
	if (final_activity == 2 && activity == 2)
	{
		printf("Your new semi-sedentary activity to try is Saturday Farmers Market (in Moscow ID)!\n\n");
	}
	if (final_activity == 2 && activity == 3)
	{
		printf("Your new semi-sedentary activity to try is Zeppos!\n\n");
	}
	if (final_activity == 2 && activity == 4)
	{
		printf("Your new semi-sedentary activity to try is Sunshine Crafts and Flowers!\n\n");
	}
}


void finalized_activity3(int final_activity, int activity)
{
	if (final_activity == 3 && activity == 1)
	{
		printf("Your new sedentary activity to try is Pullman Regional Theatre!\n\n");
	}
	if (final_activity == 3 && activity == 2)
	{
		printf("Your new sedentary activity to try is Terracotta Pottery Classes!\n\n");
	}
}
