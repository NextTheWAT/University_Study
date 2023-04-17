using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TestStudy
{
    class Program
    {
        static void Main(string[] args)
        {
            for(int i=0; i<5; i++)
            {
                for(int j=5; j>i; j--)
                {
                    Console.Write(" ");
                }
                for(int z=0; z<i*2-1; z++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}
