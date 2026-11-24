#include<stdio.h>
int main()
{
    
    char ch='A';
    int no=11;
    float marks=90.78f;
    double d=90.57848;




    char *cp= &ch;
    int *ip=&no;
    float *fp=&marks;
    double *dp=&d;

    printf("%c",*cp);
    printf("%d",*ip);
    printf("%f",*fp);
    
    




    return 0;
}