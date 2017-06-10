using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjPT2
{
    class Rectangle
    {

        private int X;
        private int Y;
        private int Width;
        private int Height;

        public Rectangle()
        {
            X = 1;
            Y = 1;
            Width = 1;
            Height = 1;
        }

        public Rectangle(int _x, int _y, int _w, int _h)
        {
            if( _x > 0 && _x < 50 )
            {
                X = _x;
            }
            else
            {
                X = 1;
            }

            if (_y > 0 && _y < 20)
            {
                Y = _y;
            }
            else
            {
                Y = 1;
            }

            if( _w < 50 )
            {
                Width = _w;
            }

            if (_h < 50)
            {
                Height = _h;
            }
        }

        public void SetX(int _x)
        {
            if (_x > 0 && _x < 50)
            {
                X = _x;
            }
        }

        public void SetY(int _y)
        {
            if (_y > 0 && _y < 20)
            {
                Y = _y;
            }
        }

        public void SetWidth(int _w)
        {
            if (_w < 50)
            {
                Width = _w;
            }
        }

        public void SetHeight(int _h)
        {
            if (_h < 50)
            {
                Height = _h;
            }
        }

        public int GetX()
        {
            return X;
        }

        public int GetY()
        {
            return Y;
        }

        public int GetWidth()
        {
            return Width;
        }

        public int GetHeight()
        {
            return Height;
        }

        public void Draw()
        {

            for( int a = Y; a <= Height; a++ )
            {
                // Print X
                for (int i = X; i <= Width; i++)
                {
                    Console.SetCursorPosition(i, a);
                    Console.Write("#");
                }
            }
            


        }

    }
}
