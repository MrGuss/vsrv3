#include <stdio.h>
#include <signal.h>
int alarmFlag = 0;
void alarmHandler();
main ()
{
    signal(SIGINT, alarmHandler);
    alarm(305);
    printf("Looping\n");
    while(!alarmFlag)
    {pause();}
    printf("Loop ends due to alarm signal\n");
}
void alarmHandler()
{
    printf("An SIGINT signal was received\n");
    alarmFlag=1;
}
