#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high){
    
    int pivot = array[high];

    int i = (low - 1);

    for(int u = low; u < high; u++){
        if(array[u] <= pivot){
            i++;
            swap(&array[i], &array[u]);
        }
    }
    swap(&array[i+1], &array[high]);

    return(i+1);
}

void quicksort(int array[], int low, int high){
    if(low < high){
        int pi = partition(array, low, high);

        quicksort(array, low, pi - 1);

        quicksort(array, pi +1, high);
    }
}

////////////////////////////////////////////////////////////////////////////////
int main()
{
    //define variable
    int T;
    int arr[10];
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        //push each input array 
        for(int j = 0; j < 10; j++){
            scanf("%d", &arr[j]);
        }

        quicksort(arr, 0, 9);

        printf("%d\n", arr[7]);
    }

    return 0;
}