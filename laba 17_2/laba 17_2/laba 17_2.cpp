#include <stdio.h>
#include <Windows.h>

void fillArray(int array[], int size);
void printArray(int array[], int size);
void productArray(int array[], int size);

void fillArray(int array[], int size)
{
    printf("������ �������� ��� ������:\n");
    for (int i = 0; i < size; i++)
    {
        printf("������� %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }
}


void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("������� %d: %d\n", i + 1, array[i]);
    }
}


void productArray(int array[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= array[i];
    }
    printf("������� ������: %d", product);
}


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    /*
    int mas[5];
    int *p = mas;
    int sum = 0;

    printf("������ �������� ��� ������:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("������� %d: ", i + 1);
        scanf_s("%d", p + i);
        printf(" %d:\n ", p + i);

    }

    for (int i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }

    printf("���� �������� ������: %d\n", sum);
    */

    int array[5];

    fillArray(array, 5);

    printf("\n");
    printArray(array, 5);

    productArray(array, 5);


}
/*void fillArray(int *array, int size) {
    printf("������ �������� ��� ������:\n");
    for (int i = 0; i < size; i++) {
        printf("������� %d: ", i + 1);
        scanf("%d", array + i);
    }
}

int main() {
    int array[5]; // ��������� ����� � 5 ��������

    // ��������� ������� ��� ���������� ������
    fillArray(array, 5);*/