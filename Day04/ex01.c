#include <stdio.h>

int main(void) {
    int age;
    char name[10];          

    printf("나이와 이름을 입력 : ");
    // 입력함수
    scanf("%d %s", &age, name);
    printf("나이 :  %d\n", age );
    printf("이름 :  %s\n", name );
    return 0;   
}