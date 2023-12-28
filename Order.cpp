#include "Order.h"

Order::Order(int orderId, const Customer& customer)
    : orderId(orderId), customer(customer) {}

void Order::addProduct(const Product& product) {
    products.push_back(product);
}

double Order::calculateTotal() const {
    double total = 0;
    for (const auto& product : products) {
        total += product.getPrice();
    }
    return total;
}

void Order::displayInfo() const {
    std::cout << "Order ID: " << orderId << "\n";
    customer.displayInfo();
    std::cout << "Products in the order:\n";
    for (const auto& product : products) {
        product.displayInfo();
    }
    std::cout << "Total: " << calculateTotal() << "\n";
}
