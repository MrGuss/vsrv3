#include <unistd.h>
#include <stdio.h>

int main(){
    printf("I'm process of main program %d and I'm about to count to 200\n", getpid());
    int pid;
    pid = fork();
    if (pid!=0){
        sleep(0.2);
        printf("Parent started!\n");
        ParentProcess();
    }
    else{
        printf("Child started!\n");
        ChildProcess();
        //execl("/bin/ls", "ls", "-l", NULL);
    }
    if (pid==0){
        printf("Child dying!\n");
        return 0;
    }

    wait();
    printf("This is line should be executed after childs death\n");
    return 0;
}


void  ChildProcess(){
    for (int i=0;i<=50;i++){
        printf("This line is from child, value = %d\n", i);
    } /* child process prototype  */
    return;
}
void  ParentProcess(){
    for (int i=0;i<=50;i++){
        printf("This line is from parent, value = %d\n", i);
    } /* child process prototype  */\
    return;
}
