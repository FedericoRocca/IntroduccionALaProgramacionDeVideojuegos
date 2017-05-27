using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tamagotchi
{

    enum Estado
    {
        Vivo,      // State[0]
        Muerto,    // State[0]
        Aburrido,  // State[1]
        Divertido, // State[1]
        Sano,      // State[2]
        Enfermo,   // State[2]
        Hambriento,// State[3]
        Lleno      // State[3]
    };

    class Mascota
    {

        private string MascotaP1 = "(O.O)";
        private string Name;
        private int Hunger;
        private int Fun;
        private int Health;
        private Estado[] State;

        public Mascota(string NewName)
        {
            Name = NewName;

            Hunger = 0;
            Fun = 10;
            Health = 100;
            State = new Estado[4];
            State[0] = Estado.Vivo;
            State[1] = Estado.Divertido;
            State[2] = Estado.Sano;
            State[3] = Estado.Lleno;

        }

        // Agregar metodos para aumentar hambre y todo eso

        public int getHunger() { return Hunger; }
        public int getFun() { return Fun; }
        public int getHealth() { return Health; }

        public void PrintData()
        {

            Console.SetCursorPosition(2, 14);
            System.Console.WriteLine("Estado: ");
            Console.SetCursorPosition(2, 15);

            if ( State[0] == Estado.Vivo )
            {
                System.Console.Write("Vivo");
            } else System.Console.Write("Muerto");

            Console.SetCursorPosition(2, 16);
            if (State[1] == Estado.Aburrido)
            {
                System.Console.Write("Aburrido");
            }
            else System.Console.Write("Divertido");

            Console.SetCursorPosition(2, 17);
            if (State[2] == Estado.Sano)
            {
                System.Console.Write("Sano");
            }
            else System.Console.Write("Enfermo");

            Console.SetCursorPosition(2, 18);
            if (State[3] == Estado.Hambriento)
            {
                System.Console.Write("Hambriento");
            }
            else System.Console.Write("Lleno");

            Console.SetCursorPosition(2, 20);
            System.Console.Write("Diversion: " + Fun);
            Console.SetCursorPosition(2, 21);
            System.Console.Write("Salud    : " + Health);
            Console.SetCursorPosition(2, 22);
            System.Console.Write("Hambre   : " + Hunger);

        }

        public void RefreshState()
        {
            if (Hunger <= 0 || Health <= 0 || (Fun <= 0 && (State[2] == Estado.Enfermo)))
            {
                State[0] = Estado.Muerto;
            }
            else
            {
                State[0] = Estado.Vivo;
            }

            if (Fun <= 25)
            {
                State[1] = Estado.Aburrido;
            } else State[1] = Estado.Divertido;

            if (Health <= 25)
            {
                State[2] = Estado.Enfermo;
            }
            else State[2] = Estado.Sano;

            if( Hunger <= 25 )
            {
                State[3] = Estado.Hambriento;
            }
            else State[3] = Estado.Lleno;
        }

        public void PrintPet()
        {
            if( State[0] == Estado.Vivo )
            {
                MascotaP1 = "(O.O)";
            }
            else MascotaP1 = "(X.X)";

            if( State[1] == Estado.Aburrido )
            {
                MascotaP1 = "(u.u)";
            }
            else MascotaP1 = "(n.n)";

            if( State[2] == Estado.Sano )
            {
                MascotaP1 = "(o.o)";
            }
            else MascotaP1 = "(~.~)";

            if( State[3] == Estado.Hambriento )
            {
                MascotaP1 = "('.')";
            }
            else MascotaP1 = "(o.o)";

            Console.SetCursorPosition(7, 2);
            System.Console.Write(MascotaP1);

        }

    }
}
