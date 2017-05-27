using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clases
{
    class Game
    {
        private bool IsActive = true;
        private bool HasWon = false;

        public bool getState() { return IsActive; }
        public bool getHasWon() { return HasWon; }

        public void setState(bool NewState) { IsActive = NewState; }
        public void setHasWon(bool NewHasWon) { HasWon = NewHasWon; }

    }

    class Snake
    {
        private string TotalSnake;
        private char CharToPrint;
        private int PosX = 1;
        private int PosY = 1;
        bool IsMovingUp = false;
        bool IsMovingDown = false;
        bool IsMovingRight = true;
        bool IsMovingLeft = false;

        public int getX() { return PosX; }
        public int getY() { return PosY; }

        public bool CheckEnemyColission( Snake Enemy )
        {
            if (Enemy.getX() == PosX && Enemy.getY() == PosY)
            {
                return true;
            }
            else return false;
        }

        public Snake( char ToPrint, int InitPosX, int InitPosY )
        {
            CharToPrint = ToPrint;
            PosX = InitPosX;
            PosY = InitPosY;
        }

        public void MoveRand()
        {
            Random RandomNumber = new Random();
            int Direction = RandomNumber.Next(0, 4);

            switch(Direction)
            {
                case 0:
                    {
                        IsMovingUp = true;
                        IsMovingDown = false;
                        IsMovingRight = false;
                        IsMovingLeft = false;
                    }
                    break;
                case 1:
                    {
                        IsMovingUp = false;
                        IsMovingDown = true;
                        IsMovingRight = false;
                        IsMovingLeft = false;
                    }
                    break;
                case 2:
                    {
                        IsMovingUp = false;
                        IsMovingDown = false;
                        IsMovingRight = true;
                        IsMovingLeft = false;
                    }
                    break;
                case 3:
                    {
                        IsMovingUp = false;
                        IsMovingDown = false;
                        IsMovingRight = false;
                        IsMovingLeft = true;
                    }
                    break;
            }

            Move();

        }

        public void SetMoveUp()
        {
            IsMovingUp = true;
            IsMovingDown = false;
            IsMovingRight = false;
            IsMovingLeft = false;
        }

        public void SetMoveDown()
        {
            IsMovingUp = false;
            IsMovingDown = true;
            IsMovingRight = false;
            IsMovingLeft = false;
        }
        public void SetMoveRight()
        {
            IsMovingUp = false;
            IsMovingDown = false;
            IsMovingRight = true;
            IsMovingLeft = false;
        }
        public void SetMoveLeft()
        {
            IsMovingUp = false;
            IsMovingDown = false;
            IsMovingRight = false;
            IsMovingLeft = true;
        }

        public void Move()
        {
            if( IsMovingUp == true && PosY >= 2 )
            {
                PosY--;
            }

            if (IsMovingDown == true && PosY < 30)
            {
                PosY++;
            }

            if (IsMovingRight == true && PosX < 49)
            {
                PosX++;
            }

            if (IsMovingLeft == true && PosX >= 2)
            {
                PosX--;
            }

        }

        public void PrintSnake()
        {
            Console.SetCursorPosition(PosX, PosY);
            Console.Write(CharToPrint);
        }

    }

}

namespace Snake
{
    class Program
    {

        static public void PrintBorders(int MaxX, int MaxY)
        {
            for (int i = 0; i <= MaxX; i++)
            {
                System.Console.Write("-");
            }
            System.Console.WriteLine();

            for (int i = 0; i < MaxY; i++)
            {
                System.Console.Write("|");
                System.Console.WriteLine();
            }

            for (int i = 0; i < MaxY; i++)
            {
                Console.SetCursorPosition(MaxX, i+1);
                System.Console.Write("|");
                System.Console.WriteLine();
            }

            for (int i = 0; i <= MaxX; i++)
            {
                System.Console.Write("-");
            }
            System.Console.WriteLine();

        }

        static void Main(string[] args)
        {
            // Inicializacion
            Clases.Game Juego = new Clases.Game();
            Clases.Snake Jugador = new Clases.Snake('#', 25, 15);
            Clases.Snake[] Enemigos = new Clases.Snake[5];

            Random RandomPosYForEnemy = new Random();

            for (int i = 0; i < 5; i++ )
            {
                int RandownPosY = RandomPosYForEnemy.Next(1, 49);
                Enemigos[i] = new Clases.Snake('@', 0, RandownPosY);
            }

            ConsoleKeyInfo UserInput = new ConsoleKeyInfo();

            while ( Juego.getState() )
            {
                // Logica
                if (Console.KeyAvailable)
                {
                    UserInput = Console.ReadKey();

                    switch (UserInput.Key)
                    {
                        case ConsoleKey.UpArrow:
                            {
                                Jugador.SetMoveUp();
                            }
                            break;
                        case ConsoleKey.DownArrow:
                            {
                                Jugador.SetMoveDown();
                            }
                            break;
                        case ConsoleKey.LeftArrow:
                            {
                                Jugador.SetMoveLeft();
                            }
                            break;
                        case ConsoleKey.RightArrow:
                            {
                                Jugador.SetMoveRight();
                            }
                            break;
                    }

                }

                Jugador.Move();

                for (int i = 0; i < 5; i++)
                {
                    Enemigos[i].MoveRand();
                }
                
                // Actualizacion
                PrintBorders(50,30);
                Jugador.PrintSnake();

                for (int i = 0; i < 5; i++)
                {
                    Enemigos[i].PrintSnake();
                }

                // Limitar FPS
                System.Threading.Thread.Sleep(50);
                // Limpiar pantalla
                System.Console.Clear();

                for (int i = 0; i < 5; i++)
                {

                    if (Jugador.CheckEnemyColission(Enemigos[i]) == true)
                    {
                        Juego.setState(false);
                        System.Console.WriteLine("Perdiste chango...");
                        System.Console.ReadKey();
                    }

                }

            }

        }

    }
}