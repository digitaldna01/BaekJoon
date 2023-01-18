#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>

int Prime(int n){
    if(n == 1) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

////////////////////////////////////////////////////////////////////////////////
int main()
{
    //define variable
    int M, N, sum = 0, min = -1;
    scanf("%d %d", &M, &N);

    for(int i = N; i >= M; i--){
        if(Prime(i) == 1){
            sum += i;
            min = i;
        }
    }

    if(min == -1){
        printf("%d", -1);
    }else{
        printf("%d\n%d", sum, min);
    }
    return 0;
}
