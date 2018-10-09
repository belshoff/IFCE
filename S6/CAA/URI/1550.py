vis = [False]*10100

print(len(vis))

def bfs(src, des):
    if(vis[src]): return 100000
    vis[src] = True
    if(src == des): return 1
    return 1 + min(bfs(src+1, des), bfs(int(str(src)[::-1]), des))

for t  in range(int(input())):
    src, des = map(int, input().split())
    print(bfs(src, des))
