#include <iostream>

using namespace std;

struct cerc
{
    struct centru
    {
        unsigned int x;
        unsigned int y;
    } centru;
    unsigned int raza;
};

int main()
{
    cout << "----- 2020-special-s2-2 -----\n" << endl;

    // oricare
    cerc c1 = { { 10, 10 }, 20 };

    cerc c2 = { 10, 10, 20 };

    cerc c3;
    c3.centru.x = 10;
    c3.centru.y = 20;
    c3.raza = 10;

    cout << "\n----- END -----" << endl;
}
