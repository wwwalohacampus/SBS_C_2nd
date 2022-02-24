#include <stdio.h>
#include <string.h>

int main(void) {
    
    FILE *ifp, *ofp;        // ���� ������ ����
    char name[50];          // �Է� ���ڿ� 
    int C, JAVA, PYTHON;    // ����
    int total = 0;          // ����
    double avg = 0.0;       // ���
    int res;

    // ���� �Է�
    ifp = fopen("list.txt", "r");
    if( ifp == NULL ){
        printf("���� �б� ����\n");
        return 1;
    }

    // ���� ���
    ofp = fopen("score.txt", "w");
    if( ifp == NULL ){
        printf("���� ���� ����\n");
        return 1;
    }

    while(1) {

        // fscanf(����������, "����")
        // : ���� �����͸� ���Ŀ� �°� �Է¹޴� �Լ�
        // - �Է� ���� : EOF
        res = fscanf(ifp, "%s%d%d%d", name, &C, &JAVA, &PYTHON);
        if( res == EOF ) {
            break;
        }
        total = C + JAVA + PYTHON;  // ���� ���
        avg = total / 3.0;          // ��� ���
        // fprintf(����������, "����", ����1, ����2, ...)
        // : ���Ŀ� �°� ���Ͽ� �����͸� ����ϴ� �Լ�
        fprintf(ofp, "%s%5d%7.2lf\n", name, total, avg);
    }

    // ���� �ݱ�
    fclose(ifp);
    fclose(ofp);

    return 0;
}