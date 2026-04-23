#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,count=0,count1=0;
    scanf("%d",&N);
    int A[N];
    
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    
    for(int i=0 ; i<N ; i++){
        if(A[i]%2==0 && A[i]%3==0)count++;
        else if(A[i]%2==0)count++;
        else if(A[i]%3==0)count1++;
        
        
    }
    printf("%d %d",count,count1);
    return 0;
}
