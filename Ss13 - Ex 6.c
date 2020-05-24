#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *calloc1, *calloc2;
	int i, n;
	printf("Nhap so phan tu cua mang 1 va 2:");
	scanf("%d", &n);
	calloc1 = (float *) calloc(n, sizeof(float));
	calloc2 = (float *)calloc(n, sizeof(float));
	
	if(calloc1!=NULL && calloc2!=NULL)
	{
		for(i=0 ; i<n; i++)
		{
		printf("calloc1[%d] co gia tri %05.5f \n", i, calloc1[i]);
		printf("calloc2[%d] co gia tri %05.5f \n", i, *(calloc2+i));
		}
		free(calloc1);
		free(calloc2);
		return 0;
		}
	else
	{
		printf("Not enough memory\n");
		return 1;
	}
}


