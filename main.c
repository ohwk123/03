#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	float z;
	
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);
	printf("�и� �Է��Ͻÿ�:");
	scanf("%d", &y);
	z = (float)x/y;
	
	
	printf("�������� ����� %f�Դϴ�\n", z );
	return 0;
}
