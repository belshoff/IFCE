#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int vetor[n];
    int copiar[n];
    for (int i = 0;i < n; i++) {
        cin >> vetor[i];
        copiar[i] = vetor[i];
    }
    int fora = 0;
    sort(vetor, vetor+n);
    int vfora[n];
    for (int i = 0;i < n; i++) {
        if (vetor[i] != copiar[i]) {
            vfora[fora] = copiar[i];
            fora++;
        }
    }
    cout << fora << endl;
    sort(vfora, vfora+fora);
    for (int i = 0; i<fora; i++) {
        cout << vfora[i] << " ";
    }
    cout << endl;
}