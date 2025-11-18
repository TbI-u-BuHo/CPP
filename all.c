#include <stdio.h>
int main(){
    char a[10];
    fgets(a, 10, stdin);
    char* p = a;
    while(*p != '\0'){
        if((*p >= 'a') && (*p <= 'z')){
            //*p = *p - ' ';
            *p = *p - 'a' + 'A';
            p = p + 1;

        };
    };
    printf("%s", a);
};