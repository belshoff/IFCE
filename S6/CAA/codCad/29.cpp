#include <cstdio>
#include <cstdlib>

int isNum(char str) {
    if(str == '1' || str == '2' || str == '3' || str == '4' || str == '5' || str == '6' || str == '7' || str == '8' || str == '9' || str == '0') {
        return 1;
    }
    return 0;
}

char toNum(char str) {
    if(str == 'A' || str == 'B' || str == 'C') {
        return '2';
    } else if(str == 'D' || str == 'E' || str == 'F') {
        return '3';
    } else if(str == 'G' || str == 'H' || str == 'I') {
        return '4';
    } else if(str == 'J' || str == 'K' || str == 'L') {
        return '5';
    } else if(str == 'M' || str == 'N' || str == 'O') {
        return '6';
    } else if(str == 'P' || str == 'Q' || str == 'R' || str == 'S') {
        return '7';
    } else if(str == 'T' || str == 'U' || str == 'V' ) {
        return '8';
    } else if(str == 'W' || str == 'X' || str == 'Y' || str == 'Z') {
        return '9';
    }
}

int main() {
    int i;
  char input[16];
  char output[16];
  scanf("%s", &input[0]);
  for(i = 0; input[i] != '\0'; i++) {
      if(isNum(input[i]) || input[i] == '-') {
          output[i] = input[i];
      } else {
          output[i] = toNum(input[i]);
      }
  }
  output[i] = '\0';

  printf("%s\n", output);
  
  return 0;
}
