#include <stdio.h>

int main() {
    int len=0;
    char ch;
    scanf("%c ",&ch);
    int count=0;
    char str[10];
    fgets(str, 10, stdin);
    char*p=str;
    
    while(*p!='\0'){
        if(*p==ch){
            count=count+1; // счет символов в строке
            *p='*'; //замена символа на *
        };
        len=len+1;
        p=p+1;
    };
    printf("%s %d",str,count);
};