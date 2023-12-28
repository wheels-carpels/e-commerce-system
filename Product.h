#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
private:
    int productId;
    std::string name;
    double price;

public:
    Product(int productId, const std::string& name, double price);

    void displayInfo() const;
    double getPrice() const;
};

#endif // PRODUCT_H
