#include<stdio.h>
void main() {
	int i;
	int j;
	int section[6][6] = { {0,0,0,0,0,0},{0,4,0,3,0,0},{0,1,0,0,0,0}, {0,0,0,0,0,0},{4,0,0,0,2,0},{0,0,0,0,0,0} };
	int fc_i;
	int fc_j;
	int sc_i;
	int sc_j;
	int tc_i;
	int tc_j;
	int wp_i;//���� �� ������
	int wp_j;//���� �� ������
	int count = 0;
	//ī�޶���� ���� �ϳ����� �ִٴ� ����
	// 5�� ī�޶� ��� ����

	//1�� ī�޶� 
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (section[i][j] == 1)
			{
				fc_i = i;
				fc_j = j;
				break;
			}
		}
	}
	printf("%d", fc_i);
	printf("%d", fc_j);
	for (i = 0; i < 6; i++) {
		if (section[i][fc_j] == 4)
		{
			wp_i = i;
			wp_j = fc_j;
			printf("%d", wp_i);
			printf("%d", wp_j);
			break;
		}
	}
	//��������� 1��ī�޶�� �ش� ī�޶� ���� ���� �ִ��� ��ġ Ȯ��
	if (wp_i < fc_i) {

		for (i = wp_i + 1; i < 6; i++)
			section[i][fc_j] = 5;
	}

	else {
		for (i = 0; i < wp_i; i++)
			section[i][fc_j] = 5;
	}
	//���Ȯ��
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d", section[i][j]);
		}
		printf("\n");
	}
	
	//2��° ī�޶�
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (section[i][j] == 2)
			{
				sc_i = i;
				sc_j = j;
				break;
			}
		}
	}

		for (j = 0; j < 6; j++){
			if (section[sc_i][j] == 4)
			{
				wp_i = sc_i;
				wp_j = j;
				break;
			}
	}
		printf("�ι�°ī�޶�� ��%d", sc_i); //��°�Ȯ��
		printf("%d", sc_j);
		printf("%d", wp_i);
		printf("%d\n", wp_j);

	if (wp_j < sc_j) {

			for (j = wp_j + 1; j < 6; j++)
				section[sc_i][j] = 5;
		}

	else {
		for (j = 0; j < wp_j; j++)
			section[sc_i][j] = 5;
	}
	//���Ȯ��
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d", section[i][j]);
		}
		printf("\n");
	}
	
	//3��° ī�޶�

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (section[i][j] == 3)
			{
				tc_i = i;
				tc_j = j;
				break;
			}
		}
	}

	for (j = 0; j < 6; j++) {
		if (section[tc_i][j] == 4)
		{
			wp_i = tc_i;
			wp_j = j;
			break;
		}
		else if (section[i][tc_j] == 4)
		{
			wp_i = i;
			wp_j = tc_j;
			break;
		}
	}
	printf("����°ī�޶���ġ %d\n", wp_i);
	printf("%d\n", wp_j);
	//for���� . 3��ī�޶� �������� ���ο� ���� �ִ� ���
	if (wp_i == tc_i) {
		if (wp_j < tc_j) {

			for (j = wp_j + 1; j < 6; j++)
				section[tc_i][j] = 5;
		}

		else {
			for (j = 0; j < wp_j; j++)
				section[tc_i][j] = 5;
		}//���ο� ���ذ�
		for (i = 0; i < 6; i++) {
			section[i][tc_j] = 5;
		}//���κκ� �ذ�
	}
	//������� Ȯ��
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d", section[i][j]);
		}
	}
	//3�� ī�޶� �������� �����ٿ� ���� �����°��
	if (wp_j == tc_j) {
		if (wp_i < tc_i) {

			for (i = wp_i + 1; i < 6; i++)
				section[i][tc_j] = 5;
		}

		else {
			for (i = 0; i < wp_i; i++)
				section[i][tc_j] = 5;
		}
		for (i = 0; i < 6; i++) {
			section[i][tc_j] = 5;
		}
	}
	//������ ���
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d", section[i][j]);
			if (section[i][j] == 0)
			{
				count = count + 1;
			}

		}
		printf("\n");
	}
	printf("�簢���� %d", count);
}
