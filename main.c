#include <stdio.h>


int main() {
	int row,column,row2,column2;
	printf("Please enter the row:");
	scanf("%d",&row);
	printf("Please enter the column:");
	scanf("%d",&column);
	int i,j;
	int matrix[100][100];
	int matrix2[100][100];
	int sumMatrix[100][100];
	for(i=1;i<=row;i++){
		for(j=1;j<=column;j++){
			printf("\nEnter the values for matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}	
	}
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\n%d\t",matrix[i+1][j+1]);
		}
	}
	printf("\n");		
	
	printf("Please enter the row:");
	scanf("%d",&row2);
	printf("Please enter the column:");
	scanf("%d",&column2);
	for(i=1;i<=row2;i++){
		for(j=1;j<=column2;j++){
			printf("\nEnter the values for matrix2[%d][%d]: ",i,j);
			scanf("%d",&matrix2[i][j]);
		}	
	}		
	for(i=0;i<row2;i++){
		for(j=0;j<column2;j++){
			printf("\n%d\t",matrix2[i+1][j+1]);
		}
	}	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		
		sumMatrix[i+1][j+1] = matrix[i+1][j+1] + matrix2[i+1][j+1];
	}
	}
	printf("\n");
	printf("Matrix + Matrix1 -->:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%3d",sumMatrix[i+1][j+1]);
		}
		printf("\n");
	}
	
	return 0;
}
