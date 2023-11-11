#include <fcntl.h> 
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int fd1; //файловые дoескрипторы 
    char s[100];
	fd1=open("text.txt", O_CREAT|O_RDWR|O_TRUNC, 0666); 
    printf("Type something\n");
    gets(s);
    write(fd1, s, 6);
    write(fd1, "\n", 6);
    close(fd1);
}
