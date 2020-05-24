#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, n, j, n1, *ptr;
	lab1:
	{
		printf("Nhap vao so phan tu trong mang cua ban: ");
		scanf("%d", &n);
	}	
	ptr = (int *) calloc (n, sizeof(int));
	if (ptr != NULL)
	{
		printf("So phan tu hien tai trong mang la: ");
		printf("%d\n", n);
		for (i=0; i<n; i++)
		{
			*(ptr+i) = pow(2, i);
			printf("Phan tu [%d] = %d\n",i , ptr[i]);
		}
		printf("Nhap vao so phan tu ban muon them vao trong chuoi: ");
		scanf("%d", &n1);
		ptr = (int *) realloc (ptr, (n+n1) * sizeof(int));
		if (ptr != NULL)
		{
			printf("So phan tu tiep theo trong mang la: \n");
			for (j=n; j<n+n1; j++)
			{	
				ptr[j] = pow(2, j);
				printf("Phan tu [%d]: %d\n",j ,ptr[j]);
			}
			realloc(ptr, 0);
		}	
	}
	else
	{
		printf("Bo nho bi khoi tao sai, moi khoi tao lai.\n");
		printf("========================== \n");
		goto lab1;
	}
	return 0;
}


