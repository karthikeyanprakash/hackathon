#include<stdio.h>

int decimaltobianry(int n)
{
  int remainder;
  int binary = 0, i = 1;
    while(n != 0) {
        remainder = n%2;
        
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
}
  printf("%d\n",binary);
  return(n);
}

int main()
{
  int number;
  printf("Enter the Postive number: ");
  scanf("%d", &number);
  int original=number-1;
  int j;
  for (j=0;j<3;j++)
  {
  decimaltobianry(number);
  printf("%d\n",number);
  number++;
  }
  for (j=0;j<3;j++)
  {
  decimaltobianry(original);
  printf("%d\n",original);
  original--;
  }
  return(0);
}
