
#pragma once
#include "Item.h"
#include <vector>

class Inventory
{
private:
    std::vector<Item> items;

public:
    bool addItem(const Item& newItem);
    void displayItems() const;
    bool searchItem(int itemId) const;
    bool updateQuantity(int itemId, int newQuantity);
};
