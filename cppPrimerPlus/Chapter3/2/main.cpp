#include<iostream>
#include<iomanip>
using namespace std;
void fun();
double calBmi(double weightKg, double heightM);
const int A1 = 12;          //英尺到英寸乘的常数
const double A2 = 0.0254;   //英寸到米乘的常数
const double A3 = 2.2;      //千克到磅乘的常数

int main()
{
    fun();
    return 0;
}


void fun()
{
    int feetHeight;
    double inchesHeight, poundWeight;
    cout << "您的身高为多少英尺多少英寸？" << endl;
    cout << "______英尺\b\b\b\b\b\b\b";
    cin >> feetHeight;
    cout << "______英寸\b\b\b\b\b\b\b";
    cin >> inchesHeight;
    cout << "您的体重为多少磅？" << endl;
    cout << "______\b\b\b\b\b";
    cin >> poundWeight;

    double heightM = (feetHeight * A1 + inchesHeight) * A2;
    double KgWeight = poundWeight / A3;

    double bmi = calBmi(KgWeight, heightM);
    cout << fixed << setprecision(2) << "您的BMI为：" << bmi << endl;
    system("pause");
}


double calBmi(double weightKg, double heightM)
{
    double bmi = weightKg / (heightM * heightM);
    return bmi;
}