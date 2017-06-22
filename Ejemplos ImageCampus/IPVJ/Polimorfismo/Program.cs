using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polimorfismo
{
    class Program
    {
        static void Main(string[] args)
        {

            Arma[] Armas = new Arma[30];

            Random NewRand = new Random();

            for( int i = 0; i < Armas.Length; i++ )
            {
                switch(NewRand.Next(0,3))
                {
                    case 0:
                        {
                            Armas[i] = new Laser();
                        }

                        break;
                    case 1:
                        {
                            Armas[i] = new Escopeta();
                        }
                        break;

                    case 2:
                        {
                            Armas[i] = new Pistola();
                        }
                        break;
                }

                Armas[i].Disparar();

            }


        }
    }
}
