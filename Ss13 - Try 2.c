#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int a, b, i, j;
	char *pthu, *pchim;
	pthu = (char*) calloc (30, sizeof(char));
	pchim = (char*) calloc (30, sizeof(char));
	printf("Moi ban nhap ten cua con thu(Tieng Anh): ");
	scanf("%[^\n]", pthu);
	fflush(stdin);
	printf("Moi ban nhap ten cua con chim(Tieng Anh): ");
	scanf("%[^\n]", pchim);
	a = strlen(pthu);
	b = strlen(pchim);
	printf("Ten cua con thu vua nhap la: %s\n", pthu);
	printf("Ten cua con chim vua nhap la: %s\n", pchim);
	switch (tolower(*(pthu+(a-1))))
	{
		case 'o':
		case 's':
		case 'x':
		case 'z':
			*(pthu+(a)) = 'e';
			*(pthu+(a+1)) = 's';
			break;
		case 'h':
			if ((tolower(*(pthu+(a-2))) == 'c') || (tolower(*(pthu+(a-2))) == 'c'))
			{
				*(pthu+(a)) = 'e';
				*(pthu+(a+1)) = 's';
			}
			break;			
		case 'y':
			switch (*(pthu+(a-2)))
			{
				case 'u':
				case 'e':
				case 'o':
				case 'a':
				case 'i':
					*(pthu+(a-1)) = 'i';
					*(pthu+a) = 'e';
					*(pthu+(a+1)) = 's';		
					break;
				default:
					*(pthu+a) = 's';
					break;
			}
			break;
		case 'f':
			*(pthu+(a-1)) = 'v';
			*(pthu+a) = 'e';
			*(pthu+(a+1)) = 's';
			break;
		case 'e':
			if (*(pthu+(a-2)) == 'f')
			{
				*(pthu+(a-2)) = 'v';
				*(pthu+(a-1)) = 'e';
				*(pthu+(a)) = 's';
			}
			break;
		default:
			*(pthu+(a)) = 's';
			break;	
	}
	printf("Ten cua con thu duoc them so nhieu la: %s\n", pthu);
	switch (tolower(*(pchim+(b-1))))
	{
		case 'o':
		case 's':
		case 'x':
		case 'z':
			*(pchim+(b)) = 'e';
			*(pchim+(b+1)) = 's';
			break;
		case 'h':
			if ((tolower(*(pchim+(b-2))) == 'c') || (tolower(*(pchim+(b-2))) == 'c'))
			{
				*(pchim+(b)) = 'e';
				*(pchim+(b+1)) = 's';
			}
			break;			
		case 'y':
			switch (*(pchim+(b-2)))
			{
				case 'u':
				case 'e':
				case 'o':
				case 'a':
				case 'i':
					*(pchim+(b-1)) = 'i';
					*(pchim+b) = 'e';
					*(pchim+(b+1)) = 's';		
					break;
				default:
					*(pchim+b) = 's';
					break;
			}
			break;
		case 'f':
			*(pchim+(b-1)) = 'v';
			*(pchim+b) = 'e';
			*(pchim+(b+1)) = 's';
			break;
		case 'e':
			if (*(pchim+(b-2)) == 'f')
			{
				*(pchim+(b-2)) = 'v';
				*(pchim+(b-1)) = 'e';
				*(pchim+(b)) = 's';
			}
			break;
		default:
			*(pchim+(b)) = 's';
			break;	
	}
	printf("Ten cua con chim duoc them so nhieu la: %s", pchim);
	return 0;
}


