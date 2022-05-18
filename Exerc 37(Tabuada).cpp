//37. Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.

#include <iostream>

using namespace std;

int main()
{
    int num, aux=1;

    cout << "Selecione o numero cuja a tabuada deseja aparecer: ";
    cin >> num;

    while(aux<=10){
        cout<<num<<" * "<<aux<<" = " << num*aux <<endl;
        aux++;
    }

    return 0;
}
