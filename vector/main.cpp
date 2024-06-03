#include <iostream>

using namespace std;

void definindoValores(double* v1, double* v2) {
    cout << "Informe o valor de x do v1: ";
    cin >> v1[0];
    cout << "Informe o valor de y do v1: ";
    cin >> v1[1];
    system("clear");
    cout << "Informe o valor de x do v2: ";
    cin >> v2[0];
    cout << "Informe o valor de y do v2: ";
    cin >> v2[1];
    system("clear");
}

bool verificandoDet(double* v1, double* v2) {
    return ((v1[0]*v2[1])-(v2[0]*v1[1])) != 0;
}

void definindoValoresVetor3(double* v3, double* v1, double* v2) {
    cout << "Informe o valor de x do v3: ";
    cin >> v3[0];
    cout << "Informe o valor de y do v3: ";
    cin >> v3[1];
    system("clear");
    cout << "( " << v3[0] << " , " << v3[1]
    << " ) = ( a * " << v1[0] << " + b * "
    << v2[0] << " , a * " << v1[1] << " + b * "
    << v2[1] << " )\n";
    system("pause");
    system("clear");
    cout << "a * " << v1[0] << " + b * " << v2[0] << " = " << v3[0] << endl;
    cout << "a * " << v1[1] << " + b * " << v2[1] << " = " << v3[1] << endl;
    system("pause");
    system("clear");
}

double retornandoDelta(double* v1, double* v2) {
    return  (v1[0]*v2[1])-(v2[0]*v1[1]);
}

int main()
{
    double v1[2], v2[2], v3[2];

    definindoValores(v1, v2);

    if(verificandoDet(v1, v2)) {
        cout << "v1 e v2 formam uma base!\n";
        system("pause");
        system("clear");
        definindoValoresVetor3(v3, v1, v2);
        cout << "Valor de a = " << (retornandoDelta(v3,v2)/retornandoDelta(v1,v2)) << endl;
        cout << "Valor de b = " << (retornandoDelta(v1,v3)/retornandoDelta(v1,v2)) << endl;
        system("pause");
        system("clear");
        cout << "v3 = ( " << v3[0] << " , " << v3[1] << " ) = ( " << (retornandoDelta(v3,v2)/retornandoDelta(v1,v2)) << " * " << v1[0] << " + " <<
        (retornandoDelta(v1,v3)/retornandoDelta(v1,v2)) << " * " << v2[0] << " , " <<
        (retornandoDelta(v3,v2)/retornandoDelta(v1,v2)) << " * " << v1[1] << " + " <<
        (retornandoDelta(v1,v3)/retornandoDelta(v1,v2)) << " * " << v2[1] << " )";
    } else {
        cout << "v1 e v2 não formam uma base!";
        system("pause");
    }


    return 0;
}
