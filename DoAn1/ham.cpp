#include<stdio.h>
#include"library.h"
void XuatMang(int a[100][100], int c, int d)
{
	for (int i = 0;i < d;i++)
	{
		for (int j = 0;j < c;j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}