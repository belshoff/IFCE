#include <cstdio>
#include <cstdlib>

int isVogal(char str) {
    if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u') {
        return 1;
    }
    return 0;
}

int len(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}

int main()
{
    char str[51], nat[51], inv[51];
    scanf("%s", &str[0]);
    int n = len(str);
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        if(isVogal(str[i])) {
            nat[x] = str[i];
            x++;
        }
    }
    nat[x--] = '\0';
    for(int i = 0; i < x; i++)
    {
        if(nat[i] != nat[x-i]) {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}
