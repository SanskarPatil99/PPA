#include<stdio.h>
void Addition(int no1,int no2)
{
  int result=0;
  result=no1+no2;//Business logic
  printf("Addition is: %d",result);
}

int main()
{
   int value1=0,value2=0;
   printf("Enter number 1: ");
   scanf("%d",&value1);

   printf("Enter number 2: ");
   scanf("%d",&value2);

   Addition(value1,value2);


    return 0;

}