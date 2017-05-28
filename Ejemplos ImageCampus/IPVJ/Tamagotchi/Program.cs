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
            Console.CursorVisible = false;

            Marco GameBorders = new Marco(19,23);
            Mascota Pet = new Mascota("Cachivache");
            short CuentaVueltas = 0;

            bool Game = true;

            while(Game)
            {
                // User input
                ConsoleKeyInfo UserInput = new ConsoleKeyInfo();
                if (Console.KeyAvailable)
                {
                    UserInput = Console.ReadKey();

                    switch (UserInput.Key)
                    {
                        case ConsoleKey.A:
                            {
                                if( Pet.getCooldownHunger() == 0 )
                                {
                                    Pet.LowerHunger();
                                }
                            }
                            break;
                        case ConsoleKey.B:
                            {
                                if (Pet.getCooldownFun() == 0)
                                {
                                    Pet.UpperFun();
                                }
                            }
                            break;
                        case ConsoleKey.C:
                            {
                                if (Pet.getCooldownHealth() == 0)
                                {
                                    Pet.UpperHealth();
                                }
                            }
                            break;
                    }
                }

                // Actualizacion de datos
                if ( CuentaVueltas == 5 )
                {
                    CuentaVueltas = 0;
                    Pet.LowerFun();
                    
                    if( Pet.getSick() == true )
                    {
                        Pet.LowerHealth();
                    }

                    Pet.UpperHunger();
                    Pet.ReduceCooldownFun();
                    Pet.ReduceCooldownHealth();
                    Pet.ReduceCooldownHunger();
                }
                else
                {
                    CuentaVueltas++;
                }
                Pet.RefreshState();

                if( Pet.IsAlive() == false )
                {
                    Game = false;
                }

                // Imprimo en pantalla
                GameBorders.PrintBorders();
                Pet.PrintData();
                Pet.PrintPet();
                Pet.PrintJugabilidad();
                System.Threading.Thread.Sleep(100);
            }

            Console.SetCursorPosition(1, 25);
            Console.WriteLine(Pet.getName() + " se murió :c");

        }
    }
}
