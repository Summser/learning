#include<iostream>
#include<iomanip>
using namespace std;
void fun();
const int A1 = 24;      //天到小时
const int A2 = 60;      //小时到分钟
const int A3 = 60;      //分钟到秒

int main()
{
    fun();
    return 0;
}


void fun()
{
    cout << "Enter the number of seconds: __________\b\b\b\b\b\b\b\b\b\b";
    long seconds;
    int days1, hours1, minutes1, seconds1;
    cin >> seconds;
    days1 = seconds / (A3 * A2 * A1);
    hours1 = (seconds % (A3 * A2 * A1)) / (A3 * A2);
    minutes1 = (seconds % (A3 * A2)) / (A3);
    seconds1 = seconds % A3;
    cout << seconds << " seconds = " << days1 << " days, " << hours1
         << " hours, " << minutes1 << " minutes, " << seconds1 << " seconds." << endl;
    system("pause");
}