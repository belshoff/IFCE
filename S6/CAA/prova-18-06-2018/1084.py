"""
Ideia: Pega o n numeros como um vetor, copia pra outo vetor, ordena a copia do vetor,
percorre os m primeiros numeros da copie ordenada e remove os mesmos do vetor original.

Ao final, concatena os valores restantes no vetor original em uma string e mostra.

Complexidade: O(n*log(n))

Complexidade das funções do python:
.sort() -> O(n*log(n))
.reverse() -> O(n)
list() -> O(n)
map() -> O(n)

"""

while True:
    n, d = input().split()
    if(n == 0 and d == 0): exit(0)
    num = list(input())
    snum = num.copy()
    snum.sort()

    for si in snum[:int(d)]:
        num.remove(si)
    s = ''
    for i in num: s+= i
    print(s)