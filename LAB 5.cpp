#include <stdio.h>
#include <locale.h>
#include <windows.h> 
int main()
{
	setlocale(LC_ALL, "russian");
	int n, m, i, j, k, p, t;
	float  mt[100][100];
	do
	{
		system("CLS");
		fflush(stdin);
		printf("������� ���������� �����\n");
	} while (!scanf_s("%d", &n) || n <= 0);
	do
	{
		fflush(stdin);
		printf("������� ���������� ��������\n");
	} while (!scanf_s("%d", &m) || m <= 0);
	printf("������� �������");
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf_s("%f", &mt[i][j]);
	system("CLS");
	printf("M������:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%.2f ", mt[i][j]);
		printf("\n");
	}
	k = t = p = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (mt[i][j] == 0)
				k++;
			else if (mt[i][j] < 0)
				t++;
			else p++;
		}
	printf("���������� ������������� ��������� ����� %d\n ���������� ������������� ��������� ����� %d\n ���������� ������ ���� ����� %d\n", t, p, k);
	return 0;
}