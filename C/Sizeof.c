#include<stdio.h>

int main()
{  
    char ch='A';  //1 byte
    int i = 11;   //4 byte
    float no=3.14f;//4 byte
    double d=90.785634;//8 byte
    
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(d));
    
    
   
   
    return 0;
}