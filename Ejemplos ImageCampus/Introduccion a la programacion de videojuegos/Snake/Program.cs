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
        private char CharToPrint = '#';
        private int PosX;
        private int PosY;

        public void MoveUp() { PosY--; }
        public void MoveDown() { PosY++; }
        public void MoveLeft() { PosX--; }
        public void MoveRight() { PosX++; }

        public void PrintSnake()
        {

        }

    }

}

namespace Snake
{
    class Program
    {

        static public void PrintBorders(int MaxX, int MaxY)
        {
            char Sides = '|';
            char Corners = '+';
            char TopAndBottom = '-';

            int AuxX = 0, AuxY = 0;

            for( int i = 0; i < MaxX; i++ )
            {
                if( i == 0 || i == MaxX - 1)
                {
                    Console.SetCursorPosition(AuxX, AuxY);
                    Console.Write(Corners);
                }
                else
                {
                    Console.SetCursorPosition(AuxX, AuxY);
                    Console.Write(TopAndBottom);
                }
                AuxX++;
            }
            AuxX = 0;
            AuxY = 1;
            for( int i = 0; i < MaxY - 2; i++ )
            {
                {
                    Console.SetCursorPosition(AuxX, AuxY);
                    Console.Write(Sides);
                }
                AuxY++;
            }

           

        }

        static void Main(string[] args)
        {
            // Inicializacion
            Clases.Game Juego = new Clases.Game();
            Clases.Snake Jugador = new Clases.Snake();

            PrintBorders( 10, 10 );

            while( Juego.getState() )
            {
                // Logica
                // Limitar FPS
                // Limpiar pantalla
                // Actualizacion
            }


        }

    }
}
