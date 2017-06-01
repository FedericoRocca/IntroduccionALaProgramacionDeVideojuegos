using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DadoStatic
{
    class Dado
    {

        private int Numero;
        private static Random RandNumber = new Random(); 

        public Dado()
        {
            Numero = RandNumber.Next(1, 7);
        }

        public int getNumber()
        {
            return Numero;
        }

    }
}