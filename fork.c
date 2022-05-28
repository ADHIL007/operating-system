#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
pid_t pid;
pid = fork();
printf(" good morning\n");
}
