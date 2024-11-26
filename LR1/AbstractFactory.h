#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#ifdef DLL_EXPORT
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

// Абстрактні продукти
class DLL_API Chair {
public:
    virtual void Sit() = 0;
    virtual ~Chair() {}
};

class DLL_API Sofa {
public:
    virtual void LieDown() = 0;
    virtual ~Sofa() {}
};

// Абстрактна фабрика
class DLL_API FurnitureFactory {
public:
    virtual Chair* CreateChair() = 0;
    virtual Sofa* CreateSofa() = 0;
    virtual ~FurnitureFactory() {}
};

#endif // ABSTRACT_FACTORY_H
