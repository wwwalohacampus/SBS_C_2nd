// 헤더 파일 포함
#include <stdio.h>
#include <string.h>

// 필요한 상수
#define MAX_LEN 10      // 선택 음료 최대개수
#define True 1          // 참
#define False 0         // 거짓

// 메뉴 번호
#define Add 1           // 음료 추가
#define Remove 2        // 음료 삭제
#define Check 3         // 선택 음료 확인
#define Order 4         // 선택 음료 주문
#define End 0           // 프로그램 종료

// 음료 상품 코드
#define Americano 1
#define CafeLatte 2
#define Juice 3
#define Icecream 4
#define Cancel 0

// 음료 상품 가격
#define Americano_Price 1
#define CafeLatte_Price 2
#define Juice_Price 3
#define Icecream_Price 4

// 선택 음료 구조체 정의
typedef struct {
    char *foods[MAX_LEN];       // 상품 목록 (최대10개)
    int idxOfFoods;             // 상품 번호
    int totalPrice;             // 전체 가격
} ItemList;

// 함수 선언
void select();                              // 메인 메뉴
void showMenu();                            // 음료 메뉴
void addMenu(ItemList *itemList);           // 음료 추가
void addMenuProcess(ItemList *itemList, char* menu, int price);   // 음료 추가 처리


int main(void) {

    // 변수 선언 및 초기화
    ItemList itemList;
    itemList.idxOfFoods = 0;
    itemList.totalPrice = 0;
    int choice;         // 선택한 메뉴 번호

    while(1) {
        // 메인 메뉴 출력
        select();

        // 메뉴 번호 입력
        printf("메뉴 번호 : ");
        scanf("%d", &choice);

        // 메뉴 선택
        switch (choice) {
            // 1. 음료 추가
            case Add:  
                        // 함수 호출
                        printf("\n\n");
                        break;
            // 2. 음료 삭제
            case Remove:  
                        // 함수 호출
                        printf("\n\n");
                        break;
            // 3. 선택 음료 확인
            case Check:  
                        // 함수 호출
                        printf("\n\n");
                        break;
            // 4. 선택 음료 주문
            case Order:  
                        // 함수 호출
                        printf("\n\n");
                        break;
            // 0. 프로그램 종료
            case End:  
                        // 함수 호출
                        puts("프로그램을 종료합니다.");
                        return 0;
            default:    
                        puts("(0~4)번의 번호를 입력해주세요!");
                        break;
        }

    }
  
    return 0;
}


// [ 메뉴 관련 함수 정의 ]
void select() {
    /* 메인 메뉴를 출력하는 함수 */
    puts("***** SBS아카데미 카페 *****");
    puts("*** 1. 음료 추가");
    puts("*** 2. 음료 삭제");
    puts("*** 3. 선택 음료 확인");
    puts("*** 4. 선택 음료 주문");
    puts("*** 0. 프로그램 종료");
    puts("***********************************");
}

void showMenu() {
    /* 주문할 수 있는 메뉴를 출력하는 함수 */
    puts("***********************************");
    puts("*** 1. 아메리카노 (2000)");
    puts("*** 2. 카페라떼 (3000)");
    puts("*** 3. 주스 (3500)");
    puts("*** 4. 아이스크림 (4000)");
    puts("*** 0. 취소");
    puts("***********************************");
}

// 음료 추가
void addMenu(ItemList *itemList) {
    /*
        사용자가 추가할 음료를 선택하면,
        - ItemList 구조체의 멤버 배열에 해당 음료를 추가
        - 음료수 총 개수를 1 증가
        - 해당 음료수의 가격을 전체 가격에 더함  
   */
    // 음료수는 최대 10개까지 제한
    if ( itemList->idxOfFoods >= MAX_LEN ) {
        puts("더 이상 추가할 수 없습니다. (최대 10개)")
        return 0;
    }

    int choice;
    int i;
    // 음료 메뉴 출력
    showMenu();
    printf("메뉴 번호 : ");
    scanf("%d", &choice);

    switch (choice) {
        case Americano:
                        addMenuProcess(itemList, "아메리카노", Americano_Price);
                        break;
        case CafeLatte:
                        addMenuProcess(itemList, "카페라떼", CafeLatte_Price);
                        break;
        case Juice:
                        addMenuProcess(itemList, "주스", Juice_Price);
                        break;
        case Icecream:
                        addMenuProcess(itemList, "아이스크림", Icecream_Price);
                        break;
        case Cancel:
                        puts("취소합니다.");
                        break;
        default:        
                        puts("잘못된 입력입니다.");
                        break;
    }
}


// 음료 추가 처리 함수
void addMenuProcess(ItemList *itemList, char* menu, int price) {
    int i
    printf("%s 추가", menu);
    i = itemList->idxOfFoods;       // 현재 아이템의 index
    itemList->foods[i] = menu;      // 선택 목록에 메뉴 추가
    itemList->idxOfFoods++;         // 총 개수 + 1
    itemList->totalPrice += price;  // 전체가격 + 해당 음료 가격
}