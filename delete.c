#include <stdio.h>
#include <string.h>
#include "phone.h"

void deleteByName() {

	char delname[10];
	int i,j;
	printf("Enter a name to delete : ");
	scanf("%s", delname);
	for (i=0; i<size; i++) {
		if (!strcmp(delname,PhoneBook[i].Name)) {
			for(j = i; j<size-1; j++) {
				PhoneBook[j] = PhoneBook[j+1];
				
			}
			size--;
			printf("Deleted.\n");
			break;
		}
	}
	
	if (j == size-1) printf("Oops! %s is not int the PhoneBook\n", delname);
	
	
}

