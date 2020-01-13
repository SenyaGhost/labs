
import math
x = float(input('Введите значение х: '))
a = float(input('Введите значение а: '))
l = int(input("Введите сколько считать:"))
s = float(input("Введите шаг:"))
w = int(input('1 - вычислить функцию G, 2 - вычислить функцию F, 3 - вычислить функцию Y: '))
if w == 1:
    for i in range(l):
        if (4*(-4*a**2 + a*x + 5*x**2)) / (-20*a**2 + 28*a*x + 3*x**2) ==0:
            print('ERROR')
        else:
            G = (4*(-4*a**2 + a*x + 5*x**2)) / (-20*a**2 + 28*a*x + 3*x**2)
            print('G = ' + str(G))
            a += s
elif w == 2:
    for i in range(l):
        if (3,14*(27*a**2 - 105*a*x + 50*x**2)) / (3,14*(27*a**2 - 105*a*x + 50*x**2) and (3,14*(27*a**2 - 105*a*x + 50*x**2)) / (3,14*(27*a**2 - 105*a*x + 50*x**2) > 1:
            print('ERROR')
        else:
            F == sin(3,14*(27*a**2 - 105*a*x + 50*x**2)) / (3,14*(27*a**2 - 105*a*x + 50*x**2)
            print('F = ' + str(F))
            a += s
elif w == 3:
    for i in range(l):
        if (-2*a**2 - a*x + x**2 + 1):
            print('ERROR')
        else:
            Y = math.log(-2*a**2 - a*x + x**2 + 1)
            print('Y = ' + str(Y))
            a += s
else:
    print('ERROR')
