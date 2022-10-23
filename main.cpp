#include <iostream>
#include "car.cpp"

int main(){

    Car* carroEletrico = new Car( "Tesla" );

    Car* carroClonado = carroEletrico->clone();

    std::cout << "Marca do carro original: " << carroEletrico->getMarca() << "\n";
    std::cout << "Marca do carro clonado: " << carroClonado->getMarca() << "\n";

    return 0;
}