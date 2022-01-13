#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void compare()
{
	int i, j;
	a = 0, b = 0;
	while (a != SIZE)
	{
		a = 0, b = 0;
		for (i = 0; i < SIZE; i++)
		{
			if (num[i] == ans[i])
				a++;
		}

		for (i = 0; i < SIZE; i++)
		{
			for (j = 0; j < SIZE; j++)
			{
				if (num[i] == ans[j] && i != j)
					b++;
			}
		}
		printf("%dA%dB\n", a, b);
		if (a != SIZE)
			check_nums();
	}
	printf("恭喜猜中了！\n\n輸入0結束遊戲，輸入1以上的數字繼續遊玩：");
	scanf_s("%d", &replay);
	if (replay == 1 )
		system("cls");
}