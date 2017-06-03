using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Trampa
{
    class Personaje
    {

        private string Jugador;
        private int PosX;
        private int PosY;

        public void GoUP(int MinMov)
        {
            if( PosY >= MinMov )
            {
                PosY--;
            }
        }

        public void GoDown(int MaxMov)
        {
            if( PosY <= MaxMov )
            {
                PosY++;
            }
        }

        public void GoLeft(int MinMov)
        {
            if( PosX >= MinMov )
            {
                PosX--;
            }
        }

        public void GoRight(int MaxMov)
        {
            if( PosX <= MaxMov )
            {
                PosX++;
            }
        }

        public Personaje(string Face)
        {
            Jugador = Face;
        }

        public void PrintPlayer()
        {
            Console.SetCursorPosition(PosX, PosY);
            Console.Write(Jugador);
        }

    }
}
