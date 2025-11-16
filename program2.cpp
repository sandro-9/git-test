
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findMax(int a, int b, int c) {
    if (a>=b && a>=c){
        return a;
    }
    else if (b>=a && b>=c){
        return b;
    }
    else {
        return c;
    }
}

int main()
{
    int max, a, b, c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    max = findMax(a, b, c);
    cout << "Maximal number is: " << max << endl;
    return 0;
}
