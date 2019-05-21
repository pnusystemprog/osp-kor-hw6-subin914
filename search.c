#include <stdio.h>
#include <string.h>
#include "phone.h"

void searchByName(){

	char search[10];
	int i;
	
	printf("Enter a name to search : ");
	scanf("%s", search);
	
	for (i=0; i<size; i++) {
		if ( !strcmp(PhoneBook[i].Name,search) ) {
			printf("%s	%s\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
			break;
		}
	}
	
	if (i==size) printf("Oops! %s is not int the PhoneBook\n", search);
}

