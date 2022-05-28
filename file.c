#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
void main()
{
int ff;
char fn[10];
char msg[20]="Good morning\n";
ff=open("examp.txt",O_CREAT|O_RDWR);
printf("ff= %d\n",ff);
if(ff!=-1)
{
printf("examp.txt is opened\n ");
write(ff,msg,sizeof(msg));
lseek(ff,0,SEEK_SET);
read(ff,fn,sizeof(msg));
printf("%s was written to file\n",fn);
close(ff);
}
}
