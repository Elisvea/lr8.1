#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, m;
    printf("Введите значения n и m через пробел:");
    scanf_s("%d %d", &n, &m);
    for (int i = m, s = 0; i >= n; i--, s += i) printf("выполнено i=%d раз\n", i + 1), printf("результат s=%d\n", s);

}