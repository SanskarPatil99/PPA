#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    fd= creat("Demo.txt",0777);
    if(fd==-1)
        {
            printf("Unable to Create The File");
            return -1;
        }
    else 
    {
        printf("File Gets Created with fd:%d\n",fd);
    }

    return EXIT_SUCCESS;
}
