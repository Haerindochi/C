#define _CRT_SECURE_NO_WARNINGS

#include "stdafx.h"


int main(void) {



	Login();



	int num = 0;

	while (1) {

		num = Screen();

		switch (num) {
		case 1:
			printBookList(); //å ��� ����

			break;
		case 2:
			printf("å �����ϱ�\n");
			BookBorrow(); //å ����
			break;
		case 3:
			printf("å �ݳ��ϱ�\n");
			BookReturn(); //å �ݳ�
			break;
		case 4:
			printf("���α׷��� �����մϴ�. \n");
			exit(0);

		}
		system("pause");
		system("CLS");
	}

	return 0;

	//ȭ�鿡 ���

	//�� ����

}
 