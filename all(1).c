#include <stdio.h>
#include <time.h>
int main(){
    time_t now;
    time(&now);
    struct tm *local;
    local = localtime(&now);
    char buffer[100];
    strftime(buffer, 100, "%d.%m.%Y %H:%M:%S", local);
    printf("%s", buffer);
};