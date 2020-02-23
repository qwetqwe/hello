#include<unistd.h>
#include<stdio.h>

#include<string>

int main()
{
int i=0;
  while(1)
  {
   printf("hello,%d\n",i++);
   sleep(1);
   if (i==10)
	break;
}
}


