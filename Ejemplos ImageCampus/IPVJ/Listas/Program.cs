using System;
using System.Collections.Generic; // Contiene listas

namespace Listas
{
    class Program
    {
        static void Main(string[] args)
        {

            List<int> Numeros = new List<int>();

            Numeros.Add(5);
            Numeros.Add(10);
            Numeros.Add(22);

            Console.WriteLine("----------------------------");

            Console.WriteLine(Numeros.Count);

            Console.WriteLine("----------------------------");

            Console.WriteLine(Numeros[0]);
            Console.WriteLine(Numeros[1]);
            Console.WriteLine(Numeros[2]);

            Console.WriteLine("----------------------------");

            Numeros.Insert(2, 43);
            for (int i = 0; i < Numeros.Count; i++ )
            {
                Console.WriteLine(Numeros[i]);
            }

            Console.WriteLine("----------------------------");

        }
    }
}
