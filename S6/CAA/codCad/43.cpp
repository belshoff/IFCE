#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, arr[100001], i;
    for(cin >> n, i = 0; i < n; cin >> arr[i++]);

    vector<int> myvector (arr, arr+n);

    sort(myvector.begin(), myvector.begin()+n);
    i = 0;
    for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it) {
        if(i++ == 0) {
            cout << *it;
        } else {
            cout << ' ' << *it;
        }
    }
    cout << '\n';

    return 0;
}
