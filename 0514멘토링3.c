#include<stdio.h>
void main() {
	int arr[4][4] = { 0, };
	int a, b,myway,i,j;
	a = 0;
	b = 0;
	arr[a][b] = 1;
	while (1) {
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++) {
				printf("%d", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("방향표를 누르세요 : ");
		scanf_s("%d", &myway);
		arr[a][b] = 0;
		if (myway == 1) {
			if (a > 0)
				a=a - 1;
		}
		else if (myway == 2) {
			if (b > 0)
				b=b - 1;
		}
		else if (myway == 3) {
			if (a < 3)
				a=a + 1;
		}
		else if (myway == 4)
			{
				if(b<3)
				b=b + 1;
		}
		else {
			printf("게임기 종료\n");
			break;
		}
		arr[a][b] = 1;
	}
	

	
}

