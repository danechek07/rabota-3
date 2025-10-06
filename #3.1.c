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

    printf("������� ��� � ������: ");
    scanf("%f", &pounds);

    if (pounds < 0) {
        printf("������: ��� �� ����� ���� �������������!\n");
        return 1;
    }

    kilograms = pounds * POUND_TO_KG;
    grams = kilograms * 1000;
    tons = kilograms / 1000;

    printf("��� � �����������: %.2f ��\n", kilograms);
    printf("��� � �������: %.2f �\n", grams);
    printf("��� � ������: %.2f �\n", tons);

    return 0;
}