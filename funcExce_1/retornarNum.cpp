/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   retornarNum.cpp
 * Author: adils
 * 
 * Created on 25 de outubro de 2021, 03:02
 */

#include "retornarNum.h"
#include <iostream>

using namespace std; 
retornarNum::retornarNum() {
}

retornarNum::retornarNum(const retornarNum& orig) {
}

retornarNum::~retornarNum() {
}

void retornarNum::lerDados(){
    
    cout<<"digite o primeiro numero"<<endl; 
    cin>>this->num1; 
    cout<<"digite o primeiro numero"<<endl; 
    cin>>this->num2; 
    
}

int retornarNum::numdescobre(){
    
  float R; 
    
    if (num1 > num2)
        R == num2; 
    else 
        R == num1; 
  
    return R;             
}