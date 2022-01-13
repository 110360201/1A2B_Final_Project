#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void menu()
{
	choice = -1;
	int select_num;
	while (choice > 3 || choice < 1)/*選單*/
	{
		system("cls");
		printf("\t你好！歡迎來到遊戲\033[45m1A2B\033[m\n");
		printf("\t\t\b\b1.開始遊戲\n");
		printf("\t\t\b\b2.遊戲說明\n");
		printf("\t\t\b\b3.結束遊戲\n");
		printf("請輸入數字：");
		scanf_s("%d", &choice);
	}
	
	 if (choice == 1)
	{
		system("cls");
		printf("遊戲開始！！\n");
	}
	 else if (choice == 2)/*遊戲說明*/
	 {
		 system("cls");
		 printf("輸入%d位不重複正整數數字後，系統將會給予\033[33m幾A幾B\033[m的提示\n", SIZE);
		 printf("A表示\033[36m有數字已經擺放在正確的位置\033[m了\n");
		 printf("B表示\033[36m數字對了但擺放的位置不對\033[m\n");
		 printf("最後只要拿到4個A遊戲就結束了~~\n\n");
		 system("pause");
		 system("cls");
		 menu();
	 }
}