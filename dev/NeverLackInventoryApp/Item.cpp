
#include "Item.h"
#include <iostream>
#include <iomanip>

Item::Item(int itemId, const std::string& itemName,
    int itemQuantity, double itemPrice)
    : id(itemId), name(itemName),
    quantity(itemQuantity), price(itemPrice)
{
}

int Item::getId() const
{
    return id;
}

std::string Item::getName() const
{
    return name;
}

int Item::getQuantity() const
{
    return quantity;
}

double Item::getPrice() const
{
    return price;
}

void Item::setQuantity(int newQuantity)
{
    if (newQuantity >= 0)
    {
        quantity = newQuantity;
    }
}

void Item::display() const
{
    std::cout << "Product ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Quantity: " << quantity << '\n';
    std::cout << "Price: $" << std::fixed
        << std::setprecision(2) << price << '\n';
}
