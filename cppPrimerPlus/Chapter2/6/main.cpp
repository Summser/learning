#include <iostream>
float lightYearsToAstronomicalUnits(float);
using std::cout, std::cin, std::endl;


int main()
{
    cout << "Enter the number of light years: ";
    float lightYearsV, astronomicalUnitsV;
    cin >> lightYearsV;
    astronomicalUnitsV = lightYearsToAstronomicalUnits(lightYearsV);
    cout << lightYearsV << " light years = " << astronomicalUnitsV << " astronomical units." << endl;
    return 0;
}


float lightYearsToAstronomicalUnits(float lightYearsV)
{
    float astronomicalUnitsV = lightYearsV * 63240;
    return astronomicalUnitsV;
}