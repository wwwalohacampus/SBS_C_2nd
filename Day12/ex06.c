#include <stdio.h>
#include <stdlib.h>

// �Է� ���� ���ڿ��� �޸𸮸� �����Ҵ��Ͽ�
// �����ѵ� ����ϰ�, �����ϴ� ���α׷��� �ۼ��غ�����.

char * getString(void) {
    // �޸� �����Ҵ�
    char * str = (char*) malloc( sizeof(char) * 100 );
    printf("���� �����ϴ� ���� : ");
    gets(str);                  // ���ڿ��� �Է¹޴� �Լ�
    return str;
}

int main(void) {

    // ���ڿ� �Է� �Լ� ���� : getString()
    char* result = getString();
    printf("���� �����ϴ� ������? %s \n", result);

    // NULL : '�����Ͱ� ����' 
    if( result != NULL ) 
        free(result);           // �Ҵ� ���� �޸𸮸� ����
  
    return 0;
}