#ifndef MODERN_FURNITURE_H
#define MODERN_FURNITURE_H

#include "AbstractFactory.h"
#include <iostream>

// Конкретні продукти (Сучасні меблі)
class DLL_API ModernChair : public Chair {
public:
    void Sit() override {
        std::cout << "You are sitting on a modern chair.\n";
    }
};

class DLL_API ModernSofa : public Sofa {
public:
    void LieDown() override {
        std::cout << "You are lying on a modern sofa.\n";
    }
};

// Конкретна фабрика
class DLL_API ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair* CreateChair() override {
        return new ModernChair();
    }

    Sofa* CreateSofa() override {
        return new ModernSofa();
    }
};

#endif // MODERN_FURNITURE_H
