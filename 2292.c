#include <stdio.h>
int main(void){

	int N;
	int i,stack=1;
	scanf("%d",&N);

	if(N==1){
		printf("%d",N);
		return 0;
	}

	for(i=0;stack<N;i++){
		stack=stack+i*6;
	}
	
	printf("%d",i);
	/*1(1)
	  2~7(2)
	  8~19(3)
	  20~37(4)
	  38~51
	  ..
	  */

return 0;
}