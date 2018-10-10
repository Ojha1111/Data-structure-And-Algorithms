#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    
    pid_t child_pid = fork();
      if (child_pid > 0)
        sleep(40)
	      else       
        exit(0);
	int pid1 = fork();
	int pid2 = fork();
        if (pid1 > 0)
        printf("in parent process");
    else if (pid1 == 0)
    {
        sleep(20);
        printf("in child process");
    }
	 if (pid2 > 0)
        printf("in parent process");
    else if (pid2== 0)
    {
        sleep(20);
        printf("in child process");
 
    return 0;
}

