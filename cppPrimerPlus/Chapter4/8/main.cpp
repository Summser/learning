#include<iostream>
#include<string>


using namespace std;
struct Pizza
{
    string company;
    float diameter;
    float weightPound;
};

void myFunction();
int main()
{
    myFunction();
    return 0;
}


void myFunction()
{
    Pizza* pizza1 = new Pizza;
    cout << "Please enter the diameter of this pizza: ";
    (cin >> pizza1->diameter).get();
    cout << "Please enter the name of the company that produces this pizza: ";
    getline(cin, pizza1->company);
    cout << "Please enter the weight of this pizza(Pound): ";
    (cin >> pizza1->weightPound).get();
    cout << "Company: " << pizza1->company << endl;
    cout << "Diameter: " << pizza1->diameter << " Inches" << endl;
    cout << "Weight: " << pizza1->weightPound << " Pounds" << endl;
    delete pizza1;
    return;
}