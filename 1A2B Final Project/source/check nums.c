#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"

void check_nums()
{
	int len, i, j, check, rep, check2;
	printf("請輸入%d位不重複正整數數字：", SIZE);

	do
	{
		check = 0, rep = 0, check2 = 0;
		scanf_s("%s", &num, 50);
		len = strlen(num);

		if (len > SIZE || len < SIZE)
		{
			printf("數字超過或不足%d位數！\n", SIZE);
			check = 1;
		}
		
		for (i = 0; i < len; i++)
		{
			if (num[i] < 48 || num[i] > 57)
			{
				printf("輸入內容含有非數字！\n");
				check = 1;
			}
		}

		for (i = 0; i < len; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (num[i] == num[j])
				{
					check2 = 1;
					rep = 1;
				}
			}
		}
		if (rep == 1 && check == 0)
			printf("數字重複了！\n");
		if (check == 1 || check2 == 1)
		{
			printf("請重新輸入數字：");
		}
			
	} while (check == 1 || check2 == 1);
}