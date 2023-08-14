#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"



int Login() {
	ID admin = { "admin", "1234" };
	ID in;

	while (1)
	{
		printf("아이디 : ");
		scanf("%s", in.id);
		printf("비밀번호 : ");
		scanf("%s", in.password);

		if (strcmp(in.id, admin.id) == 0 && strcmp(in.password, admin.password) == 0) {
			printf("로그인 성공\n\n");
			system("pause");
			break;
		}


		else if (strcmp(in.id, admin.id) != 0)
			printf("아이디가 일치하지 않습니다.\n");
		else if (strcmp(in.password, admin.password) != 0)
			printf("비밀번호가 일치하지 않습니다.\n");

	}

	system("CLS");





}