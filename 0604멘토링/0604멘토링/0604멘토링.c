#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int compare(const void*a, const void*b) {
	return *(int*)a- *(int*)b;
}


void main() {
	int arr[20];
	int i, j;
	int temp;
	srand(time(NULL));
	for (i = 0; i < 20; i++) {
		arr[i] = rand() % 1000 + 0;
		printf("%d ", arr[i]);
	}
	printf("\n");
	qsort(arr, 20, sizeof(int), compare);
	//qsort(�迭�� �̸�,�迭�� ũ��,�ڷ����� ũ��,�Լ�);
	for (i = 0; i < 20; i++) {
		printf("���� %d\n", arr[i]);
	}
}







	/*for (i = 0; i < 19; i++)
	{
		
		for (j = i + 1; j < 20; j++) {
			if (arr[j] <= arr[i]) {
				temp = arr[j];
				while (j > i) {
					arr[j] = arr[j - 1];
					j = j - 1;
				}
				arr[i] = temp;
				
			}
		}
	}
	printf("���ĵ� ����\n");
	for (i = 0; i < 20; i++) {
		printf("%d\n", arr[i]);
	}*/
