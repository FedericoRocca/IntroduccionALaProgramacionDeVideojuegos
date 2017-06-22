using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polimorfismo
{
    class Laser : Arma
    {

        public override void Disparar()
        {
            Console.WriteLine("(Laser) Zap!");
        }

    }
}
