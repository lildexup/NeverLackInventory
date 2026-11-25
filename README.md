# NeverLack Inventory Manager

## Project Overview
NeverLack Inventory Manager is a C++ console application designed to help manage warehouse inventory. The program allows users to add products, view current inventory, search for products, and update stock quantities.

This project was developed for COS119 at Full Sail University to practice object-oriented programming, C++ classes, functions, collections, and input validation.

## Features
- Add new warehouse products
- View all inventory items
- Search for products by ID
- Update product stock quantities
- Prevent duplicate product IDs
- Reject negative stock quantities
- Handle invalid menu selections
- Display an interactive console menu

## C++ Classes

### Item
Stores individual product information:
- Product ID
- Product name
- Quantity
- Price

### Inventory
Manages warehouse products using a vector of Item objects.

Responsibilities:
- Add products
- Display inventory
- Search for products
- Update stock quantities

### Application
Controls the user interface and program execution.

Responsibilities:
- Display the main menu
- Process user selections
- Accept product information
- Connect the menu to inventory operations
- Handle invalid input

## Technologies Used
- C++
- Microsoft Visual Studio
- Git
- GitHub
- Object-Oriented Programming
- Standard Template Library (STL)

## How to Run
1. Clone the NeverLackInventory repository.
2. Open the Visual Studio solution in the dev/NeverLackInventoryApp folder.
3. Select the Debug and x64 configuration.
4. Build the solution using Ctrl + Shift + B.
5. Run the program using Ctrl + F5.
6. Select an option from the console menu.

## Application Menu
1. Add Product
2. View Inventory
3. Search Product
4. Update Stock
5. Exit

## Testing
The following functionality has been tested:

- Adding a warehouse product
- Displaying product details
- Searching for an existing product
- Updating stock quantities
- Rejecting duplicate product IDs
- Rejecting negative stock quantities
- Handling invalid menu options
- Exiting successfully without runtime errors

## Version Control
Development is tracked using Git and GitHub.

- main: Stable project branch
- dev: Active development branch

GitHub Issues and a Project board are used to organize development tasks and document completed features.

## Future Improvements
- Save inventory data to files
- Load inventory data when the application starts
- Improve user input handling
- Expand warehouse inventory features

## Developer
Dexter Clark  
Full Sail University  
Computer Science
