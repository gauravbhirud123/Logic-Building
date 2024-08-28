#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("program283.c",O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("File is Successfully open with FD : %d\n",fd);
        close(fd);
        printf("File gets Successfully Close\n");
    }

    return 0;
}