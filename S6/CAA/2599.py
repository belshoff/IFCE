memo = [-1 for x in range(10**3)]

radares = []

def somatorio(pista, radar):
    if (pista-radar) <= 0 : return 1
    # count = 0
    # for x in radares:
    #     if memo[x] == -1:   memo[x] = somatorio(pista-radar, x)
    #     count += memo[x]
    # return count + 1
    return sum([somatorio(pista-radar, x) for x in radares])

for teste in range(int(input())):
    n, m = list(map(int, input().split()))
    radares = list(map(int, input().split()))
    res = sum([somatorio(n, x) for x in radares])

    print(res%1000000007)

"""
Se o restante for 0, cobriu.

Botar um no final 

Tamanho da àra a ser coberta * numero de radares.
"""