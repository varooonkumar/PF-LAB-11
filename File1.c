#include <stdio.h>
int main(){
	FILE *fir;
	fir = fopen("C:/filehandlingInC/akk.txt","w");
	fprintf(fir,"This is first file in c \n");
	if (fir == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
	fclose(fir);
	
	
}
