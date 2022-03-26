#include <stdio.h>
#pragma warning(disable: 4996)

int main(void) {
    int cnt = 1;
    int num = 0;
    printf("몇단을 하실건가요? ");
    scanf("%d", &num);
    while (cnt < 10) {
        printf("%d*%d=%d\n", num, cnt, num*cnt);
        cnt++;
    }

}