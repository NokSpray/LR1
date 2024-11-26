#ifndef VICTORIAN_FURNITURE_H
#define VICTORIAN_FURNITURE_H

#include "AbstractFactory.h"
#include <iostream>

// Конкретні продукти (Вікторіанські меблі)
class DLL_API VictorianChair : public Chair {
public:
    void Sit() override {
        std::cout << "You are sitting on a Victorian chair.\n";
    }
};

class DLL_API VictorianSofa : public Sofa {
public:
    void LieDown() override {
        std::cout << "You are lying on a Victorian sofa.\n";
    }
};

// Конкретна фабрика
class DLL_API VictorianFurnitureFactory : public FurnitureFactory {
public:
    Chair* CreateChair() override {
        return new VictorianChair();
    }

    Sofa* CreateSofa() override {
        return new VictorianSofa();
    }
};

#endif // VICTORIAN_FURNITURE_H
