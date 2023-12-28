#include "Product.h"

Product::Product(int productId, const std::string& name, double price)
    : productId(productId), name(name), price(price) {}

void Product::displayInfo() const {
    std::cout << "Product ID: " << productId << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Price: " << price << "\n";
}

double Product::getPrice() const {
    return price;
}
