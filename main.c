//한자리 숫자를 char형태로 scanf()로 받아서 숫자 형태로 printf()로 출력//
#include <stdio.h>

int main(void)
{
    char c;
    int i;

    printf("input a number:");
    scanf("%c", &c);
    
    i = c - '0'; // char 형태의 숫자를 int형태로 변환//
    printf("The input number is %i\n", i);

    return 0;
}