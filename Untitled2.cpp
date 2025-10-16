#include<stdio.h>
#include<math.h>

int main() {
	int  a = 3 ; 
	int b = 4 ;
	int c = 5 ;
	float expression1 = (pow(a,2) + sqrt(pow(b,2) + (4 * a * c))) / (2 * a);
	float expression2 = pow(b,3) / pow(c,2);
	float expression3 = sqrt(abs(a-b));
	float S = expression1 - expression2 + expression3 ;
	printf("expression1 : %.5f \n" , expression1);
	printf("expression2 : %.5f \n" , expression2);
	printf("expression3 : %.5f \n" , expression3);
	printf("S : %.5f \n" , S);
	
	return 0 ;
}
