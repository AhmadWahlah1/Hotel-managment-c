#include <iostream>
#include <string>
using namespace std;

int getFrmUsr() {
    string ageStr;
    int age;

    while (true) {
        cout << "Enter your age: ";
        getline(cin, ageStr);

        try {
            age = stoi(ageStr);
           // break;  // Input is a valid integer, exit the loop
        } catch (const exception& e) {
            cout << "Invalid input! Please enter a valid integer." <<endl;
        }
    }

    return age;
}

int main() {
    int age = getFrmUsr();
    cout << "Your age is: " << age << endl;

    return 0;
}
