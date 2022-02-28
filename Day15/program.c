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
#define Americano_Price 2000
#define CafeLatte_Price 3000
#define Juice_Price 3500
#define Icecream_Price 4000

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
int removeItem(ItemList *itemList, char* itemToRemove);           // 음료 삭제
void removeMenu(ItemList *itemList);                              // 삭제 항목 선택
void removeMenuProcess(ItemList * itemList, char* itemToRemove, int removePrice);  // 음료 삭제 처리
void checkMenu(ItemList *itemList);         // 메뉴 확인
int order(ItemList *itemList);              // 주문


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
                        addMenu(&itemList);
                        printf("\n\n");
                        break;
            // 2. 음료 삭제
            case Remove:  
                        removeMenu(&itemList);
                        printf("\n\n");
                        break;
            // 3. 선택 음료 확인
            case Check:  
                        checkMenu(&itemList);
                        printf("\n\n");
                        break;
            // 4. 선택 음료 주문
            case Order:  
                        if( order(&itemList) ) {
                            // 주문 결정
                            puts("주문 완료!\n 음료를 준비해드리겠습니다.");
                            puts("잠시만 기다려주세요!");
                            printf("\n\n");
                        } else {
                            // 주문 취소
                            puts("주문 보류!");
                            printf("\n\n");
                        }
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
        puts("더 이상 추가할 수 없습니다. (최대 10개)");
        return;
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
    int i;
    printf("%s 추가", menu);
    i = itemList->idxOfFoods;       // 현재 아이템의 index
    itemList->foods[i] = menu;      // 선택 목록에 메뉴 추가
    itemList->idxOfFoods++;         // 총 개수 + 1
    itemList->totalPrice += price;  // 전체가격 + 해당 음료 가격
}

// 삭제
// - 구조체 멤버 배열에서 항목을 삭제
int removeItem(ItemList *itemList, char* itemToRemove) {
    /*  사용자가 삭제할 음료를 선택하면,
        ItemList 구조체의 멤버 배열에서 해당 음료를 삭제
    */
    // itemToRemove : 삭제할 음료 이름

    int i, rmIdx = -1;  // 삭제할 인덱스
    // 삭제할 음료 이름과 배열의 음료이름이 같은지 확인
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        if( !strcmp(itemList->foods[i], itemToRemove) ) {
            rmIdx = i;
            break;
        }
    }

    printf("삭제할 rmIdx : %d \n", rmIdx );

    // 삭제할 항목이 있으면,
    if( rmIdx >= 0 ) {
        // 뒤에서부터 삭제 항목이 있는 요소까지 하나씩 앞으로 당긴다.
        for ( i = rmIdx; i < itemList->idxOfFoods - 1; i++) {
            itemList->foods[i] = itemList->foods[i+1];      // 하나씩 당겨짐
        }
        
        if( rmIdx == 0 && itemList->idxOfFoods ) {
            itemList->foods[0] = NULL;
        }

        printf("%s 를 삭제했습니다.\n", itemToRemove);
        return True;
    } 
    else {
        // 삭제할 항목이 없을 때
        printf("삭제할 항목이 없습니다.\n");
        return False;
    }

}

// 삭제 항목 선택 함수
void removeMenu(ItemList *itemList) {
    /*  사용자가 삭제할 음료를 선택하면,
        - 음료가 하나도 선택되지 않은 경우, -> "더 이상 삭제할 수 없습니다."
        - 선택된 음료가 존재한다면(삭제가능) -> removeItem() 함수를 호출하여 삭제 요청
    */

    if( itemList->idxOfFoods <= 0 ) {
        puts("더 이상 삭제할 수 없습니다.");
        return;
    }

    int choice;
    showMenu();       
    printf("메뉴 번호 : ");
    scanf("%d" ,&choice);

    switch (choice) {
        case Americano:
                        removeMenuProcess(itemList, "아메리카노", Americano_Price);
                        break;
        case CafeLatte:
                        removeMenuProcess(itemList, "카페라떼", CafeLatte_Price);
                        break;
        case Juice:
                        removeMenuProcess(itemList, "주스", Juice_Price);
                        break;
        case Icecream:
                        removeMenuProcess(itemList, "아이스크림", Icecream_Price);
                        break;
        case Cancel:
                        puts("취소합니다.");
                        break;
        default:        
                        puts("잘못된 입력입니다.");
                        break;
    }
}

// 음료 삭제 처리 함수
void removeMenuProcess(ItemList * itemList, char* itemToRemove, int removePrice) {
    // 삭제할 음료의 이름에 맞게 removeItem() 함수를 호출하여 삭제 처리
    if( removeItem(itemList, itemToRemove) ) {
        // 삭제가 되었다면,
        // - (전체 가격) - (삭제한 음료가격)
        itemList->totalPrice -= removePrice;
        // - 추가된 음료 개수 - 1
        (itemList->idxOfFoods)--;
    }
}

// 메뉴 확인 함수
void checkMenu(ItemList *itemList) {
    // 사용자가 선택한 음료의 전체 '가격'과 '목록'을 출력한다.
    int i = 0;
    printf("주문 전체 가격 : %d \n", itemList->totalPrice);
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        printf("%s \n", itemList->foods[i]);
    }
    printf("\n");
}

// 주문 함수
int order(ItemList *itemList) {
    /* 주문한 전체 가격을 출력한 후, 주문 여부 재확인
       즉, 최종 주문 여부를 True(1), False(0)로 반환 
    */
    if( itemList->idxOfFoods <= 0 ) {
        puts("선택한 음료가 없습니다.");
        return -1;
    }

    int choice;
    checkMenu(itemList);
    puts("정말로 주문하시겠습니까?");

    printf("1. 네, 2. 아니오 : ");
    scanf("%d", &choice);

    if( choice == 1 ) return True;
    if( choice == 2 ) return False;
}