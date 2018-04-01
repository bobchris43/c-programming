#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *mem_allocation;
	mem_allocation = calloc(20,sizeof(char));
	if(mem_allocation == NULL)
	{
		printf("could not allocate memory");
	}
	else
	{
		strcpy(mem_allocation, "C programming");
	}
	printf("The memory content is: %s\n", mem_allocation);
	free(mem_allocation);
}
