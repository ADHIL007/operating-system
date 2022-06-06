#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
void main()
{
    int fd;
    fd= shm_open("/oslab",O_RDONLY,0666);
   char *data=(char *)mmap(NULL,sizeof(char),PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
    printf("%s",data[0]);
    munmap(data,sizeof(char));
    close(fd);
     
}