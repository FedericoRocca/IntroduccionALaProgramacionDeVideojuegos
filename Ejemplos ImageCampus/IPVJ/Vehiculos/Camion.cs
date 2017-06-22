using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vehiculos
{
    class Camion : Vehiculo
    {

        public override void Acelerar()
        {
            Console.WriteLine("Camion sin volante acelerando");
        }

    }
}
