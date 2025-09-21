#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int N, K;
	N = 21;
	K = 32;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K + N * 60);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K * 60);
	printf("Текущий час  = %.2f суток  и текущая минута = %.2f часа\n", N / 23., K / 60.);
}