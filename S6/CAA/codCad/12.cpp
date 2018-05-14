#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int in1, in2;
    scanf("%d %d", &in1, &in2);
    if(in1 == 0) printf("C\n");
    else if(in2 == 0) printf("B\n");
    else printf("A\n");
    return 0;
}