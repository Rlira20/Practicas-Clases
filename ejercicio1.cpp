#include <iostream>
using namespace std;
int main()
{
   //ejercicio 1
   int i = 0, n = 0;
   cout << "Ingrese un numero mayor a 2: ";
   cin >> n;
   for(i = 2; i < n; i = i + 2){
       cout << i << endl;
   }
   return 0;
}