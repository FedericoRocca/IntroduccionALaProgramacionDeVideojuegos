using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjerciciosCSharp1
{
    class Program
    {
        static void Main(string[] args)
        {

            bool Menu = true;
            char Opcion;

            while(Menu)
            {
                Console.Clear();

                Console.WriteLine("A - Piedra papel o tijeras");
                Console.WriteLine("0 - Salir");
                Console.Write("Opcion: ");
                try
                {
                    Opcion = Convert.ToChar(Console.ReadLine());
                }
                catch (System.FormatException)
                {
                    Opcion = '/';
                }
                Console.Clear();

                switch (Opcion)
                {
                    case 'a':
                    case 'A':
                        {
                            Console.WriteLine("Juego re pro");
                            Console.ReadKey();
                        }
                        break;

                    case '0':
                        {
                            Menu = false;
                            Console.WriteLine("Nos vemos!");
                            Console.ReadKey();
                        }
                        break;

                    default:
                        {
                            Console.WriteLine("Tecla presionada incorrecta");
                            Console.WriteLine("Presione cualquier tecla para continuar...");
                            Console.ReadKey();
                        }
                        break;
                }

            }

        }
    }
}
