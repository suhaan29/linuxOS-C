#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
 
  pid_t pid;
  pid = fork();
  
  if(pid == 0)
  {
    sleep(50);
    printf("i am child");
    printf("\nPID OF CHILD == %d and parent is %d", getpid(), getppid());
}
 
else
  {
    printf("i am in parent");
    printf("\nPID = %d", getpid());
  }
 return 0;
}
