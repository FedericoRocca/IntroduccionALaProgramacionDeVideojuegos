using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vehiculos
{
    class Program
    {
        static void Main(string[] args)
        {

            Vehiculo[] Vehiculos = new Vehiculo[100];
            Random RandVehiculo = new Random();

            for (int i = 0; i < Vehiculos.Length; i++)
            {
                switch (RandVehiculo.Next(0, 3))
                {
                    case 0:
                        {
                            Vehiculos[i] = new Camion();
                        }
                        break;

                    case 1:
                        {
                            Vehiculos[i] = new Fitito();
                        }
                        break;

                    case 2:
                        {
                            Vehiculos[i] = new Moto();
                        }
                        break;
                }

                Vehiculos[i].Acelerar();

            }

        }
    }
}
