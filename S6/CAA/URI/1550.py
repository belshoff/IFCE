def find(a, b):
    seen = [-1]*10010
    lista = [a]
    seen[a] += 1
    while(len(lista)):
        if(seen[b] != -1): return seen[b]
        frst = lista[0]
        del lista[0]
        inv = int(str(frst)[::-1])
        if(len(seen) > frst+1):
            if(seen[frst+1] == -1):
                seen[frst+1] = seen[frst]+1
                lista.append(frst+1)
        if(len(seen) > inv):
            if(seen[inv] == -1):
                seen[inv] = seen[frst]+1
                lista.append(inv)
    return seen[b]

for t in range(int(input())):
    a, b = map(int, input().split())
    print(find(a, b))

# Idéia:
#     Ao invés de usar a lista de visitado como Booleano, utilizar como um contador.
#     A posição que eu estou vendo atualmente, é encrementada de acordo com o contador
#     da posição pela qual eu cheguei até o elemento atual.
#     Assim, quando a posição destino for vista, ela terá o contador do caminho acululado.

# Análise Assintótica:
#     O(n)