#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int n;
    cout << "ingrese un numero positivo: ";
    cin >> n;

    if (n > 0)
    {
        while (i < n)
        {
            cout << i << endl;
            i = i + 2;
        } 
        
    }else {
            cout << "Error, su numero debe ser positivo. ";
        }

    return 0;
}