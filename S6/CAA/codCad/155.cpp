#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int n, l, c, x = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d %d", &l, &c);
    if(l > c) x += c;
  }
  printf("%d\n", x);
  return 0;
}
