#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int a;
	int b;
	
	printf("Enter your chosen value for a.\a\n");
	scanf("%d", a);
	
	printf("Enter your chosen value for b.\a\n");
	scanf("%d", b);
	
	if(a<=b)
	{
		printf("The value you have chosen for b already exists in the system memory!\a\n");
		printf("\n Please choose another value!\a\n");
		scanf("%d", b);
		
	}else
	{
		printf("Thankyou!\a\n");
		printf("Your value has been recognized!\a\n", b);
	}
	return 0;
}
