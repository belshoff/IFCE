#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int h, p, f, d;
    char roda[16] = {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'};
    char arr[3];
    int last = 0;

    scanf("%d %d %d %d", &h, &p, &f, &d);
    roda[h] = 'h';
    roda[p] = 'p';
    roda[f] = 'f';
    for (int i = 0; i < 16; i++) {
      if(roda[i] != '.')
      arr[last++] = roda[i];
    }
    if(arr[0] == 'p') {
      printf("%c\n", arr[1] == 'h' ? (d == -1 ? 'S' : 'N') : (d == 1 ? 'S' : 'N'));
    } else if(arr[0] == 'h') {
      printf("%c\n", arr[1] == 'f' ? (d == -1 ? 'S' : 'N') : (d == 1 ? 'S' : 'N'));
    } else if(arr[0] == 'f') {
      printf("%c\n", arr[1] == 'p' ? (d == -1 ? 'S' : 'N') : (d == 1 ? 'S' : 'N'));
    }
    return 0;
}
