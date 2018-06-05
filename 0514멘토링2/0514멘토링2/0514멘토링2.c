#include<stdio.h>
void main() {
	int array[10] = { 1,-4,5,10,13,6,9,-7,2,0 };

	
	//ÃÖ´ñ°ªÃ£±â
	int a,b, i,maxnum,minimum,result;
	a = 0;
	i = 1;
	b = 0;

	while (i < 10) {
		if (array[a] < array[i]) {
			a = i;
		}
		i++;
	}
	maxnum = array[a];

	//ÃÖ¼Ú°ªÃ£±â 
	i = 1;
	while (i < 10) {
		if (array[b] > array[i]) {
			 b = i;
		}
		i++;

	}
	minimum = array[b];


	result = maxnum - minimum;
	printf("%d\n", result);
	
}
