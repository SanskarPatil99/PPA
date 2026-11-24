#include<stdio.h>

int main()
{  
    char ch='A';  //1 byte
    int i = 11;   //4 byte
    float no=3.14f;//4 byte
    double d=90.785634;//8 byte
    printf("%c\n",ch);
    printf("%d\n",i);//d decimal
    printf("%f\n",no);
    printf("%lf\n",d);
    
   
   
    return 0;
}