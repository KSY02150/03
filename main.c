//알파벳 문자를 하나 입력 받아서 그 다음 문자를 출력//
#include <stdio.h>

int main(void)
{
    char c;

    printf("enter a character: ");
    scanf("%c", &c);

    printf("The next character of %c (%d) is %c (%d)\n", c, c, c + 1, c + 1);
    
    return 0;
}