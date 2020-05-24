#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *p1;
	int n, i;
	printf("Moi ban nhap so phan tu cua mang: ");
	scanf("%d", &n);
	p1 = (char *) calloc (n, sizeof(char));
	fflush(stdin);
	printf("Nhap chuoi dung pointer: ");
	scanf("%[^\n]", p1);
	printf("Chuoi ban vua nhap la: %s", p1);	
	return 0;
}
