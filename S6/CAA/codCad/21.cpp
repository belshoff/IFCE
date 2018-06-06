#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int result, x, y, sum;
  char op;
  scanf("%d", &result);
  scanf("%d %c %d", &x, &op, &y);

  if(op == '+') {
    if(x + y <= result) printf("OK");
    else printf("OVERFLOW");
  }
  else if(op == '*') {
    if(x * y <= result) printf("OK");
    else printf("OVERFLOW");
  }
  return 0;
}
