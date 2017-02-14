#include <stdio.h>

int main(){

	int code, quantity;
	float item_1 = 4.0;
	float item_2 = 4.5;
	float item_3 = 5.0;
	float item_4 = 2.0;
	float item_5 = 1.5;

	scanf("%d%d", &code, &quantity);


	switch(code){
		case 1:
			printf("Total: R$ %.2f\n", item_1*quantity);
			break;
		case 2:
			printf("Total: R$ %.2f\n", item_2*quantity);
			break;
		case 3:
			printf("Total: R$ %.2f\n", item_3*quantity);
			break;
		case 4:
			printf("Total: R$ %.2f\n", item_4*quantity);
			break;
		case 5:
			printf("Total: R$ %.2f\n", item_5*quantity);
			break;
		default:
			printf("Number invalid\n");			
	}


	return 0;
}