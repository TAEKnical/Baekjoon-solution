#include <stdio.h>
#define SIZE 1000001
int main(void){
	char S[SIZE];
	int i,j,count=0;

	gets(S);

	for(i=0;S[i]!='\0';i++){
		if(S[i] == ' ')
			count++;
		if(S[i] == ' ' && S[i+1]=='\0')
			count--;
	}

	if(S[0] == ' ')
		count--;
	
	printf("%d",count+1);

		return 0;
}