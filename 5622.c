#include <stdio.h>
#define SIZE 16
int main(void){
	
	char s[SIZE];
	int i;
	int time=0,stack;

	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++){
		if('A'<=s[i] && s[i]<='C'){
			time+=3;
			stack = 3;
		}
		if('D'<=s[i] && s[i]<='F'){
			time+=4;
			stack = 4;
		}
		if('G'<=s[i] && s[i]<='I'){
			time+=5;
			stack = 5;
		}
		if('J'<=s[i] && s[i]<='L'){
			time+=6;
			stack =6;
		}
		if('M'<=s[i] && s[i]<='O'){
			time+=7;
			stack = 7;
		}
		if('P'<=s[i] && s[i]<='R'){
			time+=8;
			stack =8;
		}
		if('S'<=s[i] && s[i]<='U'){
			time+=9;
			stack = 9;
		}
		if('V'<=s[i] && s[i]<='Z'){
			time+=10;
			stack = 10;
		}

	}
	printf("%d",time);
	return 0;
}