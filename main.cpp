#include <bits/stdc++.h>

using namespace std;

int main()
{

       int porcentagem;
       double salario, newSalario, aumento;

       cout << "Digite o salario da pessoa: ";
       cin >> salario;

       if (salario <= 1000.00) {
           porcentagem = 20;
       }
       else if (salario <= 3000.00) {
           porcentagem = 15;
       }
       else if (salario <= 8000.00) {
           porcentagem = 10;
       }
       else { porcentagem = 5;
       }

       aumento = (double) salario * porcentagem / 100;
       newSalario = salario + aumento;

       cout << fixed << setprecision(2);
       cout << "Novo salario = R$ " << newSalario << endl;
       cout << "Aumento = R$ " << aumento << endl;
       cout << "Porcentagem = " << porcentagem << " %" << endl;



    return 0;
}
