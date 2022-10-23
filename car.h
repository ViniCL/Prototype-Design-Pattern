#pragma once

#include <string>
#include "prototype.h"

using std::string;

class Car : Prototype {

public:
    Car(string marca);
    Car(Car& car);
    void setMarca( const string nome );
    string getMarca() const;

    Car* clone();

private:
    string marca;

};
