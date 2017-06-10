using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjPT3
{
    class Point
    {

        private int x;
        private int y;

        public Point()
        {
            x = 0;
            y = 0;
        }

        public Point(int NewX, int NewY)
        {
            x = NewX;
            y = NewY;
        }

        public void setY(int NewY) { y = NewY; }
        public void setX(int NewX) { x = NewX; }
        public int getX() { return x; }
        public int getY() { return y; }

        public void Draw()
        {
            Console.SetCursorPosition(x, y);
            Console.Write("X");
        }

    }
}
