"""
Ideia: O tempo pra cada gol é fixo. O Brasil faz 1 gol a cada 90 minutos e a alemanha
faz 1 gol a cada 12.857142857142858(divisão de 90/7) minutos.
Então, é só dividir o tempo e temos a quantidade de gols.

Complexidade: O(1).
"""

from math import ceil, floor

while True:
    n = float(input())
    if(n == 0): exit(0)
    print("Brasil {} x Alemanha {}".format(floor(n/90), ceil(n/12.857142857142858)))