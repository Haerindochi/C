#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#define MAX 1000

char BookName[MAX]; 
char BookArray[MAX][MAX] = { 0, };
int BookCount[MAX] = { 0, };


void printBookList() {
	printf("**********************\n");
	printf("*****å ��� ȭ��*****\n");
	printf("å�̸� ���Ⱑ�ɱǼ�\n");
	printf("**********************\n");
	FILE* file = fopen("BookList.txt", "r");
	char buff[MAX] = { 0, };

	fread(buff, 1, MAX, file);
	printf("%s", buff);

	fclose(file);
	printf("\n");
	system("pause");
	system("CLS");
	

	
}



void BookBorrow() {
	
	printf("************************\n");
	printf("******å ���� ȭ��******\n");
	printf("************************\n");

	FILE* file = fopen("BookList.txt", "rb");
	
	
	
	printf("������ å �̸� : ");
	scanf("%s", BookName);

	int i = 0;
	int exist = 0;

	while (fscanf(file, "%s %d", &BookArray[i], &BookCount[i]) != EOF ) {
		if (strcmp(BookName, BookArray[i]) == 0)
		{
			BookCount[i]--;
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
		}
		else {
			exist++;

		}
		i++;

	}
	if (exist == i) {
		printf("å�� ã�� �� �����ϴ�.\n");
	}

	fclose(file);

	file = fopen("BookList.txt", "w");
	for (int j = 0; j < i; j++)
	{
		fprintf(file, "%s %d\n", BookArray[j], BookCount[j]);
	}
	

    fclose(file);
	system("pause");
	system("CLS");

}

void BookReturn() {
	printf("************************\n");
	printf("******å �ݳ� ȭ��******\n");
	printf("************************\n");

	FILE* file = fopen("BookList.txt", "rb");



	printf("�ݳ��� å �̸� : ");
	scanf("%s", BookName);

	int i = 0;
	int exist = 1;

	while (fscanf(file, "%s %d", &BookArray[i], &BookCount[i]) != EOF ) {
		if (strcmp(BookName, BookArray[i]) == 0)
		{
			BookCount[i]++;
			printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
		}
		else if (strcmp(BookName, BookArray[i]) != 0){
		
			exist ++;

		}
		i++;
	}

	if (exist == i) {
		printf("å�� ã�� �� �����ϴ�.\n");
	}

	fclose(file);

	file = fopen("BookList.txt", "w");
	for (int j = 0; j < i; j++)
	{
		fprintf(file, "%s %d\n", BookArray[j], BookCount[j]);
	}


	fclose(file);
	system("pause");
	system("CLS");

} 
