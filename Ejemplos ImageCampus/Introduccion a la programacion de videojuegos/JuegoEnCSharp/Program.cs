using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clases
{

    class Personaje
    {
        private int X;
        private int Y;
        private char Image;

        public int getX() { return X; }
        public int getY() { return Y; }
        public void setX(int NuevoX) { X = NuevoX; }
        public void setY(int NuevoY) { Y = NuevoY; }
        public void setImage(char NewImage) { Image = NewImage; }
        public char getImage() { return Image; }
        public void MoveLeft() { X--; }
        public void MoveRigth() { X++; }
        public void MoveDown() { Y++; }
        public void MoveUp() { Y--; }
        public void PrintChar()
        {
            Console.SetCursorPosition(X, Y);
            Console.Write(Image);
        }

    }

}

namespace JuegoEnCSharp
{
    class Program
    {

        static void Main(string[] args)
        {

            Clases.Personaje Jugador = new Clases.Personaje();
            Clases.Personaje Enemigo = new Clases.Personaje();

            Jugador.setX(1);
            Jugador.setY(1);
            Jugador.setImage('@');

            ConsoleKeyInfo UserInput = new ConsoleKeyInfo();

            bool Game = true;
            while (Game)
            {

                if( Console.KeyAvailable )
                {
                    UserInput = Console.ReadKey();

                    switch( UserInput.Key )
                    {
                        case ConsoleKey.UpArrow:
                            {
                                if( Jugador.getY() - 1 >= 1 )
                                {
                                    Jugador.MoveUp();
                                }
                            }
                            break;
                        case ConsoleKey.DownArrow:
                            {
                                if (Jugador.getY() + 1 <= 49)
                                {
                                    Jugador.MoveDown();
                                }
                            }
                            break;
                        case ConsoleKey.LeftArrow:
                            {
                                if (Jugador.getX() - 1 >= 1)
                                {
                                    Jugador.MoveLeft();
                                }
                            }
                            break;
                        case ConsoleKey.RightArrow:
                            {
                                if (Jugador.getX() + 1 <= 98)
                                {
                                    Jugador.MoveRigth();
                                }
                            }
                            break;
                        case ConsoleKey.Escape:
                            {
                                Game = false;
                                System.Console.Clear();
                                System.Console.WriteLine("Nos vemos!");
                            }
                            break;
                    }

                }

                if( Game == true )
                {
                    Jugador.PrintChar();
                    System.Threading.Thread.Sleep(25);
                    System.Console.Clear();
                }
                
            }

        }

    }

}
