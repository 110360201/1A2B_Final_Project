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
	printf("���߲q���F�I\n\n��J0�����C���A��J1�H�W���Ʀr�~��C���G");
	scanf_s("%d", &replay);
	if (replay == 1 )
		system("cls");
}