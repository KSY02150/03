//두 개의 숫자를 받아서 나누기를 해주는 프로그램 만들기//
#include <stdio.h>

int main(void) {
    int n1, n2;
    
    printf("Enter numerator: ");
    scanf("%d", &n1);

    printf("Enter denominator: ");
    scanf("%d", &n2);

    printf("The result of the division is %6f.\n", (float)n1 / n2);

    return 0;
}