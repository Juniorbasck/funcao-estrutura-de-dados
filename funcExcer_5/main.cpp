/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 24 de outubro de 2021, 22:51
 */

#include <cstdlib>

#include "volumeEsfera.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    volumeEsfera *objRaio = new volumeEsfera(); 
    objRaio->lerDados(); 
    
    return 0;
}

