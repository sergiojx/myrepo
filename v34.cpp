/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   v33b.cpp
 * Author: SerG1oAC
 *
 * Created on February 21, 2016, 6:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


class Forma
{
public:
    Forma(){}
    ~Forma(){}
    virtual long obtenerArea()=0;
    virtual long obtenerPeirm()=0;
    virtual void dibujar()=0;
};

void Forma::dibujar()
{
    cout << "Mecanismo de  dibujo Abstrato\n";
}
class Circulo:public Forma
{
public:
    Circulo(int newRadio):radio(newRadio){}
    ~Circulo(){}
    long obtenerArea(){return 3*radio*radio;}
    long obtenerPeirm(){return 9*radio;}
    void dibujar();
private:
    int radio;
    int circunferencia;
};

void Circulo::dibujar()
{
    cout << "Dibujar Circulo\n";
    Forma::dibujar();
}


class Rectangulo: public Forma
{
public:
    Rectangulo(int newLar, int newAncho):largo(newLar),ancho(newAncho){}
    virtual ~Rectangulo(){}
    virtual long obtenerArea(){return largo*ancho;}
    virtual long obtenerPeirm(){return 2*largo + 2*ancho;}
    virtual int obtenerLargo(){return largo;}
    virtual int obtenerAncho(){return ancho;}
    virtual void dibujar();
private :
    int ancho;
    int largo;
};

void Rectangulo::dibujar()
{
    for(int i = 0 ;i < largo;i++)
    {
        for(int j = 0;j < ancho; j++)
        {
            cout << "x ";
            
        }
        cout << "\n";
    }
    Forma::dibujar();
}

class Cuadrado:public Rectangulo
{
public:
    Cuadrado(int lar);
    Cuadrado(int lar, int ancho);
    ~Cuadrado(){}
    long obtenerPeirm(){return 4*obtenerLargo();}
    
};

Cuadrado::Cuadrado(int newLar):Rectangulo(newLar, newLar)
{
    
}

Cuadrado::Cuadrado(int newLar, int newAncho):Rectangulo(newLar, newAncho)
{
    if(obtenerLargo() != obtenerAncho())
    {
        cout << "Error, no un cuadrado...un rectangilo??\n";
    }
}
/*
 * 
 */
int main(int argc, char** argv) {

    int elegir;
    bool exit = 1;
    Forma * frm;
    
    while(exit)
    {
        cout << "(1) Circulo (2) Rectangulo (3) Cuadrado\n";
        cin >> elegir;
        switch(elegir)
        {
            case 1:
            {
                frm = new Circulo(2);
            }
            break;
            case 2:
            {
                frm = new Rectangulo(5,3);
            }
            break;
            case 3:
            {
                frm = new Cuadrado(7);
            }
            break;
            case 0:
            {
                exit = 0;
            }
        }
        frm->dibujar();
        delete frm;
        
    }
    
    return 0;
}

