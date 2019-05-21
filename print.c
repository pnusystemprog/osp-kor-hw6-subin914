#include <stdio.h>
#include "phone.h"

void printAll()
{
	printf("<<Display all contacts in the PhoneBook>>\n");
	int i;
	for (i=0; i<size; i++) {
		printf("%s",PhoneBook[i].Name);
		printf("   %s\n",PhoneBook[i].PhoneNumber);
	}
}
