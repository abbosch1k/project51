#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for(int i=0;i<12;i++)
        cout << chars[rand() % chars.size()];
}
