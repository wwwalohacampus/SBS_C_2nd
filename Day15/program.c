// ��� ���� ����
#include <stdio.h>
#include <string.h>

// �ʿ��� ���
#define MAX_LEN 10      // ���� ���� �ִ밳��
#define True 1          // ��
#define False 0         // ����

// �޴� ��ȣ
#define Add 1           // ���� �߰�
#define Remove 2        // ���� ����
#define Check 3         // ���� ���� Ȯ��
#define Order 4         // ���� ���� �ֹ�
#define End 0           // ���α׷� ����

// ���� ��ǰ �ڵ�
#define Americano 1
#define CafeLatte 2
#define Juice 3
#define Icecream 4
#define Cancel 0

// ���� ��ǰ ����
#define Americano_Price 2000
#define CafeLatte_Price 3000
#define Juice_Price 3500
#define Icecream_Price 4000

// ���� ���� ����ü ����
typedef struct {
    char *foods[MAX_LEN];       // ��ǰ ��� (�ִ�10��)
    int idxOfFoods;             // ��ǰ ��ȣ
    int totalPrice;             // ��ü ����
} ItemList;

// �Լ� ����
void select();                              // ���� �޴�
void showMenu();                            // ���� �޴�
void addMenu(ItemList *itemList);           // ���� �߰�
void addMenuProcess(ItemList *itemList, char* menu, int price);   // ���� �߰� ó��
int removeItem(ItemList *itemList, char* itemToRemove);           // ���� ����
void removeMenu(ItemList *itemList);                              // ���� �׸� ����
void removeMenuProcess(ItemList * itemList, char* itemToRemove, int removePrice);  // ���� ���� ó��
void checkMenu(ItemList *itemList);         // �޴� Ȯ��
int order(ItemList *itemList);              // �ֹ�


int main(void) {

    // ���� ���� �� �ʱ�ȭ
    ItemList itemList;
    itemList.idxOfFoods = 0;
    itemList.totalPrice = 0;
    int choice;         // ������ �޴� ��ȣ

    while(1) {
        // ���� �޴� ���
        select();

        // �޴� ��ȣ �Է�
        printf("�޴� ��ȣ : ");
        scanf("%d", &choice);

        // �޴� ����
        switch (choice) {
            // 1. ���� �߰�
            case Add:  
                        addMenu(&itemList);
                        printf("\n\n");
                        break;
            // 2. ���� ����
            case Remove:  
                        removeMenu(&itemList);
                        printf("\n\n");
                        break;
            // 3. ���� ���� Ȯ��
            case Check:  
                        checkMenu(&itemList);
                        printf("\n\n");
                        break;
            // 4. ���� ���� �ֹ�
            case Order:  
                        if( order(&itemList) ) {
                            // �ֹ� ����
                            puts("�ֹ� �Ϸ�!\n ���Ḧ �غ��ص帮�ڽ��ϴ�.");
                            puts("��ø� ��ٷ��ּ���!");
                            printf("\n\n");
                        } else {
                            // �ֹ� ���
                            puts("�ֹ� ����!");
                            printf("\n\n");
                        }
                        printf("\n\n");
                        break;
            // 0. ���α׷� ����
            case End:  
                        // �Լ� ȣ��
                        puts("���α׷��� �����մϴ�.");
                        return 0;
            default:    
                        puts("(0~4)���� ��ȣ�� �Է����ּ���!");
                        break;
        }

    }
  
    return 0;
}


// [ �޴� ���� �Լ� ���� ]
void select() {
    /* ���� �޴��� ����ϴ� �Լ� */
    puts("***** SBS��ī���� ī�� *****");
    puts("*** 1. ���� �߰�");
    puts("*** 2. ���� ����");
    puts("*** 3. ���� ���� Ȯ��");
    puts("*** 4. ���� ���� �ֹ�");
    puts("*** 0. ���α׷� ����");
    puts("***********************************");
}

void showMenu() {
    /* �ֹ��� �� �ִ� �޴��� ����ϴ� �Լ� */
    puts("***********************************");
    puts("*** 1. �Ƹ޸�ī�� (2000)");
    puts("*** 2. ī��� (3000)");
    puts("*** 3. �ֽ� (3500)");
    puts("*** 4. ���̽�ũ�� (4000)");
    puts("*** 0. ���");
    puts("***********************************");
}

// ���� �߰�
void addMenu(ItemList *itemList) {
    /*
        ����ڰ� �߰��� ���Ḧ �����ϸ�,
        - ItemList ����ü�� ��� �迭�� �ش� ���Ḧ �߰�
        - ����� �� ������ 1 ����
        - �ش� ������� ������ ��ü ���ݿ� ����  
   */
    // ������� �ִ� 10������ ����
    if ( itemList->idxOfFoods >= MAX_LEN ) {
        puts("�� �̻� �߰��� �� �����ϴ�. (�ִ� 10��)");
        return;
    }

    int choice;
    int i;
    // ���� �޴� ���
    showMenu();
    printf("�޴� ��ȣ : ");
    scanf("%d", &choice);

    switch (choice) {
        case Americano:
                        addMenuProcess(itemList, "�Ƹ޸�ī��", Americano_Price);
                        break;
        case CafeLatte:
                        addMenuProcess(itemList, "ī���", CafeLatte_Price);
                        break;
        case Juice:
                        addMenuProcess(itemList, "�ֽ�", Juice_Price);
                        break;
        case Icecream:
                        addMenuProcess(itemList, "���̽�ũ��", Icecream_Price);
                        break;
        case Cancel:
                        puts("����մϴ�.");
                        break;
        default:        
                        puts("�߸��� �Է��Դϴ�.");
                        break;
    }
}


