#include <stdio.h>
#include <string.h>

int main()
{
	char kitu, str[81], *ptr;
	printf("Nhap mot cau: ");
	gets(str);
	printf("Nhap ki tu de tim trong cau tren: ");
	kitu = getchar();
	ptr = strchr(str, kitu);
	printf("Chuoi xuat phat tai dia chi: %u\n", str);
	printf("Ki tu xuat hien dau tien tai dia chi: %u\n", ptr);
	printf("Vi tri cua ki tu trong chuoi la: %u", ptr - str);
}
