#include <stdio.h>
#include <string.h>

int main()
{
	char strA[10] = "House";
	
	printf("strA before memmove\n");
	printf("The info in strA is %s\n", strA);
	
	if(memmove(strA+0, strA, strlen(strA))){
		printf("The data in strA have been moved\n");
		printf("strA is %s\n", strA);
	}
	else
	printf("Error in moving strA to new str2");
	return 0;
}
