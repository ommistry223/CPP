#include <iostream>
using namespace std;

class Alpha {
protected:
    int x;
public:
    Alpha(int a) : x(a) {}
    void showX() { cout << "x = " << x << endl; }
};

class Beta {
protected:
    float y;
public:
    Beta(float b) : y(b) {}
    void showY() { cout << "y = " << y << endl; }
};

class Gamma : public Alpha, public Beta {
private:
    int m, n;
public:
    Gamma(int a, float b, int c, int d) : Alpha(a), Beta(b), m(c), n(d) {}
    void showAll() {
        showX(); // Alpha's method
        showY(); // Beta's method
        cout << "m = " << m << ", n = " << n << endl;
    }
};

int main() {
    Gamma g(10, 3.14, 5, 7);
    g.showAll();
    return 0;
}