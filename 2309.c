#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>



////////////////////////////////////////////////////////////////////////////////
int main()
{
    //define variable
	int num1, num2, temp;
    int diff = 0, c = 0;
    int arrayInput[9];
    int index[7];
 
    //push inputs to the array
    for(int i = 0; i < 9; i++){
        scanf("%d", &arrayInput[i]);
        diff += arrayInput[i];
    }

    diff = diff - 100;
    
    //sort Input array
    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            if(arrayInput[i] + arrayInput[j] == diff){
                num1 = arrayInput[i];
                num2 = arrayInput[j];
            }
        }
    }

    for(int t  = 0; t < 9; t++){
        if((arrayInput[t] != num1) && (arrayInput[t] != num2)){
            index[c] = arrayInput[t];
            c++;
        }
    }

    //sort
    for(int x = 0; x < 7; x++){
        for(int y = 0; y < 7; y++){
            if(index[x] < index[y]){
                temp = index[x];
                index[x] = index[y];
                index[y] = temp;
            }
        }
    }
    
    //print answers
    for(int d = 0; d < 7; d++){
        printf("%d ", index[d]);
    }

    return 0;
}
