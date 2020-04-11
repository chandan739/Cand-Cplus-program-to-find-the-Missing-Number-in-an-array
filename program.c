/* formulas

  missing number = sum of numbers from 1 to n - sum of all numbers on array

        sum of numbers from 1 to n = (n*(n+1))/2 */



#include<stdio.h>
int main()
{
  int n=5,i,sum=0,missing_number,total=0;
  int a[]={1,2,0,4,5};
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];//sum of all numbers on array
  }
  total=(n*(n+1))/2;//sum of numbers from 1 to n
  missing_number=total-sum;
  printf("The missing number is\n%d",missing_number);
}
