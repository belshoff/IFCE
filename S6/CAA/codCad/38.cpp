#include <iostream>
#include <string>

using namespace std;

string title(string F){
    F[0] = toupper(F[0]);
    for(int i = 1; F[i] != '\0'; i++)
        if(F[i-1] == ' ') F[i] = toupper(F[i]);
    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}