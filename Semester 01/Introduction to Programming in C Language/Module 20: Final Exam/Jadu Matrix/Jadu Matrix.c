#include<stdio.h>
int main(){
    int N, M;
    
    scanf("%d %d", &N, &M);
    
    if(N == M){
        int matrix[N][M];
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                scanf("%d", &matrix[i][j]);
            }
        }
        
        int count = 0;
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(i == j || i + j == N - 1){
                    if(matrix[i][j] != 1){
                        count++;
                        break;
                    }
                }
                else if(i != j && i + j != N - 1){
                    if(matrix[i][j] != 0){
                        count++;
                        break;
                    }
                }

            }
            if(count == 1) break;
        }
        if(count == 0) printf("YES");
        else printf("NO");

    }
    else  printf("NO");
    return 0;
}
