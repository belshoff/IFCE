#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sum = 1;
    int in;
    for(int i = 0; i < 4; i++) {
        scanf("%d", &in);
        sum += in - 1;
    }
    printf("%d\n", sum);
    return 0;
}
