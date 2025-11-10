#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char sec[]="varooooon";
	char pass[10];
	char name[15];
	while(1){
	printf("Enter the password ");
	gets(pass);
	int len = strlen(pass);
	if (len<9){
		printf("Invalid\n");
	}
	if (strcmp(pass,sec)==0){
		printf("The passwod is Correct !");
		printf("\nEnter your name: ");
		gets(name);
		break;
		
	}
	else {
		printf("The password is incorrect\n");
		
		++n;
	}
	if(n==3) {
		printf("Too many guesses : ");
		break;
	}}

return 0;	
}
