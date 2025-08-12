#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    int positives = 0;
    float average = 0;

    for (int i = 0; i < 6; i++) {
        float number;
        cin >> number;

        if (number > 0) {
            positives++;
            average += number;
        }
    }

    cout << positives << " valores positivos" << endl;
    cout << fixed << setprecision(1) << average / positives << endl;

    return 0;
}
