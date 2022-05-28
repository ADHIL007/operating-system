#include<stdio.h>
#include<sys/stat.h>
void main()
{
struct stat ptr;
stat("./ocr.c",&ptr);
printf("%ld",ptr.st_size);
}
