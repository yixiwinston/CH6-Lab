#include<stdio.h>
#include<stdlib.h>



int main() {

	typedef struct _dates {

		int y;
		int m;
		int d;

	}dates;

	typedef struct _order {

		char num[11];	//編號 
		dates date;		//日期 
		int a;			//金額 

	}order;

	order ord1 = { "ABC00A0001",{2008,10,5},888808888 };
	order ord2 = { "ACB00A0002",{2008,11,12},12308888 };
	order ord3 = { "BCA00A0003",{2008,12,15},31228888 };

	printf("                *****************\n");
	printf("                *    訂單資料   *\n");
	printf("                *****************\n");
	printf("=====================================================\n");
	printf("=====訂單編號========訂貨日期===========訂貨金額=====\n");
	printf("=====================================================\n");
	printf("%-10s  %8d/%02d/%02d     NT$%10d\n", ord1.num, ord1.date.y, ord1.date.m, ord1.date.d, ord1.a);
	printf("%-10s  %8d/%02d/%02d     NT$%10d\n", ord2.num, ord2.date.y, ord2.date.m, ord2.date.d, ord2.a);
	printf("%-10s  %8d/%02d/%02d     NT$%10d\n", ord3.num, ord3.date.y, ord3.date.m, ord3.date.d, ord3.a);
	system("pause");
	return 0;
}
