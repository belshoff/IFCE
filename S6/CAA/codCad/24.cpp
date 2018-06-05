#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int n, in, sum = 0, sub_sum = 0;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++) {
      scanf("%d", &in);
      sum += in;
      arr[i] = in;
  }
  for(int i = 0; i < n; i++) {
      sub_sum += arr[i];
      if(sub_sum == (sum/2)) {
          printf("%d\n", ++i);
          break;
      }
  }
  return 0;
}
