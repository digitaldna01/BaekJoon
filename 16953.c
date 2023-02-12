#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>



////////////////////////////////////////////////////////////////////////////////
int main()
{
	//Scan two integers N
	int A, B, count, cnt = 0, run = 1;
	scanf("%d %d", &A, &B);
    while(run){
        if(A > B){
            count = -1;
            run = 0;
        }
        if(A == B){
            cnt++;
            count = cnt;
            run = 0;
        }
        else if(B % 10 == 1){
            B = B - 1;
            B = B / 10;
        }else if(B % 2 == 0){
            B = B / 2;
        }else{
            count = -1;
            run = 0;
        }
        cnt++;
    }
    printf("%d", count);
    
    return 0;
}
