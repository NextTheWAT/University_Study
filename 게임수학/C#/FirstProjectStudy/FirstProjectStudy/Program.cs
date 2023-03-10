using System; //시스템이 없다면 콘솔 앞에 System을 사용해야한다
              //ex System.Console.WriteLine
              //using FirstProject.Starcraft; 이렇게 써주면 FirstProject의 Starcraft의 클래스를 사용한다는 것
              //using System. 을 하게 된다면 다른 클래스들을 이용해서 코딩을 하는것

using System.Collections; //ArrayList 를 사용하기위한


namespace FirstProjectStudy
{
    class Program
    {

        public void calcul()
        {
            Console.Write("a의 값 : ");
            int a = Int32.Parse(Console.ReadLine());
            Console.Write("b의 값 : ");
            int b = Int32.Parse(Console.ReadLine());

            Console.WriteLine("0번은 더하기");
            Console.WriteLine("1번은 빼기");
            Console.WriteLine("2번은 곱하기");
            Console.WriteLine("3번은 나누기");
            Console.Write("선택 : ");
            int c = Int32.Parse(Console.ReadLine());

            switch (c)
            {
                case 0:
                    Console.WriteLine("값 : {0}",a + b);
                    break;
                case 1:
                    Console.WriteLine("값 : {0}", a - b);
                    break;
                case 2:
                    Console.WriteLine("값 : {0}", a * b);
                    break;
                case 3:
                    Console.WriteLine("값 : {0}", a / b);
                    break;
            }
            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine();
        }

        public void GuGuDan()
        {
            Console.Write("시작할 단: ");
            int start = Int32.Parse(Console.ReadLine());
            Console.Write("끝낼 단: ");
            int end = Int32.Parse(Console.ReadLine());
            for (int i=start; i<=end; i++)
            {
                for (int j=1; j<=9; j++)
                {
                    Console.WriteLine("{0} * {1} = {2}", i, j, i * j);
                }
            }
            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine();
        }



        static void Main(String[] args)
        {
            Program cal = new Program();
            cal.calcul();

            cal.GuGuDan();

        }
    }
}
