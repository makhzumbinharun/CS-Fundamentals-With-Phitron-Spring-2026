#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    
    for(int i = 1; i <= T; i++){
        long long int M, A, B, C;

        scanf("%lld %lld %lld %lld",&M, &A, &B, &C);

        long long int Multi = (A * B * C);
        long long int MissingNum = M / Multi;

        if(M % Multi == 0 || Multi == 0){
            printf("%lld\n",MissingNum);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}
