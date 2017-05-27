using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RandomCSharp
{
    class Program
    {
        static void Main(string[] args)
        {

            Random RandomNumber = new Random();

            for( int i = 0; i < 10; i++ )
            {
                // ULIMIT
                //int num = RandomNumber.Next();
                
                // ( FROM, TO (UNINCLUDED) )
                int num = RandomNumber.Next(1,11);

                Console.WriteLine(num);

            }

        }
    }
}
