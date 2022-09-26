/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   volumeEsfera.h
 * Author: adils
 *
 * Created on 24 de outubro de 2021, 22:53
 */

#ifndef VOLUMEESFERA_H
#define VOLUMEESFERA_H

class volumeEsfera {
public:
    //paradigma
    float raio; 
    
    volumeEsfera();
    volumeEsfera(const volumeEsfera& orig);
    virtual ~volumeEsfera();
    
    void lerDados(); 
    float calcularVolume(float raio); 
    
     
private:

};

#endif /* VOLUMEESFERA_H */

