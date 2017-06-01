using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DadoStatic
{
    class Juego
    {

        private static bool Playing;

        public static void Jugar()
        {

            Dado Dice = new Dado();



            while(Playing)
            {
                Console.WriteLine( Dice.getNumber() );
            }
            
        }

        public static bool isPlaying() { return Playing; }
        public static void setPlaing( bool NewState) { Playing = NewState; }

        static Juego()
        {
            Playing = true;
        }

        
    }
}
