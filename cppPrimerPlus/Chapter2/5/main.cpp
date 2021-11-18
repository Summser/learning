#include <iostream>
float celsiusToFahrenheit(float);
using std::cin, std::cout, std::endl;


int main()
{
    cout << "Please enter a Celsius value: ";
    float celsiusV, FahrenheitV;
    cin >> celsiusV;
    FahrenheitV = celsiusToFahrenheit(celsiusV);
    cout << celsiusV << " degrees Celsius is " << FahrenheitV << " degrees Fahrenheit." << endl;
}


float celsiusToFahrenheit(float celsiusV)
{
    float fahrenheitV = 32 + (1.8 * celsiusV);
    return fahrenheitV;
}