#include <stdio.h>

int main(void) {
    // ����� �� �Է�
    // ����ŭ 1�������ϸ鼭 1���� ���
    int num;
    printf("�Է�: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        printf("%d\n", i);
    }
}