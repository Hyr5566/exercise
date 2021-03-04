#include <stdio.h>
#include <stdlib.h>
#define N 100
#define HEADER1 " ----------------------------------图书管理系统--------------------------------------"
#define HEADER2 "|  编号  |     书名     |   作者   | 数量 | 是否被借阅 | 借阅人借书证序号 | 借阅天数 |"
#define HEADER3 "|--------|--------------|----------|------|------------|------------------|----------|"
#define END " ------------------------------------------------------------------------------------"
struct book    /*定义结构体类型*/
{
	int NO1;             /*图书编号*/
	char book_name[32];  /*图书名称*/
	char author[16];     /*图书作者*/
	int num;             /*图书库存数量*/
	char Yes_or_No[4];   /*图书是否被借阅*/
	int NO2;             /*借阅人的借书证序号*/
	int day;             /*借阅天数*/
}B[N];
void logon(struct book b)         /*定义注册函数*/
{
}
void cancellation(struct book b)  /*定义注销函数*/
{
}
void query(struct book b)         /*定义查询函数*/
{
}
void modify(struct book b)        /*定义修改函数*/
{
}
void borrow(struct book b)        /*定义借阅函数*/
{
}
void revert(struct book b)        /*定义归还函数*/
{
}
void menu(struct book b)    /*定义菜单函数*/
{
	int i;
	do
	{
	    printf("\n\n                      =====欢迎来到图书管理系统=====\n");
	    printf("\n\n            ***********************菜单***********************");
	    printf("\n            *                                                *");
	    printf("\n            *      1. 注册新书              2. 注销旧书      *");
	    printf("\n            *      3. 查询图书              4. 修改图书      *");
	    printf("\n            *      5. 借阅图书              6. 归还图书      *");
        printf("\n            *                                                *");
	    printf("\n            *                    0. 退出                     *");
	    printf("\n            **************************************************\n\n");
		printf("             请输入操作序号(0 ~ 6):");
		scanf("%d",&i);
		switch(i)
		{
		    case 1: logon(b);break;
			case 2: cancellation(b);break;
			case 3: query(b);break;
			case 4: modify(b);break;
			case 5: borrow(b);break;
			case 6: revert(b);break;
			case 0: break;
			default: break;
		}
	}while(i);
}
int main()
{
	menu(B);
	return 0;
}