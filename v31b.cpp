/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   v31b.cpp
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
    Mamifero():edad(1){cout << "Mamifero Constructor\n";}
    virtual ~Mamifero(){cout << "Mamifero Destructor\n";}
    Mamifero (const Mamifero &rhs);
    virtual void hablar()const{cout << "Mamifero hablando\n";}
    virtual Mamifero * clone(){return  new Mamifero(*this);}
    int obtenerEdad()const{return edad;}
protected:
    int edad; 
};

Mamifero::Mamifero(const Mamifero &rhs):edad(rhs.obtenerEdad())
{
    cout << "Copia constructor Mamifero\n";
}


class Perro:public Mamifero
{
public:
    Perro(){cout << "Perro Constructor\n";}
    virtual ~Perro(){cout << "Perro Destructor\n";}
    Perro (const Perro &rhs);
    void hablar()const {cout << "Guauguau\n";}
    virtual Mamifero * clone(){return  new Perro(*this);}
};

Perro::Perro(const Perro &rhs):Mamifero(rhs)
{
    cout << "Copia constructor Perro\n";
}
class Gato:public Mamifero
{
public:
    Gato(){cout << "Gato Constructor\n";}
    virtual ~Gato(){cout << "Gato Destructor\n";}
    Gato (const Gato &rhs);
    void hablar()const {cout << "Miauuu\n";}
    virtual Mamifero * clone(){return  new Gato(*this);}
};
Gato::Gato(const Gato &rhs):Mamifero(rhs)
{
    cout << "Copia constructor Gato\n";
}


/*
 * 
 */
int main(int argc, char** argv) {

    Mamifero *array[5];
    Mamifero *otroArray[5];
    Mamifero *ptr;
    int elegir,i;
    
    for (i=0;i<3;i++)
    {
        cout << "(1) perro (2) gato:\n";
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
            default:
            {
                ptr = new Mamifero;
            }

        }
        array[i]=ptr;
        
    }
    
    
    for (i=0;i<3;i++)
    {
        array[i]->hablar();
        otroArray[i] = array[i]->clone();
    }
    
    
    for (i=0;i<3;i++)
    {
        otroArray[i]->hablar();
    }
    
    return 0;
}


