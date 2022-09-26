/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   volumeEsfera.cpp
 * Author: adils
 * 
 * Created on 24 de outubro de 2021, 22:53
 */

#include "volumeEsfera.h"
#include <iostream>
#include <math.h>

using namespace std; 

volumeEsfera::volumeEsfera() {
}

volumeEsfera::volumeEsfera(const volumeEsfera& orig) {
}

volumeEsfera::~volumeEsfera() {
}


void volumeEsfera::lerDados(){
    
 float raio;   
   
cout<<"Digite o raio de esfera"; 
cin>>raio; 
cout<< this->calcularVolume(raio); 

}

float volumeEsfera::calcularVolume(float raio){
    
    float volume = 4/3 * 3.14 * pow(raio, 3);
    
    return volume; 
    
}