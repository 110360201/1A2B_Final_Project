#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void menu()
{
	choice = -1;
	int select_num;
	while (choice > 3 || choice < 1)/*���*/
	{
		system("cls");
		printf("\t�A�n�I�w��Ө�C��\033[45m1A2B\033[m\n");
		printf("\t\t\b\b1.�}�l�C��\n");
		printf("\t\t\b\b2.�C������\n");
		printf("\t\t\b\b3.�����C��\n");
		printf("�п�J�Ʀr�G");
		scanf_s("%d", &choice);
	}
	
	 if (choice == 1)
	{
		system("cls");
		printf("�C���}�l�I�I\n");
	}
	 else if (choice == 2)/*�C������*/
	 {
		 system("cls");
		 printf("��J%d�줣���ƥ���ƼƦr��A�t�αN�|����\033[33m�XA�XB\033[m������\n", SIZE);
		 printf("A���\033[36m���Ʀr�w�g�\��b���T����m\033[m�F\n");
		 printf("B���\033[36m�Ʀr��F���\�񪺦�m����\033[m\n");
		 printf("�̫�u�n����4��A�C���N�����F~~\n\n");
		 system("pause");
		 system("cls");
		 menu();
	 }
}