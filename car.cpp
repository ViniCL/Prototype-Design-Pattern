#include "car.h"

Car::Car( std::string nomeMarca ){
    marca = nomeMarca;
};

Car::Car( Car& car){
    Car::marca = car.getMarca();
};

void Car::setMarca( string nome ){
    marca = nome;

}

string Car::getMarca(){
    return marca;
}

Car* Car::clone(){

    return new Car(*this);

}


