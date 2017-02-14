#include <stdio.h>


int main(){
	//Vertical Sum
	//Horizontal Multiply

	int i,j,n;

	scanf("%d", &n);

	int matrix[n][3];
	matrix[0][0]=1;
	if(1<n && n<1000){
		for(i=0;i<n;i++){
			printf("%d", matrix[i][0]);
			for(j=0;j<3;j++){
				if(j>=1){
					matrix[i][j] = matrix[i][0] * matrix[i][j-1];
					printf(" %d", matrix[i][j]);
				}
			}
			printf("\n");
			matrix[i+1][0] = matrix[i][0]+1;
		}
	}

	return 0;
}