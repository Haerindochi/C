#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#define MAX 1000

char BookName[MAX]; 
char BookArray[MAX][MAX] = { 0, };
int BookCount[MAX] = { 0, };


void printBookList() {
	printf("**********************\n");
	printf("*****책 목록 화면*****\n");
	printf("책이름 대출가능권수\n");
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
	printf("******책 대출 화면******\n");
	printf("************************\n");

	FILE* file = fopen("BookList.txt", "rb");
	
	
	
	printf("대출할 책 이름 : ");
	scanf("%s", BookName);

	int i = 0;
	int exist = 0;

	while (fscanf(file, "%s %d", &BookArray[i], &BookCount[i]) != EOF ) {
		if (strcmp(BookName, BookArray[i]) == 0)
		{
			BookCount[i]--;
			printf("대출이 완료되었습니다.\n");
		}
		else {
			exist++;

		}
		i++;

	}
	if (exist == i) {
		printf("책을 찾을 수 없습니다.\n");
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
	printf("******책 반납 화면******\n");
	printf("************************\n");

	FILE* file = fopen("BookList.txt", "rb");



	printf("반납할 책 이름 : ");
	scanf("%s", BookName);

	int i = 0;
	int exist = 1;

	while (fscanf(file, "%s %d", &BookArray[i], &BookCount[i]) != EOF ) {
		if (strcmp(BookName, BookArray[i]) == 0)
		{
			BookCount[i]++;
			printf("반납이 완료되었습니다.\n");
		}
		else if (strcmp(BookName, BookArray[i]) != 0){
		
			exist ++;

		}
		i++;
	}

	if (exist == i) {
		printf("책을 찾을 수 없습니다.\n");
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
