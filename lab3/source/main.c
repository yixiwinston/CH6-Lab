#include<stdio.h>
#include<stdlib.h>

typedef struct _stu {

	char num[7];
	char clas[20];
	char name[20];
	int score[3];

}stu;

void sub(stu *p);

int main() {

	int i;
	stu stus[3] = {
	{"100001","�q�l�@�A","�ɧA�t",59,58,56},
	{"100002","�q�l�@�A","���p��",99,23,76},
	{"100003","�q�l�@�A","�ʹq��",89,88,78}
	};

	stu *ps;
	ps = stus;

	printf("\n");
	printf("================================================\n");
	printf("==�Ǹ�====�Z��====�m�W========��====�^=====��===\n");
	printf("================================================\n");

	for (i = 0; i <= 2; i++) {
		printf("%6s %-10s %-8s  %4d  %4d  %4d\n",(ps + i)->num, (ps + i)->clas,(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("   before calling the function\n\n");
	sub(ps);

	printf("   after calling the function\n\n");
	for (i = 0; i <= 2; i++) {
		printf("%6s %-10s %-8s  %4d  %4d  %4d\n\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	system("pause");
	return 0;
}

void sub(stu *p) {

	int i;
	for (i = 0; i <= 2; i++) {

		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;

	}




}