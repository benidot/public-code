// little pyramid
#include <iostream>
using namespace std;

int main() {

    int lines;

    cout << "line amount: ";
    cin >> lines;

    for(int j = 0; j < lines; j++) {
        for (int i = 0; i <= j; i++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
