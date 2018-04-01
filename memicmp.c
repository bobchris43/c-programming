#include <stdio.h>
#include <string.h>

int main()
{
	char strA[10] = "house";
	char strB[10] = "HOUSE";
	
	
	if (!memicmp(strA, strB, 5*sizeof(char)))
	printf("The info are the same in both strA and strB\n");
	
	else
	printf("Error the info are not the same");
	return 0;
}
