using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sobrecarga
{
    class Program
    {

        class Calculadora
        {

            public void MostrarSuma(int Num1, int Num2)
            {
                Console.WriteLine(Num1 + Num2);
            }

            public void MostrarSuma(float Num1, float Num2)
            {
                Console.WriteLine(Num1 + Num2);
            }

            public Calculadora()
            {
                //blah blah constructor...
            }

            public Calculadora(int Number)
            {
                //blah blah otro constructor
            }

        }

        static void Main(string[] args)
        {
            Calculadora Calc = new Calculadora();
            Calc.MostrarSuma(10.7f, 10);

        }
    }
}
