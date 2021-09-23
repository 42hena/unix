#include <string.h>
//test1, test2를 한 프로그램으로 수정하여 명령행 인자(command-line input)를 시용하도록 수정

//./test 1 10 argc=3, argv[0]=test, argv[1]=1, argv[2]=10

int addnum(int a, int b) {
        int sum = 0;

        for (; a<=b ; a++) sum += a;
        return sum;
}

int main(int argc, char *argv[])
{
        int sum_return;
        int start, end;
        start = atoi(argv[1]);
        end = atoi(argv[2]);

        printf("argc=%d, argv[0]=%s, argv[1]=%d, argv[2]=%d\n",argc, argv[0], start, end);

        sum_return = addnum(start, end);
        printf("sum = %d\n", sum_return);
}