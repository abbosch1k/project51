#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    for(int i=1;i<=5;i++) {
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}
