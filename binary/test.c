#include <stdio.h>

int decimaltobianry(int n)
{
  int dnumber, remainder;
  int base = 1, binary = 0, ones = 0;
  dnumber = n;
  while (n > 0)
  {
      remainder = n % 2;
      if (remainder == 1)
      {
          ones++;
      }
      binary = binary + remainder * base;
      n = n/ 2;
      base = base * 10;
}
//printf("Input number is = %d\n", dnumber);
//printf("Its binary equivalent is = %d\n", binary);
//printf("No.of 1's in the binary number is = %d\n", ones);
//printf("%d\n",ones);
return ones;
}

void main()
{
    int number,i=0,count=0,k=0;
    int temp[100];
    int temp1[100];
    printf("Enter a decimal integer: ");
    scanf("%d", &number);
    int original = number;
    int original1 = number;
    for(i=0;i<20;i++)
    {
      temp[i] = decimaltobianry(number);
      //printf("%d %d\n",i,temp[i]);
        number++;
      }
//printf("%d",sizeof(temp));
    for(int j=0;j<i;j++)
    {
    if(temp[0] == temp[j+1])
    {
      int index = j+1;
        //printf("%d,%d\n",temp[0],temp[j+1]);
        int result = original + index;
        printf("Next largest number having same ones is: %d\n", result );
        break;
    }
  }
    //=======================================================================================
    for(i=0;i<20;i++)
    {
      temp1[i] = decimaltobianry(original);
      //printf("%d %d\n",i,temp[i]);
      if(original != 0)
      {
        original--;
      }
}

for(int k=0;k<i;k++)
  {
  if(temp1[0] == temp1[k+1])
  {
      int index1 = k+1;
      //printf("%d,%d\n",temp[0],temp[j+1]);
      int result1 = original1 - index1;
      printf("Next smallest number having same ones is: %d\n", result1 );
      break;
  }

}
}
