#include <stdio.h>
#pragma warning(disable: 4996)

int main(void) {
    int cnt = 0;
    int num = 0;
    printf("양의 정수를 입력해주세요 :");
    scanf("%d", &num);
    while (num > cnt) {
        printf("*\n");
        cnt++;
    }

}

