#include "header.h"

char new_hobby(int hobby_1)
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