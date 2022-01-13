#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"

int main(void)
{
	replay = -1;
	menu();

	while (replay != 0)
	{
		if (choice == 3)
			break;
		random_ans();
		check_nums();
		compare();
	}

	printf("¹CÀ¸µ²§ô¡I\n");
	system("pause");
	return 0;
}