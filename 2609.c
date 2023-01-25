#include <stdlib.h> // malloc, atoi, rand
#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

//Uclide Algorithm
int GCD(int a, int b){
	if(a % b == 0){
		return b;
	}else{
		GCD(b, a%b);
	}
}
////////////////////////////////////////////////////////////////////////////////
int main()
{
	//Scan two integers A & B
	int A, B, t, gcd, lcm;
	scanf("%d %d", &A, &B);
	
	int AB = A * B;	
	gcd = GCD(A, B);
	lcm = AB / gcd;
	
	//print gcf & lcm
	printf("%d\n%d", gcd, lcm);
	
	return 0;
}
