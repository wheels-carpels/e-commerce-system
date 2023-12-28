#include "Customer.h"

Customer::Customer(int customerId, const std::string& name, const std::string& email)
    : customerId(customerId), name(name), email(email) {}

void Customer::displayInfo() const {
    std::cout << "Customer ID: " << customerId << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Email: " << email << "\n";
}
