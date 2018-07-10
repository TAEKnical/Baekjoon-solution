#include <stdio.h>
#define SIZE 100
int main(void){
    int i,j;
    char S[SIZE];
    scanf("%s",S);
    
    for(i='a';i<='z';i++){
        for(j=0;S[j]!='\0';j++){
            if(i==S[j]){
                printf("%d ",j);
                break;
            }
        }
        if(S[j]=='\0'){
            printf("-1 ");
        }
    }
    
    return 0;
}