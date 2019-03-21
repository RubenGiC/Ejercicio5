// Alumno1: Galvez Gomez Manuel
// Alumno2: Girela Castellon Ruben

#ifndef UTILIDADES_H
#define UTILIDADES_H
#include <iostream>

using namespace std;

/**
 * @brief busca en el vector cadena una secuencia igual a la del vector de la subcadena
 * @param cadena contiene una cadena de caracteres
 * @param subcadena contiene una subcadena a buscar
 * @return devuelve la primera posicion donde lo ha encontrado o -1 si no la ha encontrado
 */
int localizarSubcadena(const char cadena[], const char subcadena []);

/**
 * @brief Funcion de insercion de cadena en cadena base
 * @param cadenaBase cadena en la que se hace la insercion
 * @param aInsertar cadena a insertar
 * @param posicion posicion de cadena base donde se empezara a insertar la cadena
 * @param resultado cadena resultante (se asume con tam. suficiente)
 * @return 
 */
bool insertarCadena(const char cadenaBase[], const char aInsertar[], int posicion, char resultado[]);

#endif