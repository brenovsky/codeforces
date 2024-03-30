def triangular(n):
    s = 0
    a = 0
    for i in range(n):
        a += 1
        s += a
    return s

def retornarCaso(lista, x, y, n):
    lista.append(y)
    
    for i in range(1, n - 1):
        lista.append(y - triangular(i))
    
    lista.append(x)

    return lista

t = int(input())

for i in range(3):
    x, y, n = map(int, input().split())

    lista = []

    intervalo = y - x

    if intervalo < triangular(n - 1):
        print("-1")
    else: