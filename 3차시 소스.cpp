#include <stdio.h>

int main(void) {
    // 정수형 변수들을 선언하고 초기화합니다.
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 24;               
    
    // 각 변수들의 값을 출력합니다.
    printf("0xA7의 10진 정수값: %d\n", num1);
    printf("0x%X의 10진 정수값: %d\n", num1, num1);
    printf("0x43의 10진 정수값: %d\n", num2);
    printf("0x%X의 10진 정수값: %d\n", num2, num2);
    printf("032의 10진 정수값: %d\n", num3);
    printf("0%o의 10진 정수값: %d\n", num3, num3);
    printf("24의 10진 정수값: %d\n", num4);
    printf("0%o의 10진 정수값: %d\n", num4, num4);
    
    return 0;
}
/*
#include <stdio.h>

int main(void) {
    int num1, num2, result = 0;
    
    // 사용자로부터 두 개의 정수를 입력 받습니다.
    printf("두 개의 정수를 입력해 주세요: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    // 두 정수의 합을 계산합니다.
    result = num1 + num2;
    printf("두 수의 합은 %d입니다.\n", result);
    
    // 두 정수의 차를 계산하고 출력합니다.
    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);
    
    // 두 정수의 곱을 계산하고 출력합니다.
    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);
    
    // 두 정수의 나눗셈을 계산하고 출력합니다. (정수 나눗셈)
    result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);
    
    return 0;
}
*/
