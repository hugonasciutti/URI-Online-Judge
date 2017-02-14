#include <stdio.h>

int main(){

	int n, d[] = {100, 50, 20, 10, 5, 2, 1};
	int c=0, t=0;

	scanf("%d", &n);

	printf("%d\n",n);

	while(d[t]>=1){

		c=0;

		while(n>=d[t]){
			n-=d[t];
			c++;
		}
    
        printf("%d nota(s) de R$ %d,00\n", c, d[t]);

        t++;
	}



	return 0;
}