#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
void main()
{
    int fd;
    char chara;
    fd = shm_open("/oslab",O_CREAT|O_RDWR,0666);
    ftruncate(fd,sizeof(char));
    char *data=(char *)mmap(NULL,sizeof(char),PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
   scanf("%s",&chara);
   data[0]=chara;
    munmap(data,sizeof(char));
    close(fd);
     
}