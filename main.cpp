#include <iostream>
using namespace std;

int main() {
    int n=0, a=1, b=0, c=0;
    cin>> n;
    if (n>0) {
        cout << a << endl;
        while (c<n) {
            c=a+b;
            b=a;
            a=c;
            if (c<=n) {
                cout << c << endl;
            }
        }

    }

    return 0;
}
