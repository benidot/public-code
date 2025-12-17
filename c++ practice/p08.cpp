//something idk im bored
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;
vector<string> listy;
bool quitted = false;

void quit();
void add();
void rev();
void del();
void sortit();
void printy();

int main() {

    cout << "list time" << endl;
    char c;
    
    unordered_map<char, function<void()>> commandsList = {
        {'q', quit},
        {'a', add},
        {'r', rev},
        {'d', del},
        {'s', sortit},
        {'p', printy}
    };

    while(cin >> c) {

        c = tolower(static_cast<unsigned char>(c));   

        if(commandsList.count(c)) {
            commandsList[c]();
        } else {
            cout << "no" << endl;
        }

        if(quitted) {
            cout << "goodbye" << endl;
            return 0;
        }

    }
    
}

void quit() {
    quitted = true;
}

void add() {
    string item;
    cin.ignore();
    getline(cin, item);
    listy.push_back(item);
}

void sortit() {
    sort(listy.begin(), listy.end());
}

void rev() {
    sort(listy.begin(), listy.end(), greater<>());
}

void del() {
    if (!listy.empty()) listy.pop_back();
}

void printy() {
    for (const auto& i:listy) {
        cout << i << endl;
    }
}
