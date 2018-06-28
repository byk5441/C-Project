#include<stdio.h>
#include<string.h>
#include<ctype.h>

//아이디 만들고 중복
void main() {

	char id[11];
	char program[11] = "program";
	int length;
	int i;
	int count = 0;
	int check = 0;
	length = strlen(program);

	while (1) {
		printf("아이디를 입력하세요 : ");
		scanf("%s", id);
		printf("\n");
		printf("%d", strlen(id));
		for (i = 0; i < strlen(id); i++) {
			if (isdigit(id[i])) {
				check++;
			}
		}
		
		if ((id[0] > 'a' && id[0] < 'z') && (strlen(id) < 11) && (check>=1)) {

			break;
		}

		else
		{
			printf("잘못된 아이디입니다 \n");
		}
	}
		
		
		if (length == strlen(id)) {
			for (i = 0; i < length; i++) {
				if (id[i] == program[i]) {
					count++;
				};
			}
			if (count == length) {
				printf("아이디가 중복됩니다\n");
			}
		}
		else {
			printf("사용 가능한 아이디입니다\n");
		}
		

}