#include<stdio.h>
#include<string.h>
#include<ctype.h>

//���̵� ����� �ߺ�
void main() {

	char id[11];
	char program[11] = "program";
	int length;
	int i;
	int count = 0;
	int check = 0;
	length = strlen(program);

	while (1) {
		printf("���̵� �Է��ϼ��� : ");
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
			printf("�߸��� ���̵��Դϴ� \n");
		}
	}
		
		
		if (length == strlen(id)) {
			for (i = 0; i < length; i++) {
				if (id[i] == program[i]) {
					count++;
				};
			}
			if (count == length) {
				printf("���̵� �ߺ��˴ϴ�\n");
			}
		}
		else {
			printf("��� ������ ���̵��Դϴ�\n");
		}
		

}