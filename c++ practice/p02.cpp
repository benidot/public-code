// hello name
#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter your full name: ";
    // cin >> name;     // this works okay but only reads the first arg

    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    return 0;
}