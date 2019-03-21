
#include <iostream>
#include "utilidades.h"

using namespace std;

int localizarSubcadena(const char cadena[], const char subcadena []){
    int find = -1;
    
    if(cadena[0]!='\0' && subcadena[0]!='\0'){
        
        int pos_subc=0;
        
        for(int i=0; cadena[i]!='\0'; i++){
            
            if(cadena[i]==subcadena[pos_subc]){
                
                if(pos_subc==0) find=i;
                
                pos_subc++;
            }else if(cadena[i]!=subcadena[pos_subc] && subcadena[pos_subc]!='\0'){
                
                find=-1;
                pos_subc=0;
            }
            
        }
    }
    
    return find;
}

bool insertarCadena(const char cadenaBase[], const char aInsertar[], int posicion, char resultado[]){
    bool correct=false;
    
    if(cadenaBase[0]!='\0' && aInsertar[0]!='\0' && posicion>=0){
        
        int e=0, i=0;
        
        for(; cadenaBase[i]!='\0';i++){
            
            if(i==posicion){
                correct=true;
                for(; aInsertar[e]!='\0'; e++){
                    resultado[i+e]=aInsertar[e];
                }
            }
            resultado[i+e]=cadenaBase[i];
            //resultado[e]=i;
        }
        
        if(i==posicion){
            correct=true;
            for(; aInsertar[e]!='\0'; e++){
                resultado[i+e]=aInsertar[e];
            }
        }
        resultado[i+e]='\0';
    }
    
    return correct;
}