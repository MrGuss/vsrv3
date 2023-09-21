#include <stdio.h>

void main(){
    printf("Type something:\n");
    char test[100];
    gets(test);
    printf("You entered:\n%s\n", test);
    return;
}
