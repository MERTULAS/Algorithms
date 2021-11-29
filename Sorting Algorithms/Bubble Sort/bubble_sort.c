#include <stdlib.h>
#include <stdio.h>

void assign(int *arr, short length);
void writeArray(int *arr, short length);
void swap(int *arr, short first_index, short second_index);


int main() {
    short length;
    int *array;
    printf("Array Length: ");
    scanf("%d", &length);
    printf("\n");

    array = (int *) malloc(length * sizeof(int));
    assign(array, length);
    writeArray(array, length);

    for (short i = 0; i < length; i++) 
    {
        for (short j = i + 1; j < length; j++)
        {
            if (array[i] > array[j])
            {
                swap(array, i, j);
            }
        }
        
    }
    
    writeArray(array, length);
}

void assign(int *arr, short length) {
    for(short i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
}

void writeArray(int *arr, short length) {
    printf("\n");
    for (short i = 0; i < length; i++)
    {   
        printf("%d ", arr[i]);
    }
    printf("\n");    
}

void swap(int *arr, short first_index, short second_index) {
    int temp = arr[first_index];
    arr[first_index] = arr[second_index];
    arr[second_index] = temp;
}
