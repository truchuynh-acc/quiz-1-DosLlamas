# quiz1_class_and_objects

## Instructions:
Please fill in the blank
```cplus
/*
* Name:
*/

// Question: Create a C++ class representing a car with attributes like model, year, and color. Include a method to display car details.
// Answer: --------------------------------------- here

#include <iostream>
#include <string>

class Car {
public:
    std::string model;
    int year;


    void displayDetails() {
        std::cout << "Model: " << model << ", Year: " << year << ", Color: " << color << std::endl;
    }
};

int main() {
    Car myCar;


    myCar.displayDetails();

    return 0;
}

```
