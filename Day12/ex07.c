#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 할당된 메모리 주소값을 저장할 포인터
    int *ptr;
    // 입력 데이터 개수
    int count = 0;
    // 할당받은 메모리 크기
    int maxSize = 3;
    int num;

    // 메모리 동적 할당
    // calloc() 함수
    // : calloc( 개수, 크기 )
    // 할당하고자하는 메모리 공간의 개수, 메모리 공간별 크기(byte)
    // 할당받은 메모리 주소값을 반환 (*void)
    // 할당된 메모리 공간의 모든 비트를 0으로 초기화
    ptr = (int*) calloc( maxSize, sizeof(int) );

    while(1) {
        printf("정수를 입력하세요(종료:0) : ");
        scanf("%d", &num);
        if( num == 0 )
            break;
        
        // 메모리 공간이 초과된 경우, 재할당을 통한 메모리 영역 확장
        if( count == maxSize ) {
            maxSize += maxSize; // 3 + 3, 메모리 사이즈를 2배로
            // 메모리 재할당
            // : realloc( 할당할 포인터, 재할당할 사이즈 )
            ptr = (int*) realloc( ptr, maxSize * sizeof(int) );
        }

        // 입력한 값을 저장
        ptr[count++] = num;
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    if( ptr != NULL ) {
        // 메모리 공간 해제
        free(ptr);
    }

    return 0;
}