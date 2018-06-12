#include <iostream>
#include <string>

using namespace std;

string title(string F){
    F[0] = toupper(F[0]);
    for(int i = 1; F[i] != '\0'; i++) F[i] = F[i-1] == ' ' ? toupper(F[i]) : tolower(F[i]);
    return F;
}

int main(){ 
	string F;
	getline(cin, F);
	cout<<title(F)<<"\n";
}