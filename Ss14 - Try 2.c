#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int *p1 = NULL, *p2 = NULL;
	int row, col, i, j;
	printf("Nhap so dong cua ma tran: ");
	scanf("%d", &row);
	printf("Nhap so cot cua ma tran: ");
	scanf("%d", &col);
	p1 = (int *) malloc (row*col*sizeof(int));
	p2 = (int *) malloc (row*col*sizeof(int));
	printf("Nhap gia tri cho ma tran thu nhat:\n");
	for (i=0; i<row*col; i++)
		{
			printf("Gia tri cua o [%d][%d] la: ",i/col , i%col);
			scanf("%d", p1+i);
		}	
	printf("Nhap gia tri cho ma tran thu hai:\n");
	for (i=0; i<row*col; i++)
		{
			printf("Gia tri cua o [%d][%d] la: ",i/col , i%col);
			scanf("%d", p2+i );
		}	
	printf("Gia tri cua ma tran thu nhat la: \n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
			printf("%d ", p1[i*row+j]);
		printf("\n");
	}
 	printf("Gia tri cua ma tran thu hai la: \n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
			printf("%d ", p2[i*row+j]);
		printf("\n");
	} 	
	
	printf("Gia tri cua ma tran tong giua ma tran 1 va 2 la: \n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
			printf("%d ", p1[i*row+j] + p2[i*row+j]);
		printf("\n");
	}
	return 0;
}
