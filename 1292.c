#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>
#define MAX 1000

int* createArray(int m){

    int *array = (int *)malloc(sizeof(int) * m);
    int start = 1;
    int count = 0;
    while(count < m){
        for(int i = 0; i < start; i++){
            array[count] = start;
            count++;
            if(count >= m) break;
        }
        start++;
    }

    return array;
}


////////////////////////////////////////////////////////////////////////////////
int main()
{
    //define variable
    int A, B, sum = 0;
    scanf("%d %d", &A, &B);


    int *array = createArray(MAX);
    for(int i = A-1; i <= B-1; i++){
        sum += array[i];
    }
    
    printf("%d", sum);
    free(array);

    return 0;
}