// ���� �߰� ó�� �Լ�
void addMenuProcess(ItemList *itemList, char* menu, int price) {
    int i;
    printf("%s �߰�", menu);
    i = itemList->idxOfFoods;       // ���� �������� index
    itemList->foods[i] = menu;      // ���� ��Ͽ� �޴� �߰�
    itemList->idxOfFoods++;         // �� ���� + 1
    itemList->totalPrice += price;  // ��ü���� + �ش� ���� ����
}

// ����
// - ����ü ��� �迭���� �׸��� ����
int removeItem(ItemList *itemList, char* itemToRemove) {
    /*  ����ڰ� ������ ���Ḧ �����ϸ�,
        ItemList ����ü�� ��� �迭���� �ش� ���Ḧ ����
    */
    // itemToRemove : ������ ���� �̸�

    int i, rmIdx = -1;  // ������ �ε���
    // ������ ���� �̸��� �迭�� �����̸��� ������ Ȯ��
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        if( !strcmp(itemList->foods[i], itemToRemove) ) {
            rmIdx = i;
            break;
        }
    }

    printf("������ rmIdx : %d \n", rmIdx );

    // ������ �׸��� ������,
    if( rmIdx >= 0 ) {
        // �ڿ������� ���� �׸��� �ִ� ��ұ��� �ϳ��� ������ ����.
        for ( i = rmIdx; i < itemList->idxOfFoods - 1; i++) {
            itemList->foods[i] = itemList->foods[i+1];      // �ϳ��� �����
        }
        
        if( rmIdx == 0 && itemList->idxOfFoods ) {
            itemList->foods[0] = NULL;
        }

        printf("%s �� �����߽��ϴ�.\n", itemToRemove);
        return True;
    } 
    else {
        // ������ �׸��� ���� ��
        printf("������ �׸��� �����ϴ�.\n");
        return False;
    }

}

// ���� �׸� ���� �Լ�
void removeMenu(ItemList *itemList) {
    /*  ����ڰ� ������ ���Ḧ �����ϸ�,
        - ���ᰡ �ϳ��� ���õ��� ���� ���, -> "�� �̻� ������ �� �����ϴ�."
        - ���õ� ���ᰡ �����Ѵٸ�(��������) -> removeItem() �Լ��� ȣ���Ͽ� ���� ��û
    */

    if( itemList->idxOfFoods <= 0 ) {
        puts("�� �̻� ������ �� �����ϴ�.");
        return;
    }

    int choice;
    showMenu();       
    printf("�޴� ��ȣ : ");
    scanf("%d" ,&choice);

    switch (choice) {
        case Americano:
                        removeMenuProcess(itemList, "�Ƹ޸�ī��", Americano_Price);
                        break;
        case CafeLatte:
                        removeMenuProcess(itemList, "ī���", CafeLatte_Price);
                        break;
        case Juice:
                        removeMenuProcess(itemList, "�ֽ�", Juice_Price);
                        break;
        case Icecream:
                        removeMenuProcess(itemList, "���̽�ũ��", Icecream_Price);
                        break;
        case Cancel:
                        puts("����մϴ�.");
                        break;
        default:        
                        puts("�߸��� �Է��Դϴ�.");
                        break;
    }
}

// ���� ���� ó�� �Լ�
void removeMenuProcess(ItemList * itemList, char* itemToRemove, int removePrice) {
    // ������ ������ �̸��� �°� removeItem() �Լ��� ȣ���Ͽ� ���� ó��
    if( removeItem(itemList, itemToRemove) ) {
        // ������ �Ǿ��ٸ�,
        // - (��ü ����) - (������ ���ᰡ��)
        itemList->totalPrice -= removePrice;
        // - �߰��� ���� ���� - 1
        (itemList->idxOfFoods)--;
    }
}

// �޴� Ȯ�� �Լ�
void checkMenu(ItemList *itemList) {
    // ����ڰ� ������ ������ ��ü '����'�� '���'�� ����Ѵ�.
    int i = 0;
    printf("�ֹ� ��ü ���� : %d \n", itemList->totalPrice);
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        printf("%s \n", itemList->foods[i]);
    }
    printf("\n");
}

// �ֹ� �Լ�
int order(ItemList *itemList) {
    /* �ֹ��� ��ü ������ ����� ��, �ֹ� ���� ��Ȯ��
       ��, ���� �ֹ� ���θ� True(1), False(0)�� ��ȯ 
    */
    if( itemList->idxOfFoods <= 0 ) {
        puts("������ ���ᰡ �����ϴ�.");
        return -1;
    }

    int choice;
    checkMenu(itemList);
    puts("������ �ֹ��Ͻðڽ��ϱ�?");

    printf("1. ��, 2. �ƴϿ� : ");
    scanf("%d", &choice);

    if( choice == 1 ) return True;
    if( choice == 2 ) return False;
}