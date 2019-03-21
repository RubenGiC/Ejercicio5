/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
    
    const int SIZE=200;
    
    char cadena[SIZE], subcadena[SIZE], cadena_result[SIZE*2];
    
    int pos=0;
    
    cout << "Introduzca una cadena: ";
    cin.getline(cadena,SIZE);
    
    cout << endl << "Introduzca una subcadena: ";
    cin.getline(subcadena,SIZE);
    
    int find=localizarSubcadena(cadena, subcadena);
    
    if(find!=-1){
        
        cout << endl << subcadena << " - es una subcadena de - " << cadena;
        cout << endl << "Posicion: " << find;
        
    }else{
        cout << endl << subcadena << " - no es una subcadena de - " << cadena;
    }
    
    cout << endl << "---------------------------------------------------";
    cout << endl << "Inserte la posicion donde se añadira la subcadena: ";
    cin >> pos;
    
    bool result = insertarCadena(cadena,subcadena,pos,cadena_result);
    
    cout << endl << "Insercion posible: " << result;
    
    if(result && cadena_result[0]!='\0'){
        
        cout << endl << "Resultado: ";
        cout << endl << cadena_result;
        
    }
    
    return 0;
}