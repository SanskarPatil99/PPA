#include<stdio.h>
  
int main()
{
    int value1=0,value2=0,Ans=0;

    printf("Enter First Number: ");
    scanf("%d",&value1);
    
    printf("Enter Second Number: ");
    scanf("%d",&value2);

    Ans=value1+value2; //bussines Logic
    printf("Addition is : %d\n",Ans);

    return 0;

}