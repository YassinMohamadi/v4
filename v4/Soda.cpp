#include "Soda.h"
#include <iostream>
using namespace std;

Soda::Soda( int codeSoda) : codeSoda(codeSoda)
{
}






bool Soda::selectionner(int code){
    if (code == this->codeSoda){
            cout << "Soda selectionner"<<endl;
        return true;
    }else{
        cout << "Veuillez selectionner soda"<<endl;
        return false;
    }
}

void Soda::serveSoda(){
    cout << "Serving soda..."<<endl;
}

void Soda::ouvrireCompartement(){
    cout << "Ouverture du compartement..."<<endl;
}

void Soda::fermerCompartement(){
    cout << "Fermeture du compartement..."<<endl;
}






void Soda::setCodeSoda(int code)
{
    this->codeSoda = code;
}


int Soda::getCodeSoda()
{
    return this->codeSoda;
}
