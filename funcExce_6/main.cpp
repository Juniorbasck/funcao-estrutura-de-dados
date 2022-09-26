/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 04:00
 */

#include <cstdlib>

#include "cProcess.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cProcess *objVerifi + new cProcess();
    objVerifi->lerDados(); 
    objVerifi->verificar(); 
   
    return 0;
}

