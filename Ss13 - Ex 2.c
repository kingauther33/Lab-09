#include <stdio.h>
#include <string.h>

int main()
{
	int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	for (i = 0; i < 10; i ++)
	{
	printf("i = %d , ary[i] = %d , *(ary+i)= %d ", i, ary[i], *(ary
+ i));
	printf("&ary[i] = %X , ary + i = %X\n", &ary[i], ary+i);
	}
}
