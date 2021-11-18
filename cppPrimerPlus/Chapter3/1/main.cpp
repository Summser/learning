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
    cout << "请输入您的身高(英寸): ____________\b\b\b\b\b\b\b\b";
    float inchesHeight;
    int feetHeight;
    cin >> inchesHeight;
    feetHeight = int(inchesHeight) / 12;
    float remainderInches = int(inchesHeight) % 12 + inchesHeight - int(inchesHeight);
    cout << "您的身高为：" << feetHeight << "英尺 ";
    cout << std::fixed;             //固定小数点位
    cout << std::setprecision(2);   //输出保留小数点后两位
    cout << remainderInches << "英寸。" << endl;
    std::system("pause");
}