#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"

void check_nums()
{
	int len, i, j, check, rep, check2;
	printf("�п�J%d�줣���ƥ���ƼƦr�G", SIZE);

	do
	{
		check = 0, rep = 0, check2 = 0;
		scanf_s("%s", &num, 50);
		len = strlen(num);

		if (len > SIZE || len < SIZE)
		{
			printf("�Ʀr�W�L�Τ���%d��ơI\n", SIZE);
			check = 1;
		}
		
		for (i = 0; i < len; i++)
		{
			if (num[i] < 48 || num[i] > 57)
			{
				printf("��J���e�t���D�Ʀr�I\n");
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
			printf("�Ʀr���ƤF�I\n");
		if (check == 1 || check2 == 1)
		{
			printf("�Э��s��J�Ʀr�G");
		}
			
	} while (check == 1 || check2 == 1);
}