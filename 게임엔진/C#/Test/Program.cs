using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    class Dog
    {
        public string name;

        public void Bark() // 짖는 행동
        {
            Console.WriteLine("{0} : 멍멍!", name);
        }
    }

    class Cat
    {
        public string name;

        public void Bark2() // 짖는 행동
        {
            Console.WriteLine("{0} : 냐옹!", name);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Dog dog = new Dog();
            dog.name = "칸";

            Dog dog2 = new Dog();
            dog2.name = "켄";

            Cat cat = new Cat();
            cat.name = "냥";


            dog.Bark();
            dog2.Bark();
            cat.Bark2();

            Console.WriteLine("개의 이름: {0}", dog.name);
            Console.WriteLine("개의 이름: {0}", dog2.name);

            Console.WriteLine("개의 이름: {0}", cat.name);
        }
    }
}
