#include <cstring>
#include <cstdio>
#include <cstdlib>


int main(int argc, char const *argv[])
{
    char str[10000];
    char num;
    while(1){
        scanf(" %c %s", &num, &str[0]);
        if(num == '0' && strcmp(str, "0") == 0) return 0;

        // Não terminei.
    }
    
    return 0;
}
