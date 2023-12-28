#include "Customer.h"
#include "Product.h"
#include "Order.h"
#include <iostream>

int main() {
    // Create customers
    Customer customer1(1, "Alice", "alice@example.com");
    Customer customer2(2, "Bob", "bob@example.com");

    // Create products
    Product laptop(1, "Laptop", 999.99);
    Product smartphone(2, "Smartphone", 499.99);

    // Create orders
    Order order1(101, customer1);
    order1.addProduct(laptop);
    order1.addProduct(smartphone);

    Order order2(102, customer2);
    order2.addProduct(smartphone);

    // Display order information
    std::cout << "Order 1 Information:\n";
    order1.displayInfo();

    std::cout << "\nOrder 2 Information:\n";
    order2.displayInfo();

    return 0;
}
