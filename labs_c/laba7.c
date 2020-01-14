#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (void)
{
setlocale(LC_ALL, "Rus");
float a, x, g, f, y, s, mf[100], mg[100], my[100], mg_max = -10, mf_max = -10, my_max = -10, temp;
int word, l, i, k = 0, c = 0, op;
FILE *file1, *file2, *file3;

printf("Введите числа, не равные нулю:\n");
printf("Введите х: ");
scanf("%f", &x);

printf("Введите a: ");
scanf("%f", &a);

printf("Введите сколько считать: ");
scanf("%i",&l);

printf("Введите шаг: ");
scanf("%f",&s);

printf("Введите шаблон: ");
scanf("%f", &temp);

printf("1 - вычислить функцию G, 2 - вычислить функцию F, 3 - вычислить функцию Y:");
scanf("%i",&word);

for (i = 0; i < l; i++)
{
    if ((-20*a*a + 28*a*x + 3*x*x) == 0)
    {
        printf("ERROR\n");
        x += s;
        a += s;
    }
    else
    {
        g = (4*(-4*a*a + a*x + 5*x*x)) / (-20*a*a + 28*a*x + 3*x*x);
        if (mg_max < g)
        {
            mg_max = g;
        }
        mg[i] = g;
        printf("g=%f\n\n",g);
        x += s;
        a += s;
        c += 1;
    }
    f = sin(3,14*(27*a*a - 105*a*x + 50*x*x)) / (3,14*(27*a*a - 105*a*x + 50*x*x);
    if (mf_max < f)
        {
            mf_max = f;
        }
    mf[i] = f;
    printf("f=%f\n\n",f);
    x += s;
    a += s;
    c += 1;
    if ((-2*a*a - a*x + x*x + 1) <= 0)
    {
        printf("ERROR\n");
        x += s;
        a += s;
    }
    else
    {
        y = math.log(-2*a*a - a*x + x**2 + 1);
        if (my_max < y)
        {
            my_max = y;
        }
        my[i] = y;
        printf("y=%f\n\n",y);
        x += s;
        a += s;
        c += 1;
    }
}
printf("Способ вывода? (1-таблица, 2-строка: "); scanf("%d", &op); if ((op != 1) && (op != 2)) {
    printf("ERROR");
}
else { switch(op) {
    case 1:
        if (word == 1)
        {
            printf("Максимальный элемент массива: %d\n", mg_max);
            for (i = 0; i < c; i++)
                printf("%f\n", mg[i]);
        }
        if (word == 2)
        {
            printf("Максимальный элемент массива: %d\n", mf_max);
            for (i = 0; i < c; i++)
                printf("%f\n", mf[i]);
        }
        if (word == 3)
        {
            printf("Максимальный элемент массива: %d\n", my_max);
            for (i = 0; i < c; i++)
                printf("%f\n", my[i]);
        }
    case 2:
        if (word == 1)
        {
            printf("Максимальный элемент массива: ", mg_max);
            printf("\n");
            for (i = 0; i < c; i++)
                printf("%f ", mg[i]);
        }
        if (word == 2)
        {
            printf("Максимальный элемент массива: ", mf_max);
            printf("\n");
            for (i = 0; i < c; i++)
                printf("%f ", mf[i]);
        }
        if (word == 3)
        {
            printf("Максимальный элемент массива: ", my_max);
            printf("\n");
            for (i = 0; i < c; i++)
                printf("%f ", my[i]);
        }
}
}
if (word == 1) {
    for (i = 0; i < l; i++)
        if (mg[i] == temp)
        {
            k += 1;
        }
        printf("Кол-во совпадений: %i", k);
}
if (word == 2) {
    for (i = 0; i < l; i++)
        if (mf[i] == temp)
        {
            k += 1;
        }
}
if (word == 3) {
    for (i = 0; i < l; i++)
        if (my[i] == temp)
        {
            k += 1;
        }
}
    file1 = fopen("file1.txt", "w");
    for (i = 0; i <= c; i++)
        fprintf(file1, "%f\n" , mg[i]);
    fclose(file1);
    file2 = fopen("file2.txt", "w");
    for (i = 0; i <= c; i++)
        fprintf(file2, "%f\n", mf[i]);
    fclose(file2);
    file3 = fopen("file3.txt", "w");
    for (i = 0; i <= c; i++)
        fprintf(file3, "%f\n", my[i]);
    fclose(file3); for (i = 0; i <= c; i++)
    {
        mg[i] = 0;
        mf[i] = 0;
        my[i] = 0;
    }
file1 = fopen("file1.txt", "r");
    for (i = 0; i <= c; i++)
        fscanf(file1, "%f\n", mg[i]);
    fclose(file1);
    printf(mg);
    for (i = 0; i <= c; i++)
        printf("%f\n", mg[i]);
    file2 = fopen("file2.txt", "r");
    for (i = 0; i <= c; i++)
        fscanf(file2, "%f\n", mf[i]);
    fclose(file2);
    printf(mf);
    file3 = fopen("file3", "r");
    for (i = 0; i <= c; i++)
        fscanf(file3, "%f\n", my[i]);
    fclose(file3);
    printf(my);
}
