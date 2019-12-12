#include <iostream>

using namespace std;

int main()
{
    int articles,factor,cite;
    int temp;

    cin >> articles >> factor;
    temp = factor - 1;

    cite = (articles * temp) + 1;

    cout << cite << endl;

    return 0;
}
