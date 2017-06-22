using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polimorfismo
{
    class Arma
    {
        public virtual void Disparar()
        {
            Console.WriteLine("Bang!");
        }
    }
}
