using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tamagotchi
{
    class Program
    {
        static void Main(string[] args)
        {

            Marco GameBorders = new Marco(19,23);
            Mascota Pet = new Mascota("Cachivache");
            short CuentaVueltas = 0;
            while(true)
            {
                // User input

                // Actualizacion de datos
                if( CuentaVueltas == 20 )
                {
                    CuentaVueltas = 0;

                }

                // Imprimo en pantalla
                GameBorders.PrintBorders();
                Pet.PrintData();
                Pet.PrintPet();
                System.Threading.Thread.Sleep(100);
            }

        }
    }
}
