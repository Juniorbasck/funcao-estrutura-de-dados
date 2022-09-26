/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cProcess.cpp
 * Author: adils
 * 
 * Created on 25 de outubro de 2021, 04:00
 */

#include "cProcess.h"
#include <iostream>

using namespace std; 
cProcess::cProcess() {
}

cProcess::cProcess(const cProcess& orig) {
}

cProcess::~cProcess() {
}

void cProcess::lerdados(){
    
   int x, y, z; 
    
   cout<<"Digite o primeiro numero" << endl; 
   cin>> x; 
   cout<<"Digite o segundo numero" << endl; 
   cin>> y; 
   cout<<"Digite o terceiro numero" << endl; 
   cin>> z;  
   
   cout<<this->verificar(x,y,z);
}

float cProcess::verificar(int x, int y, int z){
    
    
    if (x + y > z && x + z > y && y + z > x){
        cout<<"forma um triangulo"; 
        if ((x == y) && (x == z))
            cout<<"Equilatero";
        else
            if (x == y || x == z || y == z)
                cout<<"isosceles"; 
            else
                cout<<"escaleno"<<; 
    }
    else 
        cout<<"formam o triangulo"; 
}
