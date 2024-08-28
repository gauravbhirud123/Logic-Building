#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);
    if(fd == -1)
    {
        printf("Unable to Create File\n");
    }
    else
    {
        printf("File is Successfully Created with FD : %d\n",fd);
    }

    return 0;
}