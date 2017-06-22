using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vehiculos
{
    class Moto : Vehiculo
    {

        public override void Acelerar()
        {
            Console.WriteLine("Moto sin ruedas acelerando");
        }

    }
}
