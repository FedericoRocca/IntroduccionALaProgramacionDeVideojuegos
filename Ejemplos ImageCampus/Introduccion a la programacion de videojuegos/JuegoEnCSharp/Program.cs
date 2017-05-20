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

    }

}

namespace JuegoEnCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
        }
    }
}
