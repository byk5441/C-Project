#include<stdio.h>
void main() {
	int i,mynum;
	printf("수를 입력하시오\n");
	scanf("%d", mynum);

	for (i = 9; i > 0; i--) {
		
		printf("%d * %d = %d", mynum, i,mynum * i);

	}





}