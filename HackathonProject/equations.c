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
void finalized_hobby1(FILE* output_stream, int final_hobby, int hobby_1)
{
	if (hobby_1 == 1 && final_hobby == 1)
	{
		fprintf(output_stream, "Your new hobby to try is cooking a homeade pizza!");
	}
	if (hobby_1 == 1 && final_hobby == 2)
	{
		fprintf(output_stream, "Your new hobby to try is cooking a dip!");
	}
	if (hobby_1 == 1 && final_hobby == 3)
	{
		fprintf(output_stream, "Your new hobby to try is cooking a pasta dish!");
	}
	if (hobby_1 == 1 && final_hobby == 4)
	{
		fprintf(output_stream, "Your new hobby to try is cooking a salad!");
	}
	if (hobby_1 == 1 && final_hobby == 5)
	{
		fprintf(output_stream, "Your new hobby to try is cooking a quesadilla!");
	}
	else
	{
		return 0;
	}
}

// prints the option for the second option hobby to file
void finalized_hobby2(FILE* output_stream, int final_hobby, int hobby_2)
{
	if (hobby_2 == 2 && final_hobby == 1)
	{
		fprintf(output_stream, "Your new hobby to try is crocheting a pillow!");
	}
	if (hobby_2 == 2 && final_hobby == 2)
	{
		fprintf(output_stream, "Your new hobby to try is crocheting a stove mat!");
	}
	if (hobby_2 == 2 && final_hobby == 3)
	{
		fprintf(output_stream, "Your new hobby to try is crocheting a beanie!");
	}
	if (hobby_2 == 2 && final_hobby == 4)
	{
		fprintf(output_stream, "Your new hobby to try is crocheting a scarf!");
	}
	else
	{
		return 0;
	}
}

// prints the option for the third option hobby to file
void finalized_hobby2(FILE* output_stream, int final_hobby, int hobby_3)
{
	if (hobby_3 == 3 && final_hobby == 1)
	{
		fprintf(output_stream, "Your new hobby to try is hiking to a waterfall!");
	}
	if (hobby_3 == 3 && final_hobby == 2)
	{
		fprintf(output_stream, "Your new hobby to try is hiking to a pond!");
	}
	if (hobby_3 == 3 && final_hobby == 3)
	{
		fprintf(output_stream, "Your new hobby to try is hiking to a forest!");
	}
	if (hobby_3 == 3 && final_hobby == 4)
	{
		fprintf(output_stream, "Your new hobby to try is hiking to a geocache!");
	}
	else
	{
		return 0;
	}
}

/* END HOBBY ZONE*/


/* START MUSIC ZONE */


