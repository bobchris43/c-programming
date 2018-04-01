#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
	char *a = (char *)malloc(5*sizeof(char));
	printf("Values before memset\n");
	for (i = 0; i < 5; ++i)
	printf(" a[%d] = %d, ", i, a[i]);
	
	memset(a, 3, 5*sizeof(char));
	printf("\nValues after memset\n");
	for (i = 0; i < 5; ++i)
	printf(" a[%d] = %d, ", i, a[i]);
	free(a);
	return 0;
}
