#include <iostream>

using namespace std;

int fat(int n) {
    return n <= 1 ? 1 : n * fat(n-1);
}

int main()
{
    int num;
    cin >> num;
    cout << fat(num) << endl;
    return 0;
}
