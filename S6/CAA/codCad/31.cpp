#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int len, count = 0;
  scanf("%d", &len);
  char str[len+1];
  scanf("%s", &str[0]);
  for(int i = 0; i < len; i++) {
      count += str[i] == 'P' ? 2 : str[i] == 'C' ? 2 : str[i] == 'A' ? 1 : 0;
  }
  printf("%d", count);
  return 0;
}
