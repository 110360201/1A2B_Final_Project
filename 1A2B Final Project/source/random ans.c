#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"


void random_ans()
{
	int i, j, same,temp;
	srand(time(NULL));
	for (i = 0; i < SIZE; i++)//SIZE 數字的量
	{
		do
		{
			same = 0;
			temp = rand() % 10;//產生0到9的數字
			ans[i] = temp + '0';
			for (j = 0; j < i; j++)
			{
				if (ans[i] == ans[j])
					same = 1;
			}
		} while (same == 1);
	}
	printf("\n");
}