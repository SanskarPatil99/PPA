#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    fd=open("Hello.txt",O_RDWR);
   if(fd==-1)
   {
    printf("Unable to Unable to the file\n");
    return -1;
   }
   else
   {
    printf("Files Gets Sucessfully Opened: %d\n",fd);
    write(fd,"Jay Ganesh...",13);
    close(fd);
   }

    return EXIT_SUCCESS;
}
