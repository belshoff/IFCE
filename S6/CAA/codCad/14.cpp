#include <cstdio>
#include <cstdlib>

typedef struct time 
{
    int vitorias;
    int empates;
    int saldo;
} Time;


int main(int argc, char const *argv[])
{
    Time F, C;
    scanf("%d %d %d %d %d %d", &C.vitorias, &C.empates, &C.saldo, &F.vitorias, &F.empates, &F.saldo); 
    printf("%c\n", (C.vitorias*3+C.empates > F.vitorias*3+F.empates ? 'C' : (C.vitorias*3+C.empates < F.vitorias*3+F.empates ? 'F' : (C.saldo > F.saldo ? 'C' : (C.saldo < F.saldo ? 'F' : '=')))));
    return 0;
}