#include <stdlib.h>
#include <stdio.h>

void assign(int *arr, short length);
void writeArray(int array[], short length);
void swap(int *first_index, int *second_index);


int main() {
    short length;
    int *array, min_val_id;
    printf("Array Length: ");
    scanf("%d", &length);
    printf("\n");

    array = (int *) malloc(length * sizeof(int));
    assign(array, length);
    writeArray(array, length);

    for (short i = 0; i < length - 1; i++) 
    {
        min_val_id = i;
        for (short j = i + 1; j < length; j++)
        {   
            if (array[min_val_id] > array[j])
            {
                min_val_id = j;
            }
        }
        swap(&array[i], &array[min_val_id]);   
    }
    
    printf("Sorted Array: \n");
    writeArray(array, length);
}

void assign(int *arr, short length) {
    for(short i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
}

void writeArray(int array[], short length) {
    printf("\n");
    for (short i = 0; i < length; i++)
    {   
        printf("%d ", array[i]);
    }
    printf("\n");    
}

void swap(int *first_index, int *second_index) {
    int temp = *first_index;
    *first_index = *second_index;
    *second_index = temp;
}
