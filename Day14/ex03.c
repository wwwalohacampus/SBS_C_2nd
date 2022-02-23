#include <stdio.h>
#include <string.h>

/*
    # 구조체 배열
    : 배열의 요소가 구조체로 이루어진 배열
    
    * 배열 : 같은 자료형인 여러 개의 데이터를 저장하는 변수
*/

// 구조체 정의
struct person {
    // 이름, 나이
    char name[30];
    int age;
};

int main(void) {
    
    // 구조체 배열 선언
    struct person boy[5] = {
        {"김코딩", 12},
        {"곽코딩", 14},
        {"류코딩", 16},
        {"민코딩", 18},
        {"이코딩", 20}
    };

    // 구조체 배열 선언
    struct person girl[5];
    strcpy( girl[0].name, "이코딩");
    strcpy( girl[1].name, "조코딩");
    strcpy( girl[2].name, "정코딩");
    strcpy( girl[3].name, "문코딩");
    strcpy( girl[4].name, "박코딩");

    girl[0].age = 12;
    girl[1].age = 14;
    girl[2].age = 16;
    girl[3].age = 18;
    girl[4].age = 20;

    // 출력
    for (int i = 0; i < 5; i++) {
        printf("boy 의 이름은 %s, 나이는 %d \n", boy[i].name, boy[i].age);
        printf("girl 의 이름은 %s, 나이는 %d \n", girl[i].name, girl[i].age);
    }
    return 0;
}