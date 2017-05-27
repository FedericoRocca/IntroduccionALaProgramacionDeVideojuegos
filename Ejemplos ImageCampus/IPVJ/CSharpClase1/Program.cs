using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpClase1
{
    class Program
    {
        static void Main(string[] args)
        {
            // Escribir en consola
            Console.WriteLine("Hola mundo!");

            // Declaraciones de arrays
            int[] Array = { 1, 2, 3, 4, 5 };
            Console.WriteLine( Array.Length );

            //Limpiar pantalla
            try
            {
                Console.Clear();
            }
            catch (System.IO.IOException Exception)
            {
                Console.WriteLine("No se puede limpiar la pantalla, excepcion: " + Exception.GetType().Name);
            }
            // Input de valroes distintos a texto
            // int
            int Input = Convert.ToInt32(Console.ReadLine());
            // float
            float InputFloat = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine(Input);
            Console.WriteLine(InputFloat);
            
        }
    }
}