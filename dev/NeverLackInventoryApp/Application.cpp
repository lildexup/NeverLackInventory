
#include "Application.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

namespace
{
    bool readInt(const std::string& prompt, int& value)
    {
        std::string line;

        while (true)
        {
            std::cout << prompt;

            if (!std::getline(std::cin, line))
                return false;

            std::istringstream input(line);
            char extra;

            if ((input >> value) && !(input >> extra))
                return true;

            std::cout << "Please enter a valid whole number.\n";
        }
    }

    bool readDouble(const std::string& prompt, double& value)
    {
        std::string line;

        while (true)
        {
            std::cout << prompt;

            if (!std::getline(std::cin, line))
                return false;

            std::istringstream input(line);
            char extra;

            if ((input >> value) && !(input >> extra)
                && std::isfinite(value))
                return true;

            std::cout << "Please enter a valid price.\n";
        }
    }
}

void Application::showMenu() const
{
    std::cout << "\n================================\n";
    std::cout << "   NEVERLACK INVENTORY MANAGER\n";
    std::cout << "================================\n";
    std::cout << "1. Add Product\n";
    std::cout << "2. View Inventory\n";
    std::cout << "3. Search Product\n";
    std::cout << "4. Update Stock\n";
    std::cout << "5. Exit\n";
}

void Application::addProduct()
{
    int id;
    int quantity;
    double price;
    std::string name;

    if (!readInt("Enter Product ID: ", id))
        return;

    if (id <= 0)
    {
        std::cout << "Product ID must be positive.\n";
        return;
    }

    std::cout << "Enter Product Name: ";
    if (!std::getline(std::cin, name))
        return;

    if (name.find_first_not_of(" \t") == std::string::npos)
    {
        std::cout << "Product name cannot be empty.\n";
        return;
    }

    if (!readInt("Enter Quantity: ", quantity))
        return;

    if (!readDouble("Enter Price: $", price))
        return;

    if (quantity < 0 || price < 0)
    {
        std::cout << "Quantity and price cannot be negative.\n";
        return;
    }

    Item newItem(id, name, quantity, price);

    if (inventory.addItem(newItem))
        std::cout << "Product added successfully!\n";
    else
        std::cout << "That Product ID already exists.\n";
}

void Application::viewProducts() const
{
    std::cout << "\n--- CURRENT INVENTORY ---\n";
    inventory.displayItems();
}

void Application::searchProduct() const
{
    int id;

    if (!readInt("Enter Product ID to search: ", id))
        return;

    if (!inventory.searchItem(id))
        std::cout << "Product not found.\n";
}

void Application::updateStock()
{
    int id;
    int quantity;

    if (!readInt("Enter Product ID: ", id))
        return;

    if (!readInt("Enter New Quantity: ", quantity))
        return;

    if (inventory.updateQuantity(id, quantity))
        std::cout << "Stock updated successfully!\n";
    else
        std::cout << "Product not found or invalid quantity.\n";
}

void Application::run()
{
    int choice;

    while (true)
    {
        showMenu();

        if (!readInt("Choose an option: ", choice))
            return;

        switch (choice)
        {
        case 1:
            addProduct();
            break;

        case 2:
            viewProducts();
            break;

        case 3:
            searchProduct();
            break;

        case 4:
            updateStock();
            break;

        case 5:
            std::cout << "Thank you for using NeverLack!\n";
            return;

        default:
            std::cout << "Invalid option. Try again.\n";
            break;
        }
    }
}
