#include <iostream>
using namespace std;

int main() {
    int a[5] = {5,3,1,4,2};

    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);

    for(int i=0;i<5;i++)
        cout << a[i] << " ";
}
