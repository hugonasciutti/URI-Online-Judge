#include <stdio.h>
#include <math.h>



int r(int x, int y);
int b(int x, int y);
int c(int x, int y);


int main(){

	int i, n, x, y;

	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d%d",&x, &y);
		if(1 <= x && y <= 100){
			if(r(x,y)>b(x,y) && r(x,y)>c(x,y)){
				printf("Rafael ganhou\n");
			}else if(b(x,y)>r(x,y) && b(x,y)>c(x,y)){
				printf("Beto ganhou\n");
			}else if(c(x,y)>r(x,y) && c(x,y)>r(x,y)){
				printf("Carlos ganhou\n");
			}else{
				printf("\n");
			}
		}
	}



	return 0;
}

int r(int x, int y){
	return pow(3*x,2)+pow(y,2);
}

int b(int x, int y){
	return 2*(pow(x,2))+pow(5*y,2);
}

int c(int x, int y){
	return -100*x+pow(y,3);
}