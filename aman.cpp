#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    // Fork returns process id
    // in parent process
    pid_t child_pid = fork();
 
    // Parent process 
    if (child_pid > 0)
        sleep(40);
 
    // Child process
    else       
        exit(0);
	// Create a child process      
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

