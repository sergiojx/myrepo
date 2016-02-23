/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   v34a.cpp
 * Author: SerG1oAC
 *
 * Created on February 21, 2016, 8:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


enum COLOR {Rojo, Verde, Azul, Amarillo, Blanco, Negro, Marron};
class Animal
{
public:
    Animal(int);
    virtual ~Animal(){cout << "Destructor Animal\n";}
    virtual int obtenerEdad() const {return edad;}
    virtual void configurarEdad(int newEdad){edad = newEdad;}
    virtual void dormir() const =0;
    virtual void comer() const =0;
    virtual void reproducir() const = 0;
    virtual void mover() const = 0;
    virtual void hablar() const = 0;
private:
    int edad;
    
};

Animal::Animal(int newEdad):edad(newEdad)
{
    cout << "Constructor Animal\n";
}

class Mamifero: public Animal
{
public:
    Mamifero(int newEdad):Animal(newEdad)
    {
        cout << "Constructor Mamifero\n";
    }
    virtual ~Mamifero(){cout << "Destructor Mamifero\n";}
    virtual void reproducir() const {
        cout << "Reproducir del mamifero representadi\n";
    }
};

class Pez: public Animal
{
    
public:
    Pez(int newEdad):Animal(newEdad)
    {
        cout << "Constructor Pez\n";
    }
    virtual ~Pez(){
        cout << "Destructor Pez\n";
    }
    virtual void dormir() const {cout << "Pez durmiendo\n";}
    virtual void comer() const {cout << "Pez comienp\n";}
    virtual void reproducir() const {cout << "Pez poniendo huevon\n";}
    virtual void mover() const {cout << "Pez poniendo nadando\n";}
    virtual void hablar() const {};
     
};

class Caballo:public Mamifero
{
public:
    Caballo(int newEdad, COLOR newColor):Mamifero(newEdad), color(newColor)
    {
        cout << "Constructor Caballo\n";
    }
    virtual ~Caballo()
    {
        cout << "Destructor Caballo\n";
    }
    virtual void  hablar() const {cout << "Jiiiii\n";}
    virtual COLOR obtenercolor() const {return color;}
    virtual void dormir() const {cout << "Caballo roncando\n";}
    virtual void comer() const {cout << "Caballo comiendo\n";}
    virtual void mover() const {cout << "Caballo galopando\n";}
protected:
    COLOR color;
           
};


class Perro:public Mamifero
{
public:
    Perro(int newEdad, COLOR newColor):Mamifero(newEdad), color(newColor)
    {
        cout << "Constructor Perro\n";
    }
    virtual ~Perro()
    {
        cout << "Destructor Perro\n";
    }
    virtual void  hablar() const {cout << "Guauuu\n";}
    virtual COLOR obtenercolor() const {return color;}
    virtual void dormir() const {cout << "Perro roncando\n";}
    virtual void comer() const {cout << "Perro comiendo\n";}
    virtual void mover() const {cout << "Perro Corriendo\n";}
    virtual void reproducir() const {cout << "Perro reproduciendose\n";}
protected:
    COLOR color;
           
};
/*
 * 
 */
int main(int argc, char** argv) {
    
    Animal *pAnimal = 0;
    int elegir;
    bool fQuit = false;
    
    while(1)
    {
        cout << "(1) Perro (2) Caballo (3) Pez (0) Salir";
        cin >> elegir;
        switch(elegir)
        {
            case 1:
            {
                pAnimal = new Perro(5, Blanco);
            }
            break;
            case 2:
            {
                pAnimal = new Caballo(4, Negro);
            }
            break;
            case 3:
            {
                pAnimal  = new Pez(5);
            }
            break;
            default:
            {
                fQuit = true;
            }
            break;
        }
        if(fQuit)
        {
            break;
        }
        pAnimal->hablar();
        pAnimal->comer();
        pAnimal->reproducir();
        pAnimal->mover();
        pAnimal->dormir();
        delete pAnimal;
        cout << "\n";
    }

    return 0;
}

