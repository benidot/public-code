// rudimentary version of grocerydoer
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <vector>
using namespace std;

void adder();
void quitter();

vector<string> groceries;

int main() {

    unordered_map<string, function<void()>> commandsList = {
        {"add", adder},
        {"quit", quitter}
    };

    while (true) {

        string command;

        int grocerySize = groceries.size();

        for (int i = 0; i < 25; i++) {
            cout << endl;
        }

        for (int i = 0; i < grocerySize; i++) {
            cout << groceries[i] << " ";
        }
        cout << endl;

        cout << "command : ";
        cin >> command;

        if (commandsList.count(command)) {
            commandsList[command]();
        } else {
            cout << "unknown command" << endl;
        }

    }

    return 0;
}

void adder() {
    while (true) {
        string item;

        cout << "in adding mode: ";
        cin >> item;

        if (item == "done") {
            break;
        }

        groceries.push_back(item);
    }
}

void quitter() {
    exit(0);
}
