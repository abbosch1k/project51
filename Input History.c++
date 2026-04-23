#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> history;
    string input;

    for(int i=0;i<3;i++) {
        cin >> input;
        history.push_back(input);
    }

    for(string s : history)
        cout << s << endl;
}
