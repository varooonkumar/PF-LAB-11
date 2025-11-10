#include<stdio.h>
int main(){

	FILE *fir;
	fir=fopen("C:/filehandlingInC/akk.txt","r");
	char ch;
while ((ch = fgetc(fir)) != EOF){
		
        putchar(ch);                     
    }
    fclose(fir);
}
