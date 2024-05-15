#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    float a = 0, b = 0, c, res;
    
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    
    res = (-b + sqrt(pow (b, 2) - 4*a*c))/2/a;
    
    cout << "Tu resultado es: " << res;
    return 0;
}