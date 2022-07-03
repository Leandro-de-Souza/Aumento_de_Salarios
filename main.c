#include <stdio.h>


int main()
{

       int porcentagem;
       double salario, newSalario, aumento;

       printf("Digite o salario da pessoa: ");
       scanf("%lf", &salario);

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

       printf("Novo salario = R$ %.2lf\n", newSalario);
       printf("Aumento = R$ %.2lf\n", aumento);
       printf("Porcentagem = %d %%", porcentagem);



    return 0;
}
