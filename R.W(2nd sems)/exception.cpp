#include <iostream>
#include <string>

int getAgeFromUser() {
    std::string ageStr;
    int age;

    while (true) {
        std::cout << "Enter your age: ";
        std::getline(std::cin, ageStr);

        try {
            age = std::stoi(ageStr);
            break;  // Input is a valid integer, exit the loop
        } catch (const std::exception& e) {
            std::cout << "Invalid input! Please enter a valid integer." << std::endl;
        }
    }

    return age;
}

int main() {
    int age = getAgeFromUser();
    std::cout << "Your age is: " << age << std::endl;

    return 0;
}
