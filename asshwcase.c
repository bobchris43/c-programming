#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LEN 150

main()
{

	char buf[LEN];
   	time_t curtime;
   	struct tm *loc_time;
   	curtime = time (NULL);
   	loc_time = localtime (&curtime);
   	printf("%s", asctime (loc_time));
   	strftime (buf, LEN, "%A, %b %d.\n", loc_time);
   	fputs (buf, stdout);
   	strftime (buf, LEN, "%I:%M %p.\n", loc_time);
   	fputs (buf, stdout);
   	
	char firstname[20];
	char lastname[20];

	printf("\n\nWhat's your FIRST NAME?\a\n", firstname);
	scanf("%s", &firstname);
	
	printf("What's your LAST NAME?\a\n", lastname);
	scanf("%s", &lastname);

	int choice1;
	int choice2;
	
	printf("%s %s which cuisine do you want?\a\n", firstname, lastname);
	printf("1. The Local Cuisine\n");
	printf("2. The International Cuisine\n");

	do
	{
		printf("Enter your choice:\a");
		scanf("%d", &choice1);
		switch (choice1)
		{
		case (1):
			{
				printf("\n\nWhich local cuisine would you like?\a\n");
				printf("1. Egusi\n");
				printf("2. Moi moi\n");
				printf("3. Beans and plantain\n");
				printf("4. Jollof rice\n");
				printf("5. Fried rice\n");
				
				printf("Enter your choice:\a ");
				scanf("%d", &choice2);
				
				if (choice2 == 1)
				{
					printf("Thankyou for choosing egusi soup\a\n");
					printf("The price is #100. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
					
				}else if (choice2 == 2)
				{
					printf("Thankyou for choosing moi moi\a\n");
					printf("The price is #50. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else if (choice2 == 3)
				{
					printf("Thankyou for choosing egusi soup\a\n");
					printf("The price is #120. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else if (choice2 == 4)
				{
					printf("Thankyou for choosing jollof rice\a\n");
					printf("The price is #75. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else if (choice2 == 5)
				{
					printf("Thankyou for choosing fried rice\a\n");
					printf("The price is #700. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else
				{
					printf("That is not a valid choice\a\n");
					break;
				}
				
			}
			
			
			case (2):
			{
				printf("\n\nWhich item from the international cuisine would you like?\a\n");
				printf("1. Burger\n");
				printf("2. Chicken and chips\n");
				printf("3. Tofu with salad\n");
				printf("4. Rice and sauce\n");
				printf("5. Buttered corn\n");
				
				
				printf("Enter your choice:\a ");
				scanf("%d", &choice2);
				
				
				if (choice2 == 1)
				{
					printf("Thankyou for choosing burger\a\n");
					printf("The price is #1500. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else if (choice2 == 2)
				{
					printf("Thankyou for choosing chicken and chips\a\n");
					printf("The price is #800. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else if (choice2 == 3)
				{
					printf("Thankyou for choosing tofu and salad\a\n");
					printf("The price is #450. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else if (choice2 == 4)
				{
					printf("Thankyou for choosing rice and sauce\a\n");
					printf("The price is #750. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
				}else if (choice2 == 5)
				{
					printf("Thankyou for choosing buttered corn\a\n");
					printf("The price is #25. Press enter to pay\a\n");
					printf("Thanks for paying. Enjoy your meal %s %s!", firstname, lastname);
					printf("\n\n\n");
					break;
					
				}else
				{
					printf("That is not a valid choice\a\n");
					break;
				}
			}

			
				
		}
	}
	while ((choice1 < 1) || (choice1 > 7));
	
	return 0;
}
