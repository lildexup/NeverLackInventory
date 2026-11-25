
#pragma once
#include "Inventory.h"

class Application
{
private:
    Inventory inventory;

    void showMenu() const;
    void addProduct();
    void viewProducts() const;
    void searchProduct() const;
    void updateStock();

public:
    void run();
};
