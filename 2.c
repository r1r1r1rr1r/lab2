#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("123\n");
	printf("\n");

	printf("1\n2\n3\n");
	printf("\n");

	printf("1\n\t2\n\t\t3\n");
	printf("\n");

	printf("%2d\n %4d\n %6d\n %8d\n", 1, 2, 3, 4);
	printf("\n");

	printf("%10.3f\n ", 12.234657);
	printf("\n");

	printf("%10.5f\n ", 12.234657);
	printf("\n");

	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);
	printf("\n");

	printf("����� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 / 5);
	printf("\n");

	printf("������������ �� ��������� %d �� %d ����� %d\n ", 2000, 4, 2000 * 4);
	printf("***********************************************************************\n");

	printf("%g ��������� %e ����� %f\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%d ��������� %d ����� %d\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%f ��������� %f ����� %f\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%g ��������� %g ����� %g\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%e ��������� %e ����� %e\n ", 5., 2000000., 5. / 2000000);
	printf("\n");
}