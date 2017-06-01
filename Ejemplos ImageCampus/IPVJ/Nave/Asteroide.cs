using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nave
{
    class Asteroide
    {

        private char Asteroid;
        private int PosX;
        private int PosY;

        public Asteroide(int _X, int _Y)
        {
            PosX = _X;
            PosY = _Y;
        }

        Asteroide(char _Asteroid)
        {
            Asteroid = _Asteroid;
        }

        public void printAsteroid()
        {
            Console.SetCursorPosition(PosX, PosY);
            Console.Write(Asteroid);
        }

        public void ToUP()
        {
            if( PosY > 0 )
            {
                PosY--;
            }
        }

        public void ToDOWN()
        {
            if (PosY < 99)
            {
                PosY--;
            }
        }

        public void ToLEFT()
        {
            if (PosX > 0)
            {
                PosX--;
            }
        }

        public void ToRIGHT()
        {
            if (PosX < 99)
            {
                PosX++;
            }

        }

    }
}
