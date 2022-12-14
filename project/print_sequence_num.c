#include <stdio.h>

int main(void) {
    // 사용자 값 입력
    // 값만큼 1씩증가하면서 1부터 출력
    int num;
    printf("입력: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        printf("%d\n", i);
    }
}