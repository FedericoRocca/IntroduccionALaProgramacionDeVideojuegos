using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjPT3
{
    class Program
    {
        static void Main(string[] args)
        {
            Point ArribaIzquierda = new Point(1, 1);
            Point AbajoDerecha = new Point(20, 4);
            Rectangle Rectangulo = new Rectangle(ArribaIzquierda, AbajoDerecha);
            Rectangulo.Draw();
            System.Console.WriteLine();
            System.Console.WriteLine();
            System.Console.WriteLine();
        }
    }
}
