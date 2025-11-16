
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int max, a, b, c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }
    cout << "Maximal number is: " << max << endl;
    return 0;
}
