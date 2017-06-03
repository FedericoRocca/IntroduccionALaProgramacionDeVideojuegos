using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Trampa
{
    class Juego
    {

        private static bool IsActive;
        private static int MaxX;
        private static int MaxY;
        private static int MinX;
        private static int MinY;
        private static int SleepAmount;

        public static void Jugar()
        {

            Console.CursorVisible = false;

            Personaje Jugador = new Personaje("O");

            ConsoleKeyInfo UserInput = new ConsoleKeyInfo();

            while (IsActive)
            {

                //Logica de movimiento
                if (Console.KeyAvailable)
                {
                    UserInput = Console.ReadKey();

                    switch (UserInput.Key)
                    {
                        case ConsoleKey.UpArrow:
                            {
                                Jugador.GoUP(MinY);
                            }
                            break;

                        case ConsoleKey.DownArrow:
                            {
                                Jugador.GoDown(MaxY);
                            }
                            break;

                        case ConsoleKey.LeftArrow:
                            {
                                Jugador.GoLeft(MinX);
                            }
                            break;

                        case ConsoleKey.RightArrow:
                            {
                                Jugador.GoRight(MaxX);
                            }
                            break;
                    }
                }

                //Logica de datos

                //Actualizacion de pantalla

                Jugador.PrintPlayer();

                System.Threading.Thread.Sleep(SleepAmount);
                Console.Clear();

            }

        }

        static Juego()
        {

            MaxX = 40;
            MaxY = 20;
            MinY = 1;
            MinX = 1;
            IsActive = true;
            SleepAmount = 25;

        }

    }
}
