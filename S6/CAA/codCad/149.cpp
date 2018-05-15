#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    double sum = 0, maior = 4.0, menor = 11.0, temp;
    for(int i = 0; i < 5; i++){
        scanf("%lf", &temp);
        if (temp < menor) menor = temp;
        if (temp > maior) maior = temp;
        sum += temp;   
    }

    printf("%.1lf\n", sum - maior - menor);
    return 0;
}
