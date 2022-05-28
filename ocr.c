#include<stdio.h>
#include<dirent.h>
#include<sys/types.h>
void main()
{
DIR *dop;
struct dirent *dr;
char dn[10];
printf("enter directory name");
scanf("%s",dn);
dop=opendir(dn);
if (dop!=NULL)
{
while(dr=readdir(dop))
{
printf("%s\n",dr->d_name);
}
}
else
{
printf("diectory doesnot exist\n");
}
closedir(dop);
}
