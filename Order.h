#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include "Product.h"
#include <vector>

class Order {
private:
    int orderId;
    Customer customer;
    std::vector<Product> products;

public:
    Order(int orderId, const Customer& customer);

    void addProduct(const Product& product);
    double calculateTotal() const;
    void displayInfo() const;
};

#endif // ORDER_H
