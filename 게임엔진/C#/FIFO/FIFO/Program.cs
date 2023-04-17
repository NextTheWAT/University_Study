using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FIFO
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[3];
            
            for(int i=0; i<10; i++)
            {
                int count = 0;
                int count2 = 0;

                Console.Write("값 입력 : ");
                int sel = Int32.Parse(Console.ReadLine());

                for(int j=0; j<3; j++)
                {
                    if (arr[j] == 0)
                    {
                        count++;
                    }
                }
                for(int j=0; j<3; j++)
                {
                    if(count == 0 && )
                }

                if (arr[i % 3] != sel)
                {
                    arr[i % 3] = sel;
                }


                Console.Write("현재 배열 : ");
                for(int j=0; j<3; j++)
                {
                    Console.Write("{0} ", arr[j]);
                }
                Console.WriteLine();

            }


        }
    }
}
