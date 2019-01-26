#include<stdio.h>
#include<conio.h>
#include"library.h"
void main()
{
	int c, d, dem = 1;
	int x = 0, y = 0;
	int a[100][100];
	printf("nhap so dong cua ma tran: ");scanf_s("%d", &d);
	printf("nhap so cot cua ma tran: ");scanf_s("%d", &c);
	do
	{
		for (int i = x;i < c - x - 1;i++)
		{
			a[x][i] = dem;
			dem++;
		}
		for (int j = y;j < d - y - 1;j++)
		{
			a[j][c-x-1] = dem;
			dem++;
		}
		for (int i = c - x - 1;i > x;i--)
		{
			a[d - y - 1][i] = dem;
			dem++;
		}
		for (int j = d - y - 1;j > y;j--)
		{
			a[j][y] = dem;
			dem++;
		}
		x++;
		y++;
	} while (dem < c*d + 1);
	printf("ma tran hinh xoan oc\n");
	XuatMang(a, c, d);
	_getch();
}