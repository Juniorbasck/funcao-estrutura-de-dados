/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   retornarNum.h
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 03:02
 */

#ifndef RETORNARNUM_H
#define RETORNARNUM_H

class retornarNum {
public:
    
    int num1, num2; 
    
    retornarNum();
    retornarNum(const retornarNum& orig);
    virtual ~retornarNum();
    
    void lerDados(); 
    int numdescobre(); 
    
private:

};

#endif /* RETORNARNUM_H */

