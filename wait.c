#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void main()
{
pid_t pid;
pid=fork();
int status;
if(pid==0)
{
printf("child process");
sleep(5);
}
else
{
printf("parent process\n");
wait(&status);
printf("back to parent process\n");
printf("exit status %d\n",WEXITSTATUS(status));
}
}


