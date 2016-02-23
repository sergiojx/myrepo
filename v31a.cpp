/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   v31a.cpp
 * Author: SerG1oAC
 *
 * Created on February 20, 2016, 11:07 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
class Mamifero
{
public:
    Mamifero():edad(1){}
    virtual ~Mamifero(){}
    virtual void hablar()const{cout << "Mamifero habla\n";}
protected:
    int edad; 
};

class Perro:public Mamifero
{
public:
    void hablar()const {cout << "Guauguau\n";}
};

class Gato:public Mamifero
{
public:
    void hablar()const {cout << "Miauuuu\n";}
};

class Caballo:public Mamifero
{
public:
    void hablar()const {cout << "Jiiijiji\n";}
};


class Vaca:public Mamifero
{
public:
    void hablar()const {cout << "Muuuuu\n";}
};


void ptrFunction(Mamifero *mamifero);
void refFunction(Mamifero &mamifero);
void valFunction(Mamifero mamifero);
/*
 * 
 */
int main(int argc, char** argv) {

    Mamifero *array[5];
    Mamifero *ptr;
    int elegir,i;
    Perro tomy;
    cout << "Primero habla tomy: ";
    tomy.hablar();
    cout << endl;
    
    Perro *lucas = new Perro;
    cout << "Ahora habla lucas: ";
    lucas->hablar();
    cout << endl;
    
    for (i=0;i<5;i++)
    {
        cout << "(1) perro (2) gato (3) caballo (4) vaca:\n";
        cin >> elegir;
        switch(elegir)
        {
            case 1:
            {
                ptr = new Perro;
            }
            break;
            case 2:
            {
                ptr = new Gato;
            }
            break;
            case 3:
            {
                ptr = new Caballo;
            }
            break;
            case 4:
            {
                ptr = new Vaca;
            }
            break;
            default:
            {
                ptr = new Mamifero;
            }

        }
        array[i]=ptr;
        ptrFunction(ptr);
        refFunction(*ptr);
        valFunction(*ptr);
    }
    
    for (i=0;i<5;i++)
    {
        array[i]->hablar();
    }
    return 0;
}

void ptrFunction(Mamifero *mamifero)
{
    mamifero->hablar();
}
void refFunction(Mamifero &mamifero)
{
    mamifero.hablar();
}
void valFunction(Mamifero mamifero)
{
    mamifero.hablar();
}
