#include <stdio.h>
#include <stdlib.h>
#define N 100
#define HEADER1 " ----------------------------------ͼ�����ϵͳ--------------------------------------"
#define HEADER2 "|  ���  |     ����     |   ����   | ���� | �Ƿ񱻽��� | �����˽���֤��� | �������� |"
#define HEADER3 "|--------|--------------|----------|------|------------|------------------|----------|"
#define END " ------------------------------------------------------------------------------------"
struct book    /*����ṹ������*/
{
	int NO1;             /*ͼ����*/
	char book_name[32];  /*ͼ������*/
	char author[16];     /*ͼ������*/
	int num;             /*ͼ��������*/
	char Yes_or_No[4];   /*ͼ���Ƿ񱻽���*/
	int NO2;             /*�����˵Ľ���֤���*/
	int day;             /*��������*/
}B[N];
void logon(struct book b)         /*����ע�ắ��*/
{
}
void cancellation(struct book b)  /*����ע������*/
{
}
void query(struct book b)         /*�����ѯ����*/
{
}
void modify(struct book b)        /*�����޸ĺ���*/
{
}
void borrow(struct book b)        /*������ĺ���*/
{
}
void revert(struct book b)        /*����黹����*/
{
}
void menu(struct book b)    /*����˵�����*/
{
	int i;
	do
	{
	    printf("\n\n                      =====��ӭ����ͼ�����ϵͳ=====\n");
	    printf("\n\n            ***********************�˵�***********************");
	    printf("\n            *                                                *");
	    printf("\n            *      1. ע������              2. ע������      *");
	    printf("\n            *      3. ��ѯͼ��              4. �޸�ͼ��      *");
	    printf("\n            *      5. ����ͼ��              6. �黹ͼ��      *");
        printf("\n            *                                                *");
	    printf("\n            *                    0. �˳�                     *");
	    printf("\n            **************************************************\n\n");
		printf("             ������������(0 ~ 6):");
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