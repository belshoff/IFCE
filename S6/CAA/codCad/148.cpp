#include <cstdio>
#include <algorithm>    // std::sort

using namespace std;

typedef struct 
{
    int num, tempo;
} Car;

bool order(Car x, Car y) {
    return (x.tempo < y.tempo);
}


int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    Car arr[n];
    for(int i = 0; i < n; i++)
    {
        arr[i].num = i;
        arr[i].tempo = 0;
        for(int j = 0; j < m; j++) {
            int in;
            scanf("%d", &in);
            arr[i].tempo += in;
        }
    }
    sort(arr, arr+n, order);
    for(int i = 0; i < 3; printf("%d\n", arr[i++].num+1));
    
    return 0;
}
