#include<iostream>
#include<cstring>


int main()
{
    using namespace std;
    char firstName[20], lastName[20];
    cout << "What is your first name?" << endl;
    cin.getline(firstName, 20);
    cout << "What is your last name?" << endl;
    cin.getline(lastName, 20);
    char information[40]{};
    strcpy(information, lastName);
    strcat(information,", ");
    strcat(information, firstName);
    cout << "Here's the information in a single string: " << information << endl;
    return 0;
}