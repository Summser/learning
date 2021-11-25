#include<iostream>
void fun();


int main()
{
    fun();
    return 0;
}


void fun()
{
    using namespace std;
    cout << "What is your first name?";
    char firstName[30], lastName[30], grade;
    int age;
    cin.getline(firstName, 30);
    cout << "What is your last name?";
    cin.getline(lastName, 30);
    cout << "What letter grade do you deserve?";
    cin.get(grade).get();
    cout << "What is your age?";
    (cin >> age).get();
    cout << "Name: " << firstName << " " << lastName << endl
         << "Grade: " << grade << endl
         << "Age: " << age << endl;
    return;
}