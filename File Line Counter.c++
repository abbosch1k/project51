#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("file.txt");
    string line;
    int count = 0;

    while(getline(f, line))
        count++;

    cout << count;
}
