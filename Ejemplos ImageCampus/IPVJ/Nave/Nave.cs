using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nave
{
    class Nave
    {

        private int PosX;
        private int PosY;
        private int Vida;
        private string Ship;

        public void Ascender()
        {
            if( PosY > 0 )
            {
                PosY--;
            }
        }

        public void Descender()
        {
            if( PosY < 50 )
            {
                PosY++;
            }
        }

        public void Adelantar()
        {
            if (PosX < 99)
            {
                PosX++;
            }
        }

        public void Atrasar()
        {
            if (PosX > 0)
            {
                PosX--;
            }
        }

        public Nave(int _X, int _Y, string NewShip)
        {
            PosX = _X;
            PosY = _Y;
            Ship = NewShip;
        }

        public void printShip()
        {
            Console.SetCursorPosition(PosX, PosY);
            Console.Write(Ship);
        }

    }
}
