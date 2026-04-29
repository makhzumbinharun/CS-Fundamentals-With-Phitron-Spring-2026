#include<stdio.h>
int main(){

  int N;
  printf("Enter a number: ");
  scanf("%d", &N);
  if(N%2==0) printf("%d is an even number.\n", N);
  else printf("%d is an odd number.\n", N);
  return 0;
}
