#include <stdio.h>

int main(void) {
    int num1 = 3;
    int num2 = 4;
    double divResult; // 변수 선언에 콜론(:) 대신 세미콜론(;) 사용

    // 변수 num1과 num2를 double로 캐스트하여 나눗셈을 진행
    divResult = (double)num1 / num2;

    printf("나눗셈 결과: %f\n", divResult); // printf 문자열에서 Wn -> \n으로 수정

    return 0;
}
/*
int main(void) {
    char ch1 = 'A', ch2 = 'A'; // ch2를 'A'로 수정
    char ch3 = 'Z', ch4 = 'Z'; // 등호 추가 및 ch4를 'Z'로 수정
    
    // 각 변수의 값과 문자를 출력합니다.
    printf("%c %d \n", ch1, ch1);
    printf("%c %d \n", ch2, ch2);
    printf("%c %d \n", ch3, ch3);
    printf("%c %d \n", ch4, ch4);
    
    return 0;
}
/*
