#define _CRT_SECURE_NO_WARNINGS

#include "stdafx.h"


int main(void) {



	Login();



	int num = 0;

	while (1) {

		num = Screen();

		switch (num) {
		case 1:
			printBookList(); //책 목록 보기

			break;
		case 2:
			printf("책 대출하기\n");
			BookBorrow(); //책 대출
			break;
		case 3:
			printf("책 반납하기\n");
			BookReturn(); //책 반납
			break;
		case 4:
			printf("프로그램을 종료합니다. \n");
			exit(0);

		}
		system("pause");
		system("CLS");
	}

	return 0;

	//화면에 출력

	//값 갱신

}
 