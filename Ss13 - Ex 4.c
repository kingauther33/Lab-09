#include <stdio.h>
#include <malloc.h>

int main()
{
	int i, j, n, temp, *ptr;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n*sizeof(int));
	for (i=0; i<n; i++)
	{
		printf("Phan tu thu %d cua mang la: ", i+1);
		scanf("%d", ptr+i);
	}
	for (i=0; i<n-1; i++)
		for (j=i+1; j<n; j++)
		if (*(ptr+i) > *(ptr+j))
		{
			temp = *(ptr+i);
			*(ptr+i) = *(ptr+j);
			*(ptr+j) = temp;
		}
	printf("Cac phan tu sap xep tu be den lon la: \n");
	for (i=0; i<n; i++)
		printf("%d ", *(ptr+i));
}


