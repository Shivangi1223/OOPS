#include<iostream>
using namespace std;

class Abstraction {
private:
    int a, b;

public:
    void setValues(int x, int y) {
        a = x;
        b = y;
    }

    int getSum() {
        return a + b;
    }
};

int main() {
    Abstraction obj;
    obj.setValues(5, 10);
    cout << "Sum: " << obj.getSum() << endl;
    return 0;
}
