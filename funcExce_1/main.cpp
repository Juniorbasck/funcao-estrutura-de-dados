/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 03:01
 */

#include <cstdlib>

#include "retornarNum.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    retornarNum *objNum = new retornarNum(); 
    objNum->lerDados(); 
    objNum->numdescobre(); 
    
    return 0;
}

