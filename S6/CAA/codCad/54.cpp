#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int p1, c1, p2, c2;
  scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
  printf("%d\n", p1*c1 == p2*c2 ? 0 : (p1*c1 > p2*c2 ? -1 : 1));
  return 0;
}
