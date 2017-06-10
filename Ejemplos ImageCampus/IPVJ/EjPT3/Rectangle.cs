using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjPT3
{
    class Rectangle
    {

        private Point upperLeft = new Point();
        private Point lowerRight = new Point();
        private int Height;
        private int Width;

        public Rectangle(Point NewUpperLeft, Point NewLowerRight)
        {
            upperLeft.setX( NewUpperLeft.getX() );
            upperLeft.setY( NewUpperLeft.getY() );

            lowerRight.setX( NewLowerRight.getX() );
            lowerRight.setY( NewLowerRight.getY() );

            Height = lowerRight.getY() - upperLeft.getY() + 1;
            Width = lowerRight.getX() - upperLeft.getX() + 1;

        }

        public void SetUpperLeftPosition(Point xy)
        {
            upperLeft.setX( xy.getX() );
            upperLeft.setY( xy.getY());
        }

        public void SetLowerRightPosition(Point xy)
        {
            lowerRight.setX(xy.getX());
            lowerRight.setY(xy.getY());
        }

        public int GetX()
        {
            return upperLeft.getX();
        }

        public int GetY()
        {
            return upperLeft.getY();
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
            for ( int i = upperLeft.getX(); i < Width; i++ )
            {
                for( int a = 1; a < Height + 1; a++ )
                {
                    Console.SetCursorPosition(a,i);
                    Console.Write("#");
                }
            }
        }

    }
}
