#include <stdlib.h>
#include <stdio.h>

void assign(int *arr, short length);
void writeArray(int array[], short length);
void swap(int *first_index, int *second_index);

void main() {
    int *array;
    short length;
    printf("Array Length: ");
    scanf("%d", &length);

    array = (int *) malloc(length * sizeof(int));

    assign(array, length);
    writeArray(array, length);

    for (short i = 0; i < length - 1; i++)
    {
        for (short j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            } 
        }
    }
    printf("\nSorted Array:");
    writeArray(array, length);
}

void assign(int *arr, short length) {
    for (short i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void writeArray(int array[], short length) {
    printf("\n");
    for (short i = 0; i < length; i++)
    {
        printf("%3d", array[i]);
    }
    printf("\n");
}

void swap(int *first_index, int *second_index) {
    int temp = *first_index;
    *first_index = *second_index;
    *second_index = temp;
}