#include<iostream>
#include<iomanip>
using namespace std;
void fun();
double calBmi(double weightKg, double heightM);
const int A1 = 12;          //Ӣ�ߵ�Ӣ��˵ĳ���
const double A2 = 0.0254;   //Ӣ�絽�׳˵ĳ���
const double A3 = 2.2;      //ǧ�˵����˵ĳ���

int main()
{
    fun();
    return 0;
}


void fun()
{
    int feetHeight;
    double inchesHeight, poundWeight;
    cout << "�������Ϊ����Ӣ�߶���Ӣ�磿" << endl;
    cout << "______Ӣ��\b\b\b\b\b\b\b";
    cin >> feetHeight;
    cout << "______Ӣ��\b\b\b\b\b\b\b";
    cin >> inchesHeight;
    cout << "��������Ϊ���ٰ���" << endl;
    cout << "______\b\b\b\b\b";
    cin >> poundWeight;

    double heightM = (feetHeight * A1 + inchesHeight) * A2;
    double KgWeight = poundWeight / A3;

    double bmi = calBmi(KgWeight, heightM);
    cout << fixed << setprecision(2) << "����BMIΪ��" << bmi << endl;
    system("pause");
}


double calBmi(double weightKg, double heightM)
{
    double bmi = weightKg / (heightM * heightM);
    return bmi;
}