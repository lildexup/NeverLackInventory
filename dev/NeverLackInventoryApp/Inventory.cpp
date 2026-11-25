
#include "Inventory.h"
#include <iostream>

bool Inventory::addItem(const Item& newItem)
{
    for (const Item& item : items)
    {
        if (item.getId() == newItem.getId())
        {
            return false;
        }
    }

    items.push_back(newItem);
    return true;
}

void Inventory::displayItems() const
{
    if (items.empty())
    {
        std::cout << "Inventory is empty.\n";
        return;
    }

    for (const Item& item : items)
    {
        item.display();
        std::cout << "--------------------\n";
    }
}

bool Inventory::searchItem(int itemId) const
{
    for (const Item& item : items)
    {
        if (item.getId() == itemId)
        {
            item.display();
            return true;
        }
    }

    return false;
}

bool Inventory::updateQuantity(int itemId, int newQuantity)
{
    if (newQuantity < 0)
    {
        return false;
    }

    for (Item& item : items)
    {
        if (item.getId() == itemId)
        {
            item.setQuantity(newQuantity);
            return true;
        }
    }

    return false;
}
