#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
int main()
{
    //define variable
    int N, n;
    scanf("%d", &N);
    int c = 0;

    for(int i = 0; i < N; i++){
        int flag = 0;
        scanf("%d", &n);

        for(int j = 2; j < n - 1; j++){
            if(n % j == 0){
                flag = 1;
            }
            
        }

        if( n > 1 && flag == 0){
            c++;    
        }
    }

    printf("%d", c);
    
    return 0;
}