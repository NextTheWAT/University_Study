using System; //이걸 사용하지 않으면 System.Console.WriteLine()을 써줘야한다.
using System.Collections; //ArrayList, List<>, hashTable, Dictionary 등을 사용가능하다


namespace FirstProject
{
    
    namespace StarCraft
    {
        class Zerg : Unit
        {
            public void Attack()
            {
                Console.WriteLine("저그가 공격");
            }
            //FirstProject.StarCraft.Zerg z = new FirstProject.StarCraft.Zerg(); 
            //using FirstProject; 을 사용하지 않았을때 코드
        }
        class Protoss : Unit
        {
            public void Attack()
            {
                Console.WriteLine("프토로스가 공격");
            }
        }
        class Unit
        {
            public virtual void Attack()
            {

            }
        }
    }
     //스타크래스트
    
    class Calculation
    {
        enum CAL { SUM, SUB, MUL, DIV } //타입을 만든것 CAL 이라는
        enum UNIT { ZERG, TERRAN, PROTOSS }
        enum STATE { IDLE, WALK, RUN, DIE }
        public void Cale()
        {
        //게임에서는 enum을 굉장히 많이 사용하고
        //enum과 switch, case를 많이 사용한다
            CAL cal = CAL.SUM;
            int a = Int32.Parse(Console.ReadLine()); //정수형 값을 입력해서 a에 입력 //Int32.Parse(TexBox.text)
            int b = Int32.Parse(Console.ReadLine()); //정수형 값을 입력해서 b에 입력
            Console.WriteLine("0:SUM, 1:SUB, 2:MUL, 3:DIV");
            Console.Write("선택 : ");
            int op = Int32.Parse(Console.ReadLine()); //정수형 값을 입력해서 op에 입력

            switch ((CAL)op)
            {
                case CAL.SUM: //0 을 의미
                    Console.WriteLine(a + b); // a + b
                    break;
                case CAL.SUB: //1 을 의미
                    Console.WriteLine(a - b); //a - b
                    break;
                case CAL.MUL: //2 을 의미
                    Console.WriteLine(a * b); //a * b
                    break;
                case CAL.DIV: //3 을 의미
                    Console.WriteLine(a / b); // a / b
                    break;
            }

        }
    }
     //사칙연산
    /*
    class GuGuDan
    {
        public void Print()
        {
            Console.Write("시작 단 : ");
            int start = Int32.Parse(Console.ReadLine());
            Console.Write("끝 단 : ");
            int end = Int32.Parse(Console.ReadLine());

            for (int i = start; i <= end; i++)
            {
                Console.WriteLine();
                Console.WriteLine("{0}단", i);
                for (int j = 1; j <= 9; j++)
                {
                    Console.WriteLine("{0} x {1} = {2}", i, j, i * j);
                }
            }
        }
        public void Print(int start, int end)
        {
            for (int i = start; i <= end; i++)
            {
                Console.WriteLine();
                Console.WriteLine("{0}단", i);
                for (int j = 1; j <= 9; j++)
                {
                    Console.WriteLine("{0} x {1} = {2}", i, j, i * j);
                }
            }

        }
    }
    */ //구구단
    class Program
    {
        //게임에서는 enum을 굉장히 많이 사용하고
        //enum과 switch, case를 많이 사용한다
        static void Main(string[] args)
        {

            StarCraft.Zerg z = new StarCraft.Zerg();
            z.Attack();

            Calculation myCal = new Calculation(); //객체생성
            myCal.Cale();                         //함수호출

            //GuGuDan myGu = new GuGuDan();     //객체생성
            //myGu.Print();                     //함수호출

            //GuGuDan myGu2 = new GuGuDan();     //객체생성
            //myGu2.Print(1, 3);                //함수호출

            ArrayList al= new ArrayList();

            for(int i=0; i<10; i++)
            {
                //Console.WriteLine(al[1].ToString());
                al.Add(i);
            }
            al.Add(3.14f); //float 실수형
            al.Add("Lee Jae Eun"); //String 문자열
            al.Add(myCal);

            for(int i=0; i<5; i++)
            {
                al.Add(new StarCraft.Zerg());
            }
            for (int i = 0; i < 5; i++)
            {
                al.Add(new StarCraft.Protoss());
            }

            foreach (Object i in al) //Obejct를 Unit으로 바꿔도 사용가능하다
            {
                /*
                if(i.GetType().ToString() == "FirstProject.Zerg")
                {
                    ((StarCraft.Zerg)i).Attack();
                }
                else if(i.GetType().ToString() == "FirstProject.Protoss")
                {
                    ((StarCraft.Protoss)i).Attack();
                }
                */
                Console.WriteLine(al.i);
            }


            /*
            foreach(int i in al) //var, Object, int를 사용가능
            {
              Console.WriteLine(i);
            }
            */
               //var는 타입을 찾아준다? int로 
               //모든 타입을 var로 사용 가능
               //int로 문자열을 바꿔준다 생각
               //Object 는 타입 캐스팅이 이루어진다
               //타입을 바꿔버림 @@
            /*
            foreach (int i in al) //같은 타입의 변수 사용가능
            {
                Console.WriteLine(i); 
            }
            */



        }
    }
}
