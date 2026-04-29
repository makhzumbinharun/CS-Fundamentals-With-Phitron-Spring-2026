#include<stdio.h>
int main(){

  int N;
  printf("Enter a number: ");
  scanf("%d", &N);
  if(N<0) printf("%d is a negative number.\n", N);
  else printf("%d is a positive number.\n", N);
  return 0;
}
