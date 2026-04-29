#include<stdio.h>
int main(){
int N;
scanf("%d", &N);
  for(int i=1; i<=200; i++){
      if(i%2!=0){
        printf("%d * %d = %d\n",N, i, N*i);
      }
}
  return 0;
}
