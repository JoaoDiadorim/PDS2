#include <iostream>
#include <string>
using namespace std;

int main() {
    
string a;
a = "123456";

string b;
b = "123456";

bool igual = (a == b);

cout << igual << endl;
cout << a[0] << endl;
cout << b[5] << endl;

a[0] = '0';
cout << a << endl;
string c = a + b;
cout << c << endl;

return 0;
}