/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   v33.cpp
 * Author: SerG1oAC
 *
 * Created on February 21, 2016, 5:44 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
class Mamifero
{
public:
    Mamifero():edad(1){cout << "Constructor Mamifero\n";}
    virtual ~Mamifero(){cout << "Destructor Mamifero\n";}
    virtual void hablar()const {cout << "Mamifero hablando\n";}
protected:
    int edad;
};

class Gato: public Mamifero
{
public:
    Gato(){ cout << "Constructor Gato\n";}
    ~Gato(){cout << "Destructor Gato\n";}
    void hablar() const {cout << "Miauuuuu\n";}
    void ronronear() const {cout << "Rrrrrrrr\n";}
};

/*
 * 
 */
int main(int argc, char** argv) {

    Mamifero *pGato = new Gato;
    pGato->hablar();
    Gato *pelGato = dynamic_cast<Gato *>(pGato);
    if(pelGato)
    {
        pelGato->ronronear();
    }
    
    
    return 0;
}


