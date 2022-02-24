#include <stdio.h>
#include <string.h>

int main(void) {
    
    FILE *ifp, *ofp;    // ���� ������ ����
    char str[100];      // �Է� ���ڿ� 
    char *res;          

    // ���� �Է�
    ifp = fopen("test.txt", "r");
    if( ifp == NULL ){
        printf("���� �б� ����\n");
        return 1;
    }

    // ���� ���
    ofp = fopen("copy.txt", "w");
    if( ifp == NULL ){
        printf("���� ���� ����\n");
        return 1;
    }

    while(1) {
        // fgets(�Է¹迭, �迭��ũ��, ����������)
        // : ������ �� �پ� �Է¹޴� �Լ�
        // - �Է� ���� : NULL ��ȯ
        // test.txt �� �ؽ�Ʈ�� �� �پ� �о�ͼ� str �迭�� ����
        res = fgets(str, sizeof(str), ifp);
        if( res == NULL ) {
            break;
        }
        str[strlen(str) - 1] = '\0';
        // fputs(���ڿ�, ����������)
        // : ���Ͽ� �� �پ� ���ڿ��� ����ϴ� �Լ�
        fputs(str, ofp);
        fputs("\n", ofp);  // �ٹٲ�
    }

    // ���� �ݱ�
    fclose(ifp);
    fclose(ofp);

    return 0;
}