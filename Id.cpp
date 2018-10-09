#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include<sys/stat.h>
#include <unistd.h>
 
int main()
{
    pid_t p;
    p=fork();
    switch(p)
    {
    	case -1:
    		printf("error:process can't be created ");
    	break;
    	case 0:
    		printf("/n I am child having id %d \n",getpid());
    		printf("/n my parents id is %d \n",getppid());
    	break;
    	default:
    		printf("/n I am parent having id %d \n",getpid());
    		printf("/n My child having id %d \n",p);
    		}
}
