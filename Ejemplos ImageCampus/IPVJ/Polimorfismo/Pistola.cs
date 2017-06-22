using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polimorfismo
{
    class Pistola : Arma
    {

        public override void Disparar()
        {
            Console.WriteLine("(Pisto) Pichun!");
        }

    }
}
