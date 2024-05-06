#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    int mult;
    cout << "ingrese un numero multiplicador: ";
    cin >> n;

    while (i < 11)
    {
        mult = i*n;
        cout << n << " x " << i << " = " << mult << endl;
        i = i +1;
    }
    return 0;
}