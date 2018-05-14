#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        if(num%i == 0) {
            if(i != num) printf("%d ", i);
            else printf("%d\n", i);
        }
    }
    return 0;
}
