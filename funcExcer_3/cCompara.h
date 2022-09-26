/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cCompara.h
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 03:36
 */

#ifndef CCOMPARA_H
#define CCOMPARA_H

class cCompara {
public:
    
    int num1; 
    
    cCompara();
    cCompara(const cCompara& orig);
    virtual ~cCompara();
    
    void lerDados();
    float comValor(); 
    
    
private:

};

#endif /* CCOMPARA_H */

