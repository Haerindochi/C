#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"

int Screen(void){
	int num = 0;	


	printf("**************************\n");
	printf("1. å ��� ����\n");
	printf("2. å ����\n");
	printf("3. å �ݳ�\n");
	printf("4. ������\n");
	printf("**************************\n");
	printf("���ϴ� �۾� ��ȣ : ");
	scanf("%d", &num);

	system("CLS");

	return(num);
}