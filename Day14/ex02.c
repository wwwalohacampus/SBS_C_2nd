#include <stdio.h>
#include <string.h>

// 구조체 정의
struct person {
    // 이름, 나이
    char name[30];
    int age;
};

int main(void) {
    
    // 구조체 선언
    // 구조체 변수 초기화
    // 멤버변수의 순서대로 {} 안에 값을 대입
    struct person boy = {"김코딩", 20}; 
    struct person girl = {"이코딩", 10}; 

    // 출력
    printf("boy 의 이름은 %s, 나이는 %d \n", boy.name, boy.age);
    printf("girl 의 이름은 %s, 나이는 %d \n", girl.name, girl.age);

    return 0;
}