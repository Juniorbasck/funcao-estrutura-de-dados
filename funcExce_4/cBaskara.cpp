/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cBaskara.cpp
 * Author: adils
 * 
 * Created on 25 de outubro de 2021, 00:04
 */

#include "cBaskara.h"
#include <iostream>
#include <math.h>

using namespace std; 
cBaskara::cBaskara() {
}

cBaskara::cBaskara(const cBaskara& orig) {
}

cBaskara::~cBaskara(){
}

void cBaskara::lerDados(){
  
 int a, b, c;     
    
cout<<"Digite valor de a"<<endl; 
cin>>a; 
cout<<"Digite valor de b"<<endl; 
cin>>b; 
cout<<"Digite valor de c"<<endl; 
cin>>c; 

cout<< this->fDelta(a,b,c); 

}

int cBaskara::fDelta(int a, int b, int c){
    
   int delta; 
   
   delta = pow(b,2) - 4 * a * c; 
   
   return delta; 
    
}