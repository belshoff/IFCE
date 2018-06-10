#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        double in;
        scanf("%lf", &in);
        printf("%1.4lf\n", sqrt(in));
    }
    return 0;
}