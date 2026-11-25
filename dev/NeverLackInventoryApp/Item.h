
#pragma once
#include <string>

class Item
{
private:
    int id;
    std::string name;
    int quantity;
    double price;

public:
    Item(int itemId, const std::string& itemName,
        int itemQuantity, double itemPrice);

    int getId() const;
    std::string getName() const;
    int getQuantity() const;
    double getPrice() const;

    void setQuantity(int newQuantity);
    void display() const;
};
