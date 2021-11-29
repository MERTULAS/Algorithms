#include <stdio.h>
#include <stdlib.h>

void assign(int *arr, short length);
void writeArray(int *arr, short length);
void swap(int *arr, short first_index, short second_index);

int main() {
    short length, j;
    int *array, key;
    printf("Array Length: ");
    scanf("%d", &length);
    printf("\n");
    array = (int *) malloc(length * sizeof(int));
    assign(array, length);
    writeArray(array, length);

    printf("Sorted Array: \n");

    for (short i = 1; i < length; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    writeArray(array, length);
}

void assign(int *arr, short length) {
    for (short i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
}

void writeArray(int *arr, short length) {
    printf("\n");
    for (short i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
