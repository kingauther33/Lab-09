# include <stdio.h>
# include <string.h>

int main()
{
	char *ptr;
	char word[20];
	int i, vowcnt=0;
	printf("Enter a word: ");
	scanf("%[^\n]", word);
	ptr = &word[0];
	for(i=0;i<strlen(word);i++)
	{
		if((*ptr=='a')||(*ptr=='e')||(*ptr=='i')||(*ptr=='o')||
		(*ptr=='u')|| (*ptr=='A')||(*ptr=='E')||(*ptr=='I')||
		(*ptr=='O')||(*ptr=='U'))
		vowcnt++;
		ptr++;
	}
		printf("The word is : %s \n The number of vowels in the word is\
: %d ", word, vowcnt);
	return 0;
}
