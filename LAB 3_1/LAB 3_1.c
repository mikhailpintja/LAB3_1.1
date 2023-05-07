// Lab3_1(var1).c: Обчислення b за заданими умовами.//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <math.h>
#include <conio.h>

float b; //Результат обчислень//
int main()
{
	int a;
	float c;
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть цiле число зi списку (2, 4, 6)");
	printf("\n Значення a=");
	scanf("%d", &a);
	printf("\n Введiть будь-яке дiйсне число");
	printf("\n Значення c=");
	scanf("%f", &c);
	if (a != 2 && a != 4 && a != 6) printf("\n Обрахунок не проводився, Ви ввели значення а= вiдмiнне вiд запропонованого. \n");
	if (a == 2 && c == 0) printf("\n Введенi Вами числа призведуть до дiлення на 0, обрахунок не можливий. \n");
	if (a == 4 && (a*c - 2 * a) < 0) printf("\n Введенi Вами числа не припустимi (корiнь з вiд’ємного числа).\n");
	if (a == 2 && c != 0) b = (pow(a, 2) - 4 * c) / a * c, printf("\n Отриманий результат b= %5.3f", b);
	if (a == 4 && (a*c - 2 * a) >= 0) b = sqrt(a * c - 2 * a), printf("\n Отриманий результат b= %5.3f", b);
	if (a == 6) b = (pow(c, 2) - 2 * a), printf("\n Отриманий результат b= %5.3f", b);

	int getch(); getch();
	return 0;
}

