/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cCompara.cpp
 * Author: adils
 * 
 * Created on 25 de outubro de 2021, 03:36
 */

#include "cCompara.h"
#include <iostream>

using namespace std; 

cCompara::cCompara() {
}

cCompara::cCompara(const cCompara& orig) {
}

cCompara::~cCompara() {
}

void cCompara::lerDados(){
   
  cout<<"Dite o valor" endl; 
  cin>> num1;    
}

float cCompara::comValor(){
    
    float result; 
    
    if (num1 < 0)
        result == -1; 
    else 
        if (num1 == 0)
            result == 0;
        else 
            result == 1;
  
    return result; 
}