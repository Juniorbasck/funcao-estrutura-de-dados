/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cProcess.h
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 04:00
 */

#ifndef CPROCESS_H
#define CPROCESS_H

class cProcess {
public:
    
  
    
    cProcess();
    cProcess(const cProcess& orig);
    virtual ~cProcess();
    
    void lerdados(); 
    float verificar(int x,int y, int z); 
    
    
private:

};

#endif /* CPROCESS_H */

