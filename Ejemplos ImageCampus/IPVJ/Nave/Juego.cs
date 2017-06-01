using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nave
{
    class Juego
    {

        private static bool Playing;

        public static void Jugar()
        {

            Nave Player = new Nave(1, 25, ">");
            ConsoleKeyInfo UserInput = new ConsoleKeyInfo();

            while ( Playing )
            {
                if (Console.KeyAvailable)
                {
                    UserInput = Console.ReadKey();

                    switch (UserInput.Key)
                    {
                        case ConsoleKey.UpArrow:
                            {
                                Player.Ascender();
                            }
                            break;

                        case ConsoleKey.DownArrow:
                            {
                                Player.Descender();
                            }
                            break;

                        case ConsoleKey.RightArrow:
                            {
                                Player.Adelantar();
                            }
                            break;

                        case ConsoleKey.LeftArrow:
                            {
                                Player.Atrasar();
                            }
                            break;
                    }

                }

                Player.printShip();
                System.Threading.Thread.Sleep(25);
                Console.Clear();

            }

        }

        static Juego()
        {
            Playing = true;
        }

    }
}
