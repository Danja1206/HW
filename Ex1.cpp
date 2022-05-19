#include <iostream>

using namespace std;

class Power 
{
public:
    Power() { a = 5.4; b = 3.4; }
    ~Power() {}
    void set(float _a, float _b) { a = _a; b = _b; }
    void calculate() { cout << pow(a, b) << endl; }
private:
    float a;
    float b;
};

int main()
{
    Power P;

    P.calculate();
    P.set(3.4, 1.1);
    P.calculate();
    return 0;
}

