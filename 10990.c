#include <stdio.h>

int main(void)
{
	int i,j, n=0;
	
	printf("count = ");
	scanf("%d", &n);

	for(i=0;i<n;i++){
		for(j=0;j<(2*i-1);j++){
			printf(" ");
		}
		printf("*");
		
	}

	return 0;
}