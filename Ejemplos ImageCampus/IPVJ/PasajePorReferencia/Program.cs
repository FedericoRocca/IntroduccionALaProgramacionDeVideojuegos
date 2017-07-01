using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PasajePorReferencia
{
    class Program
    {

        static void HacerAlgo(ref int FunctionParameter)
        {
            FunctionParameter = 10;
        }

        static void Main(string[] args)
        {

            int MainParameter = 0;

            HacerAlgo(ref MainParameter);

            Console.WriteLine(MainParameter);
            Console.Read();

        }
    }
}
