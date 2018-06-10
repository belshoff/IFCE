#include <iostream>

using namespace std;

int nat(int n) {
    int sum = 0;
    for(int i = 1; i <= n; sum += i++);
    return sum;
}

int main()
{
    int num;
    cin >> num;
    cout << nat(num) << endl;
    return 0;
}
