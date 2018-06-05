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
	int wp_i;//벽의 행 포지션
	int wp_j;//벽의 열 포지션
	int count = 0;
	//카메라들이 각각 하나씩만 있다는 가정
	// 5는 카메라가 닿는 범위

	//1번 카메라 
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
	//여기까지는 1번카메라랑 해당 카메라를 막는 벽이 있는지 위치 확인
	if (wp_i < fc_i) {

		for (i = wp_i + 1; i < 6; i++)
			section[i][fc_j] = 5;
	}

	else {
		for (i = 0; i < wp_i; i++)
			section[i][fc_j] = 5;
	}
	//출력확인
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d", section[i][j]);
		}
		printf("\n");
	}
	
	//2번째 카메라
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
		printf("두번째카메라와 벽%d", sc_i); //출력값확인
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
	//출력확인
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d", section[i][j]);
		}
		printf("\n");
	}
	
	//3번째 카메라

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
	printf("세번째카메라위치 %d\n", wp_i);
	printf("%d\n", wp_j);
	//for문끝 . 3번카메라 기점으로 가로에 벽이 있는 경우
	if (wp_i == tc_i) {
		if (wp_j < tc_j) {

			for (j = wp_j + 1; j < 6; j++)
				section[tc_i][j] = 5;
		}

		else {
			for (j = 0; j < wp_j; j++)
				section[tc_i][j] = 5;
		}//가로에 벽해결
		for (i = 0; i < 6; i++) {
			section[i][tc_j] = 5;
		}//세로부분 해결
	}
	//출력으로 확인
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d", section[i][j]);
		}
	}
	//3번 카메라 기점으로 세로줄에 벽이 막히는경우
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
	//마지막 출력
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
	printf("사각지대 %d", count);
}
