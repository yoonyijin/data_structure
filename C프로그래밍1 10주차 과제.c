#include <stdio.h>

int main() {
    // ���̰� 6�� int�� �迭 ���� �� �ʱ�ȭ
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // �迭�� ����Ű�� ������ ���� ����
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    // �迭�� ���� �ڹٲٱ�
    for (int i = 0; i < 6; i++) {
        int temp = *(ptr1 + i); // arr1�� ���� temp�� ����
        *(ptr1 + i) = *(ptr2 + i); // arr2�� ���� arr1�� ����
        *(ptr2 + i) = temp; // temp�� ����� ���� arr2�� ����
    }

    // ��� ���
    printf("after swap \n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
