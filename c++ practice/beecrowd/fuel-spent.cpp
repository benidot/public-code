#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int spentTime = 0;
    int avgSpeed = 0;

    cin >> spentTime;
    cin >> avgSpeed;

    float thingy = avgSpeed * spentTime;
    float neededLiters = thingy / 12;

    cout << fixed << setprecision(3) << neededLiters << endl;

    return 0;
}
