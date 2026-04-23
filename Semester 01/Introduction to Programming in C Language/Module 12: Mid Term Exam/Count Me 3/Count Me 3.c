#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,countsmall=0,countcapital=0,countdigit=0;
    scanf("%d",&T);
    char S[10001];
    while(T--){ 
        countsmall=0;countcapital=0;countdigit=0;
        scanf("%s",S);

        for(int i=0 ; S[i]!='\0' ; i++){
            if(S[i]>='a' && S[i]<='z')countsmall++;
            else if(S[i]>='A' && S[i]<='Z')countcapital++;
            else if(S[i]>='0' && S[i]<='9')countdigit++;
        }
        printf("%d %d %d\n",countcapital,countsmall,countdigit);
           
    }
    
    return 0;
}
