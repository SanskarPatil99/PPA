#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Arr[20]={'\0'};
    fd=open("Hello.txt",O_RDONLY);
   if(fd==-1)
   {
    printf("Unable to Open the file\n");
    return -1;
   }
   else
   {
    printf("Files Gets Sucessfully Opened: %d\n",fd);
    read(fd,Arr,13);
    printf("Data From File is :%s\n",Arr);
    close(fd);
   }

    return EXIT_SUCCESS;
}
