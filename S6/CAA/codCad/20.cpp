#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int n, min = 10000, aux;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
      scanf("%d", &aux);
      if(aux < min) min = aux;
  }
  printf("%d\n", min);
  return 0;
}
