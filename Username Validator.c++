#include <iostream>
using namespace std;

int main() {
    string user;
    cin >> user;

    if(user.length() >= 5)
        cout << "Valid";
    else
        cout << "Too short";
}
