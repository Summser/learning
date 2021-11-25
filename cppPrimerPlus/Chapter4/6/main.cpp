#include<iostream>
#include<string>


int main()
{
    using namespace std;
    struct CandayBar
    {
        string brand;
        float weightPound;
        int calorie;
    };
    CandayBar candays[3] =
        {
            {"brand1", 4.2, 400},
            {"brand2", 4.4, 420},
            {"brand3", 5.2, 300},
        };
    for (int i = 0; i < 3; i++)
    {
        cout << i+1 << ": " << endl
             << "Brand: " << candays[i].brand << endl
             << "Weight: " << candays[i].weightPound << " Pounds" << endl
             << "Calorie: " << candays[i].calorie << endl;
    }
    return 0;
}