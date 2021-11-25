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
    }snack = 
    {
        "Mocha Munch",
        2.3,
        350
    };
    cout << "Candy brand: " << snack.brand << endl
         << "Weight: " << snack.weightPound << " Pound" << endl
         << "Calocir: " << snack.calorie << endl;
    return 0;
}