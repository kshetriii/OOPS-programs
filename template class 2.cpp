#include <iostream>
using namespace std;

template <class T>
class Max {
private:
    T a, b;
public:
    Max(T x, T y) {
        a = x;
        b = y;
    }
    
    void display() {
        if (a > b)
            cout << "The largest value is: " << a << endl;
        else
            cout << "The largest value is: " << b << endl;
    }
};

int main() {
    Max<int> m1(2, 4);
    Max<char> m2('z', 'a');
    m1.display();
    m2.display();
    return 0;
}
