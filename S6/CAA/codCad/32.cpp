#include<bits/stdc++.h>

using namespace std;

void zeros(string aux){

    string _aux;
    bool sequencia = false;

    for(int i=0;i<aux.size();i++){
        if(aux[i]=='0'){
            sequencia = true;
        }
        if(aux[i]=='0'&&sequencia==true){
            if(aux[i+1]!='0'){
                sequencia = false;
            }
        }
        if(sequencia==false){
           _aux+=aux[i];
        }

    }


    if(_aux!=""){
        cout<<_aux<<endl;
    }
    else
        cout<<"0\n";

}

int main(){

    while(true){

        char x;
        string numero, aux;

        cin>>x>>numero;
        if(x=='0'&&numero=="0")
            break;

        for(int i=0;i<numero.size();i++){
            if(numero[i]!=x){
                aux+=numero[i];
            }
        }


        if(aux!=""){
            zeros(aux);
        }
        else
            cout<<"0\n";

    }

    return 0;
}
