#include <stdio.h>
#include <time.h>
int main(){
    time_t now;
    time(&now);
    struct tm *local;
    local = localtime(&now);
    printf("%02d:%02d:%02d  %02d", local->tm_sec, local->tm_min, local->tm_hour+3, local->tm_year+1900);
};
