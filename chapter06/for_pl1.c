#include <stdio.h>

// 1~10�� ���� ���� ���
int main(void) {
    int sum = 0;  // ���� ����

    for(int i=1; i<=3; i++) {
        sum += i; 
    }
    printf("���� ����: %d\n", sum);
}
