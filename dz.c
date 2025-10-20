#include <stdio.h>
#include<locale.h>

// Функция для проверки високосного года
int isLeapYear(int year) {
    // Год является високосным, если:
    // 1. Делится на 4 И
    // 2. Не делится на 100 ИЛИ делится на 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    setlocale(LC_CTYPE, "RUS");

    printf("Введите год: ");
    scanf("%d", &year);

    // Проверка корректности ввода года
    if (year <= 0) {
        printf("Ошибка: год должен быть положительным числом!\n");
        return 1;
    }

    // Определение количества дней в году
    if (isLeapYear(year)) {
        printf("Год %d - високосный. Количество дней: 366\n", year);
    }
    else {
        printf("Год %d - невисокосный. Количество дней: 365\n", year);
    }

    return 0;
}