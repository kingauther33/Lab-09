#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char a[20], b[20], c[100];
	char *p1, *p2, *p3;
	printf("Nhap vao chuoi thu nhat: ");
	scanf("%[^\n]", a);
	fflush(stdin);
	printf("Nhap vao chuoi thu hai: ");
	scanf("%[^\n]", b);
	p1 = a;
	p2 = b;
	p3 = c;
	for (i=0; i<strlen(a); i++)
		*(p3+i) = *(p1+i);
	for (i=0; i<strlen(b); i++)
		*(p3+(strlen(a)+i)) = *(p2+i);
	*(p3+(strlen(a)+strlen(b))) = '\0';			
	printf("Chuoi thu ba la: %s\n", c);
	return 0;
}
