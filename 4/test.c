#include <unistd.h>
#include <stdio.h>

int main(){
    printf("I'm process of main program %d and I'm about to exec an ls -l\n", getpid());
    int pid;
    if ((pid = fork())!=0){
        printf("Parent %dstarted!\n", pid);
    }
    else{
        printf("Child %dstarted!\n", pid);
        execl("/bin/ls", "ls", "-l", NULL);
    }
    wait();
    printf("Child dying!\n");
    printf("This is line should be executed after childs death\n");
    return 0;
}
