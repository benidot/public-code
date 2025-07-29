// some math and memory stuff
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << fixed << setprecision(2) << a+b << endl;
    cout << a << " - " << b << " = " << fixed << setprecision(2) << a-b << endl;
    cout << a << " * " << b << " = " << fixed << setprecision(2) << a*b << endl;
    cout << a << " / " << b << " = " << fixed << setprecision(2) << a/b << endl;

    return 0;
}