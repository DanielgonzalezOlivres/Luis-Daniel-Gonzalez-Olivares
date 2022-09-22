/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: danni
 *
 * Created on 22 de septiembre de 2022, 11:21
 */
 /*PROFESOSR INTENTE DE DIFERENTES MANERAS PONER EL ARREGLO, O NO ME 
  * LO GUARDABA O HACIA UN UCLE SIN FIN, POR LO QUE LO ENVIO HASTA DONDE PUEDO
  , ASI SI ME DA EL RESULTADO BIEN*/


#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    int a ,b, c, d, m;
    int li = 1;
   cout <<"Ingresa el rango inicial: " <<endl;
   cin >> a;
   
     cout <<"Ingresa el rango final: " <<endl;
   cin >> b;
   
     cout <<"Ingresa el inicio de la tabla: " <<endl;
   cin >> c;
   
     cout <<"Ingresa el final de la tabla " <<endl;
   cin >> d;
     
    for(int i= a; i<=b;  i++)
    {
        
     for(int s= c; s<=d; s++)
   {
        
       m = i * s;
        cout  <<i  <<" x " <<s <<" = " <<m <<endl;
        
   }
    }
        
    return 0;
}

