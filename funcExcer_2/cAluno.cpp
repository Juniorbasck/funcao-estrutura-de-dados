/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cAluno.cpp
 * Author: adils
 * 
 * Created on 24 de outubro de 2021, 22:12
 */

#include "cAluno.h"
#include <iostream>
#include <math.h>

using namespace std; 
cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados(){ 
  
  float n1, n2, n3;
  char tm; 
  cout<<"Digite a primeira nota"; 
  cin>> n1;
  cout<<"Digite a segundo nota"; 
  cin>> n2;  
  cout<<"Digite a terceira nota"; 
  cin>> n3;
  cout<<"Digite o tipo de media A/P";
  cin>> tm; 
  cout<< this->media(n1, n2, n3, tm); 
  
}

float cAluno::media(float n1, float n2, float n3, char tm){
  
    float mediaF; 
    
  if (tm == 'A')  
     mediaF = (n1=n2=n3)/3;
  else 
     if (tm == 'P')
         mediaF = (n1*5 + n2*3 + n3*2)/10; 
  
  return mediaF; 
  
}