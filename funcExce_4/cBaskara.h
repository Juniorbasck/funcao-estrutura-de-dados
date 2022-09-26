/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cBaskara.h
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 00:04
 */

#ifndef CBASKARA_H
#define CBASKARA_H

class cBaskara {
public:
    
    cBaskara();
    cBaskara(const cBaskara& orig);
    virtual ~cBaskara();
    
    void lerDados();
    int fDelta(int a, int b, int c); 
    
private:

};

#endif /* CBASKARA_H */

