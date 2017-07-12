#include <iostream>

using namespace std;
/*
template <typename T>
class Value
{
public:
    T x;
    Value();
    Value(T a) {
        x = a;
    }
    T operator + (T a) {
        x += a;
        return x;
    }
};

int main (void) {
    cout << "Введите два числа" << endl;
    Value a, b;
    cin >> a.x >> b.x;
    a = a + b;
    cout << a << endl;
    return 0;
}
*/

int main (void) {
    int a, b;
    cin >> a >> b;
    a += b;
    cout << a << endl;
    return 0;
}

