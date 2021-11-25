#include<iostream>
#include<array>


int main()
{
    using namespace std;
    array<double, 3> t;
    cout << "Enther your first time: " << endl;
    (cin >> t[0]).get();
    cout << "Enther your second time: " << endl;
    (cin >> t[1]).get();
    cout << "Enther your third time: " << endl;
    (cin >> t[2]).get();

    double aveT = (t[0] + t[1] + t[2]) / 3;
    cout << "Your average time is " << aveT << "s." << endl;
    return 0;
}