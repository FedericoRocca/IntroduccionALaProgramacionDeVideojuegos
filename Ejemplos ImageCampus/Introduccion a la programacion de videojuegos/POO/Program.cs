using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace POO
{

    class Personaje
    {
        public int Vidas;

        public void MostrarVidas()
        {
            System.Console.WriteLine(Vidas);
        }

    }

    class Program
    {
        static void Main(string[] args)
        {

            Personaje Jugador = new Personaje();
            Jugador.Vidas = 3;
            Jugador.MostrarVidas();
        }
    }
}
