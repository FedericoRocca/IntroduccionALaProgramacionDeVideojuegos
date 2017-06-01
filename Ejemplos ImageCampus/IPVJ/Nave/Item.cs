using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nave
{
    class Item
    {

        private char ItemImg;

        Item(char _ItemImg)
        {
            ItemImg = _ItemImg;
        }

        public void printItem()
        {
            Console.Write(ItemImg);
        }

    }
}
