#include <stdio.h>
#pragma warning(disable: 4996)

int main(void) {
    int num = 2;
    int result = 0 ;
    printf("정수를 입력해주세요 :");
    scanf("%d", &num);
    while (num > result+2) {
        result += 2;
        printf("%d ", result);
    }

}
