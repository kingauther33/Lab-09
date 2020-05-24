#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i, j, dai, t1, dem;
	dem = 0;
	char arr[50], temp[50];
	printf("Moi ban nhap chuoi: ");
	scanf("%[^\n]", arr);
	dai = strlen (arr);
	strcpy (temp, arr);
	for (i=0, j=dai-1; i< (dai/2) ; i++, j--)
	{
		if (temp[i] == temp[j])
		{	
			dem++;
		}
	}
	if (dem == (dai/2))
	{
		printf("Chuoi nay doc xuoi nguoc deu giong nhau. \n");
	}
	else
		printf("Chuoi nay doc xuoi nguoc khong giong nhau.");	
	return 0;
}


