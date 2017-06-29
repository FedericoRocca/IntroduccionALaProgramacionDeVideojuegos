using System;
using System.Collections.Generic;

namespace AgarrarItems
{
    class Mundo
    {

        private bool[,] WalkableMap = new bool[16,10];
        private uint WorldCols;
        private uint WorldRows;

        public void PrintWorld()
        {
            for (int Cols = 0; Cols < WorldCols; Cols++)
            {
                for (int Rows = 0; Rows < WorldRows; Rows++)
                {
                    if( WalkableMap[Cols, Rows] == false )
                    {
                        Console.SetCursorPosition(Cols, Rows);
                        Console.Write("#");
                    }
                }
            }
        }

        public Mundo()
        {

            WorldCols = 14;
            WorldRows = 10;

            for ( int Cols = 0; Cols < WorldCols; Cols++ )
            {
	            for( int Rows = 0; Rows< WorldRows; Rows++ )
	            {
		            if( (Cols >= 0 || Cols <= 10) && Rows == 0 )
		            {
			            WalkableMap[Cols,Rows] = false;
		            }
                    else if ((Cols >= 0 || Cols <= 10) && Rows == 9)
                    {
                        WalkableMap[Cols, Rows] = false;
                    }
                    else if( Cols == 0 || Cols == 13 )
                    {
                        WalkableMap[Cols, Rows] = false;
                    }
                    else
                    {
                        WalkableMap[Cols, Rows] = true;
                    }
                }
            }
        }
    }
}
