/*
연습문제 9 (p53) – strcmp사용
        - 인자가 없을 때 : “Usable Options : -a –u –h”
        -a : “Welcome to Unix System Programming World!!!”
        -u 인자 : “Nice to meet argv[2]”
        -h : 인자가 없을 때와 동일
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc == 1)
        printf("Usable Options : -a –u –h\n");
    else{
        if (strcmp(argv[1], "-a") == 0)
    }

}