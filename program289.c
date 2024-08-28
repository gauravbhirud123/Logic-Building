#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char arr[] = " Angular Web Development";

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to Create File\n");
    }
    else
    {
        iRet = write(fd,arr,24);
        printf("%d Bytes gets successfully return into the file\n",iRet);

        close(fd);
    }

    return 0;
}