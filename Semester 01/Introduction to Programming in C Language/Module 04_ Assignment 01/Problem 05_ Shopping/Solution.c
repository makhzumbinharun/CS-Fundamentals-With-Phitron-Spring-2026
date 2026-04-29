#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N>1000) printf("I will buy Punjabi\n");
    if(N-1000>=500) printf("I will buy new shoes\n");
    if(N-1000>=500) printf("Alisa will buy new shoes\n");
    if(N<=1000) printf("Bad luck!\n");
    return 0;
}
