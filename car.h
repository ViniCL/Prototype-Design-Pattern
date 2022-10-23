#pragma once

#include <string>
#include "prototype.h"

using std::string;

class Car : Prototype {

public:
    Car(string marca);
    Car(Car& car);
    void setMarca( string nome );
    string getMarca();

    Car* clone();

private:
    string marca;

};
