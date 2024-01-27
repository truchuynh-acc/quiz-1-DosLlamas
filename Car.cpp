/*
 * Name: Nathan Foss
 */

// Question: Create a C++ class representing a car with attributes like model, year, and color. Include a method to display car details.
// Answer: --------------------------------------- here

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string model;
    int year;
    string color;

public:
    Car() : year(0) {} // Default constructor

    Car(const string &model, int year, const string &color) : model(model), year(year), color(color) {}

    string getModel() const
    {
        return model;
    }

    int getYear() const
    {
        return year;
    }

    string getColor() const
    {
        return color;
    }

    void setModel(const string &newModel)
    {
        model = newModel;
    }

    void setYear(int newYear)
    {
        year = newYear;
    }

    void setColor(const string &newColor)
    {
        color = newColor;
    }

    // Method to display car details
    void displayDetails() const
    {
        cout << "Model: " << getModel() << endl;
        cout << "Year: " << getYear() << endl;
        cout << "Color: " << getColor() << endl;
    }
};

int main()
{
    Car bigBoyCar("Tesla", 2024, "Black");

    cout << "Initial Details:" << endl;
    bigBoyCar.displayDetails();

    bigBoyCar.setModel("Lamborghini");
    bigBoyCar.setYear(2024);
    bigBoyCar.setColor("Gold");
    cout << endl;

    cout << "New Details:" << endl;
    bigBoyCar.displayDetails();

    return 0;
}
