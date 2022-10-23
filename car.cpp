#include "car.h"

Car::Car( std::string nomeMarca ){
    marca = nomeMarca;
};

Car::Car( Car& car){
    Car::marca = car.getMarca();
};

void Car::setMarca( const string nome ){
    marca = nome;

}

string Car::getMarca() const{
    return marca;
}

Car* Car::clone(){

    return new Car(*this);

}


