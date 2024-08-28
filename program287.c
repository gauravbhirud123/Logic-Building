#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char arr[] = "Logic Building with industrial project development";

    fd = open("Marvellous.txt",O_RDWR);
    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        iRet = write(fd,arr,14);
        printf("%d Bytes gets successfully return into the file\n",iRet);

        close(fd);
    }

    return 0;
}