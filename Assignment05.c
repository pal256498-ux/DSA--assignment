/* date 06/08/2026
WACP to take input marks of ten student randomly in an array sort the array using management and show the highest and the 
lowest marks input size of array = 10 [80,73,59,92,86,47,92,58,91,48]*/


#include <stdio.h>

void selectionSort(int arr[], int size)
{
    int i, j, minIndex, temp;

    for (i = 0; i < size - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int marks[10] = {80, 73, 59, 92, 86, 47, 92, 58, 91, 48};
    int i;

    selectionSort(marks, 10);

    printf("Sorted Marks:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\n\nLowest Marks = %d", marks[0]);
    printf("\nHighest Marks = %d", marks[9]);

    return 0;
}
