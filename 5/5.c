#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int func5(char* string, char par){
    int cnt = 0;
    char pr = toupper(par);
    for (int i=0; i< strlen(string); i++){
        if (string[i]==par){
            cnt++;
            string[i] = pr;
        }
    } 
    return cnt;
}

int main(){
    int (*func)(char*, char);
    func = func5;
    char test[] = "Hello, World!";
    printf("Count: %d\n", func(test, 'l'));
    printf("%s\n", test);
    return 0;
}
