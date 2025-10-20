#include <stdio.h>
#include<locale.h>

// ������� ��� �������� ����������� ����
int isLeapYear(int year) {
    // ��� �������� ����������, ����:
    // 1. ������� �� 4 �
    // 2. �� ������� �� 100 ��� ������� �� 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    setlocale(LC_CTYPE, "RUS");

    printf("������� ���: ");
    scanf("%d", &year);

    // �������� ������������ ����� ����
    if (year <= 0) {
        printf("������: ��� ������ ���� ������������� ������!\n");
        return 1;
    }

    // ����������� ���������� ���� � ����
    if (isLeapYear(year)) {
        printf("��� %d - ����������. ���������� ����: 366\n", year);
    }
    else {
        printf("��� %d - ������������. ���������� ����: 365\n", year);
    }

    return 0;
}