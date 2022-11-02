#include <stdio.h>
// 구구단 2단~9단 출력
//  → 반복문 2개
//    1.2~9 1씩 증가 : 단수
//    2.1~9 1씩 증가 : 단수에맞는 구구단 출력
int main(void) {
    
    // 1.2단~9단까지 단수 입력
    //  - j → 단수
    // j=2 → i=1, 2, 3, ..., 9
    // j=3 → i=1, 2, 3, ..., 9
    // ..    ...
    // j=9 → i=1, 2, 3, ..., 9
    for(int j=2; j<=9; j++) {
        // 2. 단수에 맞는 구구단 출력
        for(int i=1; i<=9; i++) {
            printf("%d x %d = %d\n", j, i, j*i);
        }
    }
    
}