// basic input stuff
#include <iostream>

using namespace std;

int main()
{
    int age;
    float height;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;

    cout << "My name is " << name << ", and I'm " 
         << age << " years old, and " 
         << height << " meters tall." << endl;

    return 0;
}