#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	float z;
	
	printf("분자를 입력하시오:");
	scanf("%d", &x);
	printf("분모를 입력하시오:");
	scanf("%d", &y);
	z = (float)x/y;
	
	
	printf("나누기의 결과는 %f입니다\n", z );
	return 0;
}
