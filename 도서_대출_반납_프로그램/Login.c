#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"



int Login() {
	ID admin = { "admin", "1234" };
	ID in;

	while (1)
	{
		printf("���̵� : ");
		scanf("%s", in.id);
		printf("��й�ȣ : ");
		scanf("%s", in.password);

		if (strcmp(in.id, admin.id) == 0 && strcmp(in.password, admin.password) == 0) {
			printf("�α��� ����\n\n");
			system("pause");
			break;
		}


		else if (strcmp(in.id, admin.id) != 0)
			printf("���̵� ��ġ���� �ʽ��ϴ�.\n");
		else if (strcmp(in.password, admin.password) != 0)
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");

	}

	system("CLS");





}