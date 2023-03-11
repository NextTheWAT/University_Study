using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1주차_복습
{
    class Program
    {
        #region 사칙연산
        public void math()
        {
            Console.Write("a값을 입력하세요: ");
            int a = Int32.Parse(Console.ReadLine());
            Console.Write("b값을 입력하세요: ");
            int b = Int32.Parse(Console.ReadLine());
            Console.WriteLine("0번 - 더하기");
            Console.WriteLine("1번 - 빼기");
            Console.WriteLine("2번 - 곱하기");
            Console.WriteLine("3번 - 나누기");
            Console.Write("선택 : ");
            int c = Int32.Parse(Console.ReadLine());

            switch (c)
            {
                case 0:
                    Console.WriteLine("값 : {0}", a + b);
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
        }
        #endregion

        #region 구구단
        public void GuGuDan()
        {
            Console.Write("시작 단을 입력하세요: ");
            int start = Int32.Parse(Console.ReadLine());
            Console.Write("끝 단을 입력하세요 : ");
            int end = Int32.Parse(Console.ReadLine());

            for(int i=start; i<=end; i++)
            {
                for(int j=1; j<=9; j++)
                {
                    Console.WriteLine("{0} x {1} = {2}", i, j, i * j);
                }
                Console.WriteLine();
            }
            Console.WriteLine("{0}단 부터 {1}단 까지", start, end);
        }
        #endregion

        #region 칸 이동 게임
        public void canGame()
        {
            Console.WriteLine("게임을 시작하겠습니다.");

            Console.Write("이름을 입력해주세요: ");
            string name = Console.ReadLine();
            Console.WriteLine();
            Console.WriteLine("당신의 이름은 {0} 입니다.", name);
            Console.WriteLine();
            Console.WriteLine();

            int sel = 0;
            int up = 0;
            int down = 0;
            int right = 0;
            int left = 0;
            bool gam = true;

            while (gam)
            {
                Console.WriteLine("0번은 오른쪽으로 한칸");
                Console.WriteLine("1번은 왼쪽으로 한칸");
                Console.WriteLine("2번은 위쪽으로 한칸");
                Console.WriteLine("3번은 아래쪽으로 한칸");
                Console.WriteLine("4번은 종료");
                Console.Write("번호를 선택해주세요: ");
                sel = Int32.Parse(Console.ReadLine());
                Console.WriteLine();
                Console.WriteLine();
                switch (sel)
                {
                    case 0:
                        Console.WriteLine("오른쪽으로 한 칸 이동합니다.");
                        if(left > 0)
                        {
                            left = left - 1;
                        }
                        else
                        {
                            right = right + 1;
                        }
                        break;
                    case 1:
                        Console.WriteLine("왼쪽으로 한 칸 이동합니다.");
                        if (right > 0)
                        {
                            right = right - 1;
                        }
                        else
                        {
                            left = left + 1;
                        }
                        break;
                    case 2:
                        Console.WriteLine("위쪽으로 한 칸 이동합니다.");
                        if (down > 0)
                        {
                            down = down - 1;
                        }
                        else
                        {
                            up = up + 1;
                        }
                        break;
                    case 3:
                        Console.WriteLine("아래쪽으로 한 칸 이동합니다.");
                        if (up > 0)
                        {
                            up = up - 1;
                        }
                        else
                        {
                            down = down + 1;
                        }
                        break;
                    case 4:
                        Console.WriteLine("게임종료");
                        gam = false;
                        break;
                }
                Console.WriteLine("현재 이동한 칸 - 오른쪽 {0}, 왼쪽 {1}, 위쪽{2}, 아래쪽{3}", right, left, up, down);
                Console.WriteLine();
                Console.WriteLine();
            }

        }
        #endregion

        #region 주사위게임
        public void diceGame()
        {
            Random Ran = new Random();

            Console.WriteLine("컴퓨터와 랜덤 주사위 게임");
            Console.WriteLine();

            bool gam = true;
            int sel = 0;
            int cumcount = 0;
            int mecount = 0;

            while (gam)
            {
                int medice = Ran.Next() % 6 + 1;
                int cumdice = Ran.Next() % 6 + 1;

                Console.WriteLine("0번 - 주사위 굴리기");
                Console.WriteLine("1번 - 현재 스코어 확인");
                Console.WriteLine("2번 - 종료");
                Console.Write("선택 : ");
                sel = Int32.Parse(Console.ReadLine());
                Console.WriteLine();
                switch (sel)
                {
                    case 0:
                        Console.WriteLine("컴퓨터 {0} , 나 {1}", cumdice, medice);
                        if(cumdice > medice)
                        {
                            Console.WriteLine("컴퓨터 승");
                            cumcount = cumcount + 1;
                            Console.WriteLine();
                        }
                        else if(cumdice == medice)
                        {
                            Console.WriteLine("무승부");
                            Console.WriteLine();
                        }
                        else
                        {
                            Console.WriteLine("나 승");
                            Console.WriteLine();
                            mecount = mecount + 1;
                        }
                        break;
                    case 1:
                        Console.WriteLine("컴퓨터 스코어 - {0}", cumcount);
                        Console.WriteLine("나 스코어 - {0}", mecount);
                        Console.WriteLine();
                        break;

                    case 2:
                        Console.WriteLine("게임 종료");
                        gam = false;
                        break;
                }
            }

        }
        #endregion

        static void Main(String[] args)
        {
            Program Pro = new Program();

            //Pro.math();

            //Pro.GuGuDan();

            //Pro.canGame();

            Pro.diceGame();

        }


    }
}
