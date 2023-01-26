#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>

//Uclide Algorithm
int findQuad(int a, int b){
    if(a > 0){
        if(b > 0){
            return 1;
        }else{
            return 4;
        }
    }else{
        if(b > 0){
            return 2;
        }else{
            return 3;
        }
    }
}
////////////////////////////////////////////////////////////////////////////////
int main()
{
	//Scan two integers A & B
    int a, b;
    scanf("%d\n%d", &a, &b);

    printf("%d", findQuad(a, b));
	return 0;
}
