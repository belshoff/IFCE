#include<iostream>      //cin,cout
#include <cstring>      //memset
#include <algorithm>    //sort
  
using namespace std;
  
int main() {
    int T,D,I,B;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> D >> I >> B;

        int precos[I], memo[B];
        memset(memo,0,sizeof(memo));
          
        for(int j = 0; j < I; cin >> precos[j++]);

        for(int j=0;j<B;j++){
            int Q;
            cin >> Q;
            for(int k = 0; k < Q; k++) {
                int i, qnt;
                cin >> i >> qnt;
                memo[j] += precos[i]*qnt;
            }
        }
        sort(memo, memo+B);
        cout << D/memo[0] << endl;
    }
}