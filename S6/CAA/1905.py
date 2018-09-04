board = []
pos = []

def inundar(i, j):
    if board[i][j] > 0: return
    if board[i][j] == 0:
        pos.append((i, j))
        board[i][j] = 2
    if i < 4: inundar(i+1, j)
    if j < 4: inundar(i, j+1)
    if j > 0: inundar(i, j-1)

for t in range(int(input())):
    input()
    pos = []
    board = [ list(map(int, input().split())) for i in range(5)]
    inundar(0, 0)
    print("COPS" if (4, 4) in pos else "ROBBERS")
