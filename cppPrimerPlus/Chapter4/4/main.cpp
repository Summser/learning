#include<iostream>
#include<string>


int main()
{
    using namespace std;
    string firstName, lastName;
    cout << "What is your first name?" << endl;
    getline(cin, firstName);
    cout << "What is your last name?" << endl;
    getline(cin, lastName);
    string information;
    information = lastName + ", " + firstName;
    cout << "Here's the information in a single string: " << information << endl;
    return 0;
}