#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int points, lvls, min = 0, max = 100, in;
    scanf("%d %d", &points, &lvls);
    for(int i = 0; i < lvls; i++)
    {
        scanf("%d", &in);
        points += in;
        points = points < min ? min : points > max ? max : points;
    }

    printf("%d\n", points);
    return 0;
}