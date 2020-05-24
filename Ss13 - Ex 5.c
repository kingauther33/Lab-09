#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i;
	int *ptr;
	lab1:
	{		
	printf("Ban muon nhap vao bao nhieu so nguyen? ");
	scanf("%d", &num);
	}
	ptr = (int *) malloc (num*sizeof(int));
	if (ptr != NULL)
	{
		printf("Day so nguyen la: ");
		for (i=0; i<num; i++)
		{
			*(ptr+i) = i;
		}
		for (i=num; i>0; i--)
		{
			printf("%d\n", *(ptr + (i-1)));
		}
		free (ptr);
		return 0;
	}
	else
	{
		printf("\nCap phat cho bo nho bi that bai - khong du bo nho, moi ban nhap lai: \n");
		printf("==========================\n");
		goto lab1;
	}
}


