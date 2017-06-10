using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjPT1
{
    class Program
    {
        static void Main(string[] args)
        {

            Random Rand = new Random();
            
            Point[] Punto = {
                                new Point(),
                                new Point(),
                                new Point(),
                                new Point(),
                                new Point(),
                            };

            for( int i = 0; i < 5; i++ )
            {
                Punto[i].setX(Rand.Next(0, 10));
                System.Threading.Thread.Sleep(1);
                Punto[i].setY(Rand.Next(0, 10));
                System.Threading.Thread.Sleep(1);
            }

            for( int i = 0; i < 5; i++ )
            {
                Punto[i].Draw();
            }

        }
    }
}
