#include <stdio.h>

int main(){

	int days=365;


	scanf("%d", &days);

	int year = days/365;
	days -= year*365;

	int month = days/30;
	days -= month*30;


	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year,month,days);





	return 0;
}