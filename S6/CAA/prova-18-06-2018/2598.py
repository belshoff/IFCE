"""
Ideia: Dividir o tamano da avenida pela quantidade de radares e sempre arredondar pra cima, caso precise.

Complexidade: O(1)
"""

for i in range(int(input())):
    n, m = map(int, input().split())
    print(int(n/m) if n%m == 0.0 else int((n/m)+1))