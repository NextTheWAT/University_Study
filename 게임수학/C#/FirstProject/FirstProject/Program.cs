using System; //시스템이 없다면 콘솔 앞에 System을 사용해야한다
              //ex System.Console.WriteLine
              //using FirstProject.Starcraft; 이렇게 써주면 FirstProject의 Starcraft의 클래스를 사용한다는 것
              //using System. 을 하게 된다면 다른 클래스들을 이용해서 코딩을 하는것

using System.Collections; //ArrayList 를 사용하기위한


namespace FirstProject
{
    class Program
    {
        #region 첫 번째 실습
        /*
        enum CAL { SUM, SUB, VAL, DIV} //타입 선언 enum은 타입 CAL 은 변수
                                        //CAL은 만든 변수 정수형은 0, 1, 2, 3 이 들어간다
                                        //접근할때는 CAL.SUB등 으로 접근한다
                                        //enum을 게임에서는 굉장히 많이 사용한다 그리고 스위치문 사용 많음@@ 시험 나올 가능성 높음
                                        //이니멀레이션? - enum
        static void Main(string[] args)
        {
            #region 첫번째 실습
            int a = Int32.Parse(Console.ReadLine());
            int b = Int32.Parse(Console.ReadLine());
            int op = Int32.Parse(Console.ReadLine());
           
           //CAL cal = CAL.SUM;      //타입 변수 값 으로

            switch ((CAL)op) //enum 타임으로 변환시켜주어야한다
            {
                case CAL.SUM:
                    Console.WriteLine(a + b);
                    break;
                case CAL.SUB:
                    Console.WriteLine(a - b);
                    break;
                case CAL.VAL:
                    Console.WriteLine(a * b);
                    break;
                case CAL.DIV:
                    Console.WriteLine(a % b);
                    break;
            }
            */
        #endregion

        #region 두 번째 실습
        /*
        class GuGuDan
        {
            public void Print()
            {
                //int startdan = Int32.Parse(Console.ReadLine());
                //int lastdan = Int32.Parse(Console.ReadLine());

                for (int i = 2; i < 10; i++)
                {
                    for (int j = 1; j < 10; j++)
                    {
                        Console.WriteLine("{0} * {1} = {2}", i, j, i * j);
                    }
                }
            }

            public void Print(int start, int last)
            {
                for (int i = start; i < last; i++)
                {
                    for (int j = 1; j < 10; j++)
                    {
                        Console.WriteLine("{0} * {1} = {2}", i, j, i * j);
                    }
                }
            }
        }
        static void Main(String[] args)
        {
            GuGuDan MyGu = new GuGuDan();
            MyGu.Print();
            MyGu.Print(3, 4);

        }
        */
        #endregion

        #region 세 번째 실습

        static void Main(String[] args)
        {
            ArrayList al = new ArrayList();
           for(int i=0; i<10; i++)
            {
                al.Add(i);
            }
            al.Add("Lee jae Eun");
            al.Add(3.14f);


           foreach(object num in al)
            {
                Console.WriteLine(num);
            }
        }
        #endregion
    }
}
