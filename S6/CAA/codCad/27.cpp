#include <iostream>

using namespace std;

double SQ(int a) {
    return a*a;
}

int main(void){
	int l, a, p, r;
	cin >> l >> a >> p >> r;
	bool cabe = SQ(l) + SQ(a) + SQ(p) <= 4*SQ(r);
	cout << (cabe ? "S" : "N") << endl;
	return 0;
}