#include <iostream>

using namespace std;

int main()
{
    int limitante, cont=1, impares = -1;
    cin  >> limitante;
    while (cont <= limitante){
        impares = impares + 2;
        cout << impares <<endl;
        cont = cont + 2;
    }
    return 0;
}
