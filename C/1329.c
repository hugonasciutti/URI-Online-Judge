//URI 1329
#include <stdio.h>

int main(){

	int i, j, N, scores[10000], marry, john;

	while(scanf("%d", &N)==1){
		john=0;
		marry=0;
		if(N==0)
			break;
		for(i=0;i<N;i++){
			scanf("%d", &scores[i]);
		}
		for (i = 0; i < N; i++){
			if(scores[i]==0){
				marry++;
			}else{
				john++;
			}
		}
		printf("Mary won %d times and John won %d times\n",marry,john);
	}

	return 0;
}