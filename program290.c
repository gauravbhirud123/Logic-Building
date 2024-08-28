#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char arr[50] = {'\0'};

    fd = open("Marvellous.txt",O_RDWR);
    if(fd == -1)
    {
        printf("Unable to Create File\n");
    }
    else
    {
        iRet = read(fd,arr,22);
        printf("%d Bytes gets successfully read from the file\n",iRet);

        printf("%s\n",arr);

        close(fd);
    }

    return 0;
}