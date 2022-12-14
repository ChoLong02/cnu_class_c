#include <stdio.h>

// 1 1 2 3 5 8 13 

// front 1  1  2  3  5  8
// end   1  2  3  5  8  13
// sum   2  3  5  8  13 21

// 피보나치 심화 문제: 0 1 1 2 3 5 8 13
    
int main(void) {
    int front=1, end=1, sum;
    printf("1 1 ");
    while(1) {
        sum = front + end;
        if(sum > 13) {
            break;    
        } else {
            printf("%d ", sum);
        }
        front = end;
        end = sum;
    }
}
