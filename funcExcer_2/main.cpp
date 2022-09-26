/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 24 de outubro de 2021, 21:59
 */

#include <cstdlib>

#include "cAluno.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cAluno *objAluno = new cAluno(); 
    objAluno->lerDados(); 
    
    
    
    
    return 0;
}

