#include <stdio.h>
void main(){
  int num,i,count = 0;
  printf("Enter any number: ");
  scanf("%d", &num);
  for (i=2;i<=num/2;i++){
    if (num % i == 0){
      printf("%d is not a prime number\n",num);
      count=1;
      break;
    }
  }
  if (count==0)
    printf("%d is a prime number\n",num);
}
