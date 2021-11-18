#include<iostream>
void myPrint(int, int);
using std::cout, std::cin, std::endl;


int main()
{
    int h, min;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> min;
    myPrint(h, min);
    return 0;
}


void myPrint(int h, int min)
{
    cout << "Time: " << h << ":" << min << endl;
    return;
}