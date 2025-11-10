#include<stdio.h>
int main(){
	int row,col;
	int i,j;
	int sum = 0;
	printf("Enter the rows:");
	scanf("%d",&row);
	printf("\nEnter the column:");
	scanf("%d",&col);
	int arr[row][col];
	printf("\nEnter the element of [%d] x [%d] matrix",row,col);
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("\nElement [%d][%d] ",i,j);
	    	scanf("%d",&arr[i][j]);
			
		}
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		printf("%d ",arr[i][j]);
		   sum = sum + arr[i][j];	
        }
         printf("\n");
    }
    printf("The sum of element is: %d",sum);
    
return 0;

}
