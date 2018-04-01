#include <stdio.h>
#include <string.h>

int main()
{
	char strA[10] = "House";
	char strB[10];
	
	if (memcpy(strB,strA,strlen(strA)))
	{
		printf("The data in strA is copied into strB\n");
		printf("strA contains %s and strB contains %s\n", strA, strB);
	}
	else
	printf("Error copying strA to strB\n");
	return 0;
}
