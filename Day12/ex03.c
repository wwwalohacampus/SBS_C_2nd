#include <stdio.h>

int N = 5;          // 전역 변수

int max(int* arr);  // 함수 선언

int main(void) {
    int arr[5];
    int result = 0;

    printf("정수 5개 입력 : ");
    for (int i = 0; i < N; i++) {
        // 배열에 입력
        // arr[0], arr[1], ...
        scanf("%d", &arr[i]);
    }
    // 최댓값 = 함수호출 -- 배열을 전달
    // 배열의 이름 : 첫번째 요소의 주소
    result = max(arr);
    
    // 출력 - 최댓값
    printf("최댓값 : %d\n", result);

    return 0;
}

// 최댓값을 구하는 함수
// 포인터 변수 : 주소값을 저장하는 변수
int max(int* arr) {
    int result = 0;

    result = arr[0];
    for (int i = 0; i < N; i++) {
        // arr[i] : 1 2 3 4 5
        if( result < arr[i] ) {
            result = arr[i];
        }
    }
    return result;
}