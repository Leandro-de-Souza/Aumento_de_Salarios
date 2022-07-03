using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_AUMENTO {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int porcentagem;
            double salario, newSalario, aumento;

            Console.Write("Digite o salario da pessoa: ");
            salario = double.Parse(Console.ReadLine(), CI);

            if (salario <= 1000.00) {
                porcentagem = 20;
            }
            else if (salario <= 3000.00) {
                porcentagem = 15;
            }
            else if (salario <= 8000.00) {
                porcentagem = 10;
            }
            else {
                porcentagem = 5;
            }

            aumento = (double)salario * porcentagem / 100;
            newSalario = salario + aumento;

            Console.WriteLine("Novo salario = R$ " + newSalario.ToString("F2", CI));
            Console.WriteLine("Aumento = R$ " + aumento.ToString("F2", CI));
            Console.WriteLine("Porcentagem = " + porcentagem + " %");

        }
    }
}
