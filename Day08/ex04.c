#include <stdio.h>

int main(void) {
    
    char str[50];

    printf("문자열을 입력 : ");
    scanf("%s", str);           // 주소연산자 & 를 붙이지 않는다.
    // 이유는?      
    // 배열의 이름 : 배열의 주소값

    printf("입력받은 문자열 :  %s\n", str);
    printf("배열의 주소값 (배열의이름) :  %p\n", str);
    printf("배열의 주소값 (주소연산자) :  %p\n", &str[0]);
    return 0;
}