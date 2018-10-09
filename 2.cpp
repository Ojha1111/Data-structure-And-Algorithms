#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>


main()
{
    int id;

    printf("Before fork()\n");
    id=fork();

    if(id==0)
    {
        printf("Child has started: %d\n ",getpid());
        printf("Parent of this child : %d\n",getppid());
        printf("child prints 1 item :\n ");
        sleep(10);
        printf("child prints 2 item :\n");
    }
    else
    {
        printf("Parent has started: %d\n",getpid());
        printf("Parent of the parent proc : %d\n",getppid());
    }

    printf("After fork()");
}
