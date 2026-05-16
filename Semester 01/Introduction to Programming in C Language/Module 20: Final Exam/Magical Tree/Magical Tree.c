#include<stdio.h>
int main(){
    int N;
    
    scanf("%d", &N);
    if(N % 2 != 0){
        int n = N / 2;
        
        for(int r = 1; r <= 6 + n; r++){
            for(int s = 6 + n - r; s >= 1; s--){
                printf(" ");
            }
            for(int c = 1; c < r * 2; c++){
                printf("*");
            }
            printf("\n");
        }
        
        for(int l = 1; l <= 5; l++){
            for(int s = 1; s <= 5; s++){
                printf(" ");
            }
            
            for(int p = 1; p <= N; p++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
