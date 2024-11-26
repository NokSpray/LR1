#include "pch.h"
#include <iostream>
#include "AbstractFactory.h"
#include "ModernFurniture.h"
#include "VictorianFurniture.h"

int main() {
    // Використання фабрики ModernFurnitureFactory
    FurnitureFactory* modernFactory = new ModernFurnitureFactory();
    Chair* modernChair = modernFactory->CreateChair();
    Sofa* modernSofa = modernFactory->CreateSofa();

    modernChair->Sit();
    modernSofa->LieDown();

    // Використання фабрики VictorianFurnitureFactory
    FurnitureFactory* victorianFactory = new VictorianFurnitureFactory();
    Chair* victorianChair = victorianFactory->CreateChair();
    Sofa* victorianSofa = victorianFactory->CreateSofa();

    victorianChair->Sit();
    victorianSofa->LieDown();

    // Очищення пам'яті
    delete modernChair;
    delete modernSofa;
    delete modernFactory;
    delete victorianChair;
    delete victorianSofa;
    delete victorianFactory;

    return 0;
}
