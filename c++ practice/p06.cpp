// reverse pyramid
#include <iostream>
using namespace std;

int main() {

    // amount minus i should be the key maybe
    // LOUD INCORRECT BUZZER sorta

    int amount;
    cout << "amount: ";
    cin >> amount;

    cout << "pyramid with a size of " << amount << ": " << endl; // i assume there's a cpp way of doing print(f"")?
    for (int i = 0; i < amount; i++) {
        int zeroes = 0;
        for (int j = 0; j <= i; j++) {
            zeroes ++;
            cout << " ";
        }
        for (int k = 0; k <= amount - zeroes; k++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
