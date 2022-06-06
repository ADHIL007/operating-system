#include<stdio.h>
#include<stdlib.h>
struct fcfs
{
int pid;
int btime,wtime,tttime;
}p[10];
void main()
{
int i ,n;
int twtime=0,ttttime=0;
printf("FCFS scheduling...");
printf("\nEnter number of process");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p[i].pid=1;
printf("\nenter burst time of %d",p[i].pid);
scanf("%d",&p[i].btime);
}
p[0].wtime = 0;
p[0].tttime = p[0].btime;
for(i=0;i<n;i++)
{
p[i].wtime = p[i-1].wtime+p[i-1].btime;
p[i].tttime = p[i].btime + p[i].wtime;
ttttime+=p[i].tttime;
twtime+=p[i].wtime;
}
printf("\n total Turn around time = %d ",ttttime);
printf("\n Total waiting time = %d ",twtime);
printf("\n Avg Turn around time = %d",ttttime/n);
printf("\n Avg waiting time = %d",twtime/n);
}
