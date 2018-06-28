#include<stdio.h>
#include<string.h>
#define BLANK ' '
void main() {
	char myword[100];
	int i;
	printf("영어단어 입력 : ");
	scanf("%s", myword);
	
	/*
	for (i = 0; i < 100; i++)
	{
		if ((myword[i] == 'a') || (myword[i] == 'e') || (myword[i] == 'i') || 
			(myword[i] == 'o') || (myword[i] == 'u')) 
		{
			myword[i] = BLANK;
		}
	}

	printf("%s", myword);
	
	*/
	for (i = 0; i < 100; i++)
	{
		if ((myword[i] != 'a') && (myword[i] != 'e') && (myword[i] != 'i') &&
			(myword[i] != 'o') && (myword[i] != 'u'))
		{
			printf("%c", myword[i]);
		}
	}
	
}