#include <bits/stdc++.h>

#define MAXN 100100

using namespace std;

int n;
double a;
double c[MAXN];

double area(double h) {
  double x = 0;
  for(int i = 0; i < n; i++) {
    if(c[i] >= h) {
      x += (c[i]-h);
    }
  }
  return x;
}

double soma(double h, int n, double v[]){
	double soma = 0;
	for(int i = 0; i < n; i++){
		if(v[i]>h){
			soma+= v[i] - h;
		}
	}
	return soma;
}

double bb() {
  double lo = 0, hi = MAXN;
  while(lo+1e-6 < hi) {
    double mid = (lo+hi)/2;
    if(area(mid) > a)
      lo = mid;
    else hi = mid;
  }
  return lo;
}

int main() {
  while(cin >> n >> a) {
    if(n + a == 0) break;
    for(int i = 0; i < n; i++)
      cin >> c[i];
    double result = soma(0, n, c);
		if(result == a){
			cout << ":D" << endl;
		}else if(result < a){
			cout << "-.-"<< endl;
		}else{
			printf("%.4lf\n", bb());
		}
  }
  
  return 0;
}