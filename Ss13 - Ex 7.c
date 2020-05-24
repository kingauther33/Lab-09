#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a, i, n, tong = 0;
	printf("%s%s", "Mot mang se duoc tao tu dong. \n", "Nhap vao so mot so nguyen de \
khoi tao do dai cua mang: ");
	scanf("%d", &n);
	a = (int *) calloc (n, sizeof(int));
////////////////////////////////////////////// 
	for (i=0; i<n; i++) // nhap gia tri
	{
		printf("Nhap vao gia tri thu %d: ", i);
		scanf("%d", a+i);
	}
	for (i=0; i<n; i++) // tinh tong
		tong += *(a+i);
	free (a);
	printf("%s%d\n%s%d\n", "So phan tu trong mang la: ", n, "Tong \
cac phan tu trong mang la: ", tong);
	return 0;
}


