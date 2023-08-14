#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"

int Screen(void){
	int num = 0;	


	printf("**************************\n");
	printf("1. 책 목록 보기\n");
	printf("2. 책 대출\n");
	printf("3. 책 반납\n");
	printf("4. 나가기\n");
	printf("**************************\n");
	printf("원하는 작업 번호 : ");
	scanf("%d", &num);

	system("CLS");

	return(num);
}