#include <stdio.h>
#include <stdlib.h>

void assign(int *array, short length);
void writeArray(int *array, short length);
void swap(int *array, short first_index, short second_index);

int main() {
    short length, gap;
    int *array;

    printf("Array Length: ");
    scanf("%d", &length);

    array = (int *) malloc(length * sizeof(int));

    assign(array, length);
    writeArray(array, length);

    gap = length >> 1;
    while (gap) {   
        for (int i = gap; i < length; i += 1)
        {
            int key = array[i];
            short j = i;
            while (j >= gap && array[j - gap] > key)
            {   
                array[j] = array[j - gap];
                j -= gap;
            }
            array[j] = key;
        }
        gap >>= 1;
    }
    
    printf("Sorted Array:\n");
    writeArray(array, length);
    
}

void assign(int *array, short length) {
    for (short i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
}

void writeArray (int *array, short length) {
    printf("\n");
    for (short i = 0; i < length; i++)
    {
        printf(" %3d", array[i]);
    }
    printf("\n");
}

void swap(int *array, short first_index, short second_index) {
    int temp = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = temp;
}
