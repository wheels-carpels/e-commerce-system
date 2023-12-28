#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

class Customer {
private:
    int customerId;
    std::string name;
    std::string email;

public:
    Customer(int customerId, const std::string& name, const std::string& email);

    void displayInfo() const;
};

#endif // CUSTOMER_H
