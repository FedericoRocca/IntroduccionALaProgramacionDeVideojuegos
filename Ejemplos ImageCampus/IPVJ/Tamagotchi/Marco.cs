using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tamagotchi
{
    class Marco
    {
        private string LeftBorder = "|";
        private string RightBorder = "|";
        private string UpperBorder = "-";
        private string LowerBorder = "-";
        private string CornerBorder = "+";
        private int XTam;
        private int YTam;

        public Marco(int NewXTam, int NewYTam)
        {
            XTam = NewXTam;
            YTam = NewYTam;
        }

        public void PrintBorders()
        {
            Console.SetCursorPosition(0,0);

            for ( int i = 0; i < XTam; i++ )
            {
                if( i == 0 || i == XTam - 1)
                {
                    System.Console.Write(CornerBorder);
                }
                else
                {
                    System.Console.Write(UpperBorder);
                }
            }

            System.Console.WriteLine("");

            for( int i = 0; i < YTam; i++ )
            {
                System.Console.Write(LeftBorder);
                for( int a = 0; a < XTam - 2; a++ )
                {
                    System.Console.Write(" ");
                }
                System.Console.Write(RightBorder);
                System.Console.WriteLine("");
            }

            for (int i = 0; i < XTam; i++)
            {
                if (i == 0 || i == XTam - 1)
                {
                    System.Console.Write(CornerBorder);
                }
                else
                {
                    System.Console.Write(LowerBorder);
                }
            }
        }
    }
}
