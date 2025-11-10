#include <stdio.h>
int main(){
	FILE *fir;
	fir = fopen("C:/filehandlingInC/akk.txt","a");
	if(fir==NULL){
		printf("Error!");
		return 1;
	}
	fprintf(fir,"I have added a new quote to file");
	fclose(fir);
	fir = fopen("C:/filehandlingInC/akk.txt","r");
		if(fir==NULL){
		printf("Error!");
		return 1;
	}
	char ch ;
	while ((ch = fgetc(fir)) != EOF){
		putchar(ch);
	}
	fclose(fir);
	
}
