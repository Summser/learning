#include <iostream>
#include<iomanip>
using std::cout, std::cin, std::endl;
void fun();


int main()
{
    fun();
    return 0;
}


void fun()
{
    cout << "�������������(Ӣ��): ____________\b\b\b\b\b\b\b\b";
    float inchesHeight;
    int feetHeight;
    cin >> inchesHeight;
    feetHeight = int(inchesHeight) / 12;
    float remainderInches = int(inchesHeight) % 12 + inchesHeight - int(inchesHeight);
    cout << "�������Ϊ��" << feetHeight << "Ӣ�� ";
    cout << std::fixed;             //�̶�С����λ
    cout << std::setprecision(2);   //�������С�������λ
    cout << remainderInches << "Ӣ�硣" << endl;
    std::system("pause");
}