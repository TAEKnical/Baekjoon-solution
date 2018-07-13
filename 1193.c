#include <stdio.h>
#include <math.h>
int main(void){

	int X=0,sum=0;
	int count=1;

	while(1){
	scanf("%d",&X);

	while(1){
		if(X==1){
			printf("1/1");
			return 0;
		}
		sum=sum+count;
		
		printf("%d\n",sum);
		
		if(sum+count+1>X){
			count=count+1;
			break;
		}
		count=count+1;
	}
	printf("%d %d", sum, count);
	
	if(count%2==0){
		printf("%d/%d",X-sum,count-(X-sum-1));}
	else
		printf("%d/%d",count-(X-sum)+1,count-1);
	}
	return 0;
}