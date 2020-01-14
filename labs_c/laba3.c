#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (void)
{
setlocale(LC_ALL, "Rus");
float a, x, g, f, y, s;
int word, l, i = 0;

printf("Введите числа, не равные нулю:\n");
printf("Введите х: ");
scanf("%f", &x); printf("Введите a: "); scanf("%f", &a);

printf("Введите сколько считать: ");
scanf("%i",&l);

printf("Введите шаг: ");
scanf("%f",&s);

printf("1 - вычислить функцию G, 2 - вычислить функцию F, 3 - вычислить функцию Y:");
scanf("%i",&word);

for (i = 1; i <= l; i++)
    switch(word)
    {
        case 1:
            if ((-20*a*a + 28*a*x + 3*x*x) == 0)
            {
                printf("ERROR");
                x += s;
                a += s;
            }
            else
            {
                g = (4*(-4*a*a + a*x + 5*x*x)) / (-20*a*a + 28*a*x + 3*x*x);
                printf("g=%f\n\n",g);
                x += s;
                a += s;
                break;
            }
        case 2:
            f = sin(3,14*(27*a*a - 105*a*x + 50*x*x)) / (3,14*(27*a*a - 105*a*x + 50*x*x);
            printf("f=%f\n\n",f);
            x += s;
            a += s;
            break;
        case 3:
            if ((-2*a*a - a*x + x**2 + 1) <= 0)
            {
                printf("ERROR");
                x += s;
                a += s;
            }
            else
            {
                y = math.log(-2*a*a - a*x + x**2 + 1);
                printf("y=%f\n\n",y);
                x += s;
                a += s;
                break;
            }
        default:
            printf(" неправильный ввод.\n");
}
}
