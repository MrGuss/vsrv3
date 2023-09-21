#include <fcntl.h>
#include <stdio.h>

void main(){
    FILE *fptr;
    char str[100];
    printf("Enter something:\n");
    gets(str);
    fptr = open("./output", O_WRONLY | O_CREAT | O_TRUNC);
    fprintf(fptr,"%s\n",str);
    fclose(fptr);
    return;
}

