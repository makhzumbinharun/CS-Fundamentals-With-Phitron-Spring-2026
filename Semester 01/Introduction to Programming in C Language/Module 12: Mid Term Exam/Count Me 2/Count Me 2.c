#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count=0;
    char S[100000];
    scanf("%s",S);
    
    for(int i=0 ; i<strlen(S) ; i++){
        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u' && 
           S[i]!='A' && S[i]!='E' && S[i]!='I' && S[i]!='O' && S[i]!='U'){ 
            count++;
        }
        
    }
    printf("%d",count);
        
    return 0;
}
