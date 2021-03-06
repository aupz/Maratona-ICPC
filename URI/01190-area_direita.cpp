// ============================================================================
//
//       Filename:  01190-area_direita.cpp
//
//    Description:  URI 1190 - Área Direita
//
//        Version:  1.0
//        Created:  09/28/2012 01:10:27 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char op;
    cin >> op;
    double soma = 0;
    double v;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
        {
            cin >> v;
            if (i < j && i + j > 11)
                soma += v;
        }
    if (op == 'M')
        soma /= 30;
    cout << fixed << setprecision(1) << soma << endl;
    return 0;
}
