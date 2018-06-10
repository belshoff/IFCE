#include <iostream>

using namespace std;

int fib(int n){
    return n <= 1 ? 1 : fib(n-1) + fib(n-2);
}

int main(){
	int n;
	cin >> n;	
	cout << fib(n) << endl;
}