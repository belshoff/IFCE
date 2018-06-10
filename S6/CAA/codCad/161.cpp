#include <cstdio>

int mod(int a) {
    return a > 0 ? a : -a;
} 

int main() {
    int N, B, i, j, p[1000], b[1000];
    while(scanf("%d %d", &N, &B) && N) {
        p[0]=1;
        for(i = 1; i <= N; p[i++] = 0);
        for(i = 0; i < B; scanf("%d", &b[i++]));
        for(i = 0; i < B; i++)
            for(j = i+1; j < B; j++)
                p[mod(b[i]-b[j])] = 1;
        
        for(i = 0; i <= N; i++)
            if(!p[i]) break;

        printf("%s\n", i == N+1 ? "Y" : "N");
    }
    return 0;
}