#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int n, in;
  scanf("%d", &n);
  int sum[n];
  for(int i = 0; i < n; sum[i++] = 0);
  for(int i = 0; i < n; i++) {
      scanf("%d", &in);
      if(in == 1) {
        sum[i+1] += 1;
        sum[i] += in;
        if(i > 0) sum[i-1] += 1;
      }
  }
  for(int i = 0; i < n; printf("%d\n", sum[i++]));
  return 0;
}
