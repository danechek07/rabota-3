#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    float pounds;
    float kilograms;
    float grams;
    float tons;
    const float POUND_TO_KG = 0.453592;

    printf("Введите вес в фунтах: ");
    scanf("%f", &pounds);

    if (pounds < 0) {
        printf("Ошибка: вес не может быть отрицательным!\n");
        return 1;
    }

    kilograms = pounds * POUND_TO_KG;
    grams = kilograms * 1000;
    tons = kilograms / 1000;

    printf("Вес в килограммах: %.2f кг\n", kilograms);
    printf("Вес в граммах: %.2f г\n", grams);
    printf("Вес в тоннах: %.2f т\n", tons);

    return 0;
}