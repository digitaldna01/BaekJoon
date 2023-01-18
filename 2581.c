#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
int main()
{
    //define variable
    int M, N, sum = 0;
    
    int flag = 0;
    scanf("%d %d", &M, &N);
    if(M == 1){
        M = 2;
    }
    int min = N;

    for(int i = M; i <= N; i++){
        flag = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("%d\n", i);
            sum += i;
            if(min > i){
                min = i;
            }
        }
    }

    if(sum == 0){
        sum = -1;
    }
    printf("%d\n", sum);
    if(sum != -1){
        printf("%d", min);
    }
    
    return 0;
}