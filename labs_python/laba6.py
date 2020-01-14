import math
x = float(input('Введите значение х: '))
a = float(input('Введите значение а: '))
l = int(input('Введите сколько считать:'))
s = float(input('Введите шаг:'))
temp = float(input('Введите шаблон: '))
xlist = []
alist = []
glist = []
flist = []
ylist = []
gmass = []
fmass = []
ymass = []


for i in range(l):
    try:
        G = (4*(-4*a**2 + a*x + 5*x**2)) / (-20*a**2 + 28*a*x + 3*x**2)
        xlist.append(x)
        alist.append(a)
        glist.append(G)
        gmass.append((x,a,G))
    except ZeroDivisionError:
        G = ('ERROR')
        xlist.append(x)
        alist.append(a)
        glist.append(G)
        gmass.append((x,a,G))
    F = sin(3,14*(27*a**2 - 105*a*x + 50*x**2)) / (3,14*(27*a**2 - 105*a*x + 50*x**2)
    xlist.append(x)
    alist.append(a)
    flist.append(F)
    fmass.append((x,a,F))
    try:
        Y = math.log(-2*a**2 - a*x + x**2 + 1)
        ylist.append(Y)
        xlist.append(x)
        alist.append(a)
        ymass.append((x,a,Y))
    except ValueError:
        Y = ('ERROR')
        xlist.append(x)
        alist.append(a)
        ylist.append(Y)
        ymass.append((x,a,Y))
    x += s
    a += s

w = int(input('1 - вывести функцию G, 2 - вывести функцию F, 3 - вывести функцию Y: '))
op = str(input('Способ вывода? (таблица/строка): '))
if op == 'строка':
    if w == 1:
        print(glist)
        print('Максимальное число: ' + str(max(glist)))
        print('Минимальное число: ' + str(min(glist)))
    if w == 2:
        print(flist)
        print('Максимальное число: ' + str(max(flist)))
        print('Минимальное число: ' + str(min(flist)))
    if w == 3:
        print(ylist)
        print('Максимальное число: ' + str(max(ylist)))
        print('Минимальное число: ' + str(min(ylist)))

elif op == 'таблица':
    q = 0
    if w == 1:
        for i in glist:
            print('a = {} x = {} G = {}'.format(str(alist[q]),str(xlist[q]),str(glist[q])))
            i += 1
            q += 1
    if w == 2:
        for i in flist:
            print('a = {} x = {} F = {}'.format(str(alist[q]),str(xlist[q]),str(flist[q])))
            i += 1
            q += 1
    if w == 3:
        for i in ylist:
            print('a = {} x = {} Y = {}'.format(str(alist[q]),str(xlist[q]),str(ylist[q])))

            i += 1
            q += 1
else:
    print('ERROR')
if w == 1:
    print('Количество совпадений с шаблоном: ' + str(glist.count(temp)))
elif w == 2:
    print('Количество совпадений с шаблоном: ' + str(flist.count(temp)))
elif w == 3:
    print('Количество совпадений с шаблоном: ' + str(ylist.count(temp)))
else:
    print('ERROR')
