#include <stdio.h>
#include <string.h>
#include "phone.h"

void registerPhoneData(){
	
	char pw[10];
	char password[10] = "qw1234";
	static int try =1 ;

	while (try<4) {
	
	printf("Password : ");
	scanf("%s", pw);
	
	if (!strcmp(pw,password)  ) {
		printf("New User Name : ");
		scanf("%s", PhoneBook[size].Name);
		printf("PhoneNumber : ");
		scanf("%s", PhoneBook[size].PhoneNumber);
		printf("Registered.\n");
		size++;
		break;
	}
	else {
		if (try == 1) printf(">>Not Matched !!!\n");
		if (try == 2) printf(">>Not Matched (twice) !!!\n");
		if (try == 3) printf(">>Not Matched (3 times) !!!\n");
		try++;
	}
	
	
	}
	
	if ( try > 3) printf("You are not allowed to acces PhoneBook.\n");

}
