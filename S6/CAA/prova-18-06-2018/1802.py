"""
Ideia: Gerar todas as combinações de livros possívei e salvar o preço de cada combinação em uma lista,
aí foi sí ordernar a lista e somar os n primeiros.

complexidade: O(n^5)

Complexidade das funções do python:
.sort() -> O(n*log(n))
.reverse() -> O(n)
list() -> O(n)
map() -> O(n)
"""

def somar(*livros):
    soma = 0
    for i in livros: soma += i
    return soma

p = list(map(int, input().split()[1:]))
m = list(map(int, input().split()[1:]))
q = list(map(int, input().split()[1:]))
f = list(map(int, input().split()[1:]))
b = list(map(int, input().split()[1:]))
n = int(input())

catalogos = []
for jp in p:
    for jm in m:
        for jq in q:
            for jf in f:
                for jb in b:
                    catalogos.append(somar(jp, jm, jq, jf, jb))

catalogos.sort()
catalogos.reverse()
print(somar(*catalogos[:n]))
