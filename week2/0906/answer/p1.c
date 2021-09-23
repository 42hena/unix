#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int addnum(int a, int b) {

        int sum = 0;

        for (; a<=b; a++) sum += a;

        return sum;
}

int main(int argc, char *argv[]) {

        int sum, startno, endno;


        startno = atoi(argv[1]);
        endno = atoi(argv[2]);

        sum = addnum(startno, endno);
        printf("Sum %d~%d = %d\n", startno, endno, sum);

        return(0);
}