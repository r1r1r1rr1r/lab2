#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int N, K;
	N = 21;
	K = 32;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K + N * 60);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", (N - 8) * 3600 + K * 60);
	printf("������� ���  = %.2f �����  � ������� ������ = %.2f ����\n", N / 23., K / 60.);
}