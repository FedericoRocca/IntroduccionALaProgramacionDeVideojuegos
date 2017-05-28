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
        private int CooldownHunger;
        private int CooldownFun;
        private int CooldownHealth;
        private int SickTurns;

        public Mascota(string NewName)
        {
            Name = NewName;

            Hunger = 0;
            Fun = 100;
            Health = 100;
            State = new Estado[4];
            State[0] = Estado.Vivo;
            State[1] = Estado.Divertido;
            State[2] = Estado.Sano;
            State[3] = Estado.Lleno;
            CooldownHunger = 0;
            CooldownFun = 0;
            CooldownHealth = 0;
            SickTurns = 0;

        }

        public int getCooldownHunger() { return CooldownHunger; }
        public int getCooldownFun() { return CooldownFun; }
        public int getCooldownHealth() { return CooldownHealth; }

        public bool getSick() { if (State[2] == Estado.Enfermo) { return true; } else return false; }

        public bool IsAlive() { if (State[0] == Estado.Vivo) { return true; } else { return false; } }
        public string getName() { return Name; }

        public void PrintJugabilidad()
        {
            Console.SetCursorPosition(21, 15);
            System.Console.Write("A - Alimentar (Cooldown " + CooldownHunger + " turnos)");
            Console.SetCursorPosition(21, 16);
            System.Console.Write("B - Divertir (Cooldown " + CooldownFun + " turnos)");
            Console.SetCursorPosition(21, 17);
            System.Console.Write("C - Curar (Cooldown " + CooldownHealth + " turnos)");
        }

        public void LowerHunger()
        {
            if ((Hunger - 75) >= 0)
            {
                Hunger -= 75;
            }
            else
            {
                Hunger = 0;
            }
            setCooldownHunger();
        }

        public void LowerFun() { if (Fun > 0) { Fun--; } }
        public void LowerHealth() { if (Health > 0) { Health--; } }

        public void UpperHunger() { if (Hunger < 100) { Hunger++; } if (Hunger == 100) { Health--; } }
        public void UpperFun()
        {
            if(Fun < 100 && (Fun + 50) <= 100)
            {
                Fun += 50;
            }
            else
            {
                Fun = 100;
            }
            setCooldownFun();
        }

        public void UpperHealth()
        {
            if (Health < 100 && ( Health + 50 ) <= 100 )
            {
                Health += 50;
            }
            else
            {
                Health = 100;
            }
            setCooldownHealth();
        }

        public void setCooldownHunger() { CooldownHunger = 10; }
        public void setCooldownFun() { CooldownFun = 15; }
        public void setCooldownHealth() { CooldownHealth = 100; }

        public void ReduceCooldownHunger() { if (CooldownHunger > 0) { CooldownHunger--; }}
        public void ReduceCooldownFun() { if (CooldownFun > 0) { CooldownFun--; } }
        public void ReduceCooldownHealth() { if (CooldownHealth > 0) { CooldownHealth--; } }

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
            if (Health <= 0)
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

            if (Health <= 25 && Fun <= 25)
            {
                State[2] = Estado.Enfermo;
            }
            else State[2] = Estado.Sano;

            if( Hunger >= 75 )
            {
                State[3] = Estado.Hambriento;
            }
            else State[3] = Estado.Lleno;
        }

        public void PrintPet()
        {
            if ( State[1] == Estado.Aburrido )
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

            if (State[0] == Estado.Muerto)
            {
                MascotaP1 = "(X.X)";
            }

            Console.SetCursorPosition(7, 2);
            System.Console.Write(MascotaP1);
        }

    }
}
