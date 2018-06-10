#include <iostream>

using namespace std;

int collatz(int n) {
    int count = 0;
    while(n != 1) {
        n = n%2 ? 3*n+1 : n/2;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << collatz(num) << endl;
    return 0;
}
