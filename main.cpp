#include <iostream>
#include "car.cpp"

int main(){

    Car* carroEletrico = new Car( "Tesla" );

    Car* carroClonado = carroEletrico->clone();

    std::cout << carroEletrico->getMarca() << "\n";
    std::cout << carroClonado->getMarca() << "\n";

    return 0;
}