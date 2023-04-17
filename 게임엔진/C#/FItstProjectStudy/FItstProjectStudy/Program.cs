using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StarCraft
{
    public class Unit
    {
        public void gameStart()
        {
            Console.WriteLine("StarCraft게임을 시작합니다.");
        }
    }
    class Zerg : Unit
    {
        public void Zerg_Attack()
        {
            int Terran_Attack =0;
            int Protoss_Attack = 0;
            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("Zerg가 공격합니다.");
            Console.WriteLine("공격 상대를 지정하세요.");
            Console.WriteLine("0번 Terran, 1번 Protoss");
            Console.Write("선택 : ");
            int sel = Int32.Parse(Console.ReadLine());
            if (sel == 0)
            {
                Terran_Attack = +1;
                Console.WriteLine("Zerg가 Terran을 공격합니다.");
                Console.WriteLine("Zerg가 Terran공격 횟수 {0}", Terran_Attack);
                Console.WriteLine();
                Console.WriteLine();
            }
            else if (sel == 1)
            {
                Protoss_Attack = +1;
                Console.WriteLine("Zerg가 Protoss를 공격합니다.");
                Console.WriteLine("Zerg가 Protoss공격 횟수 {0}", Protoss_Attack);
                Console.WriteLine();
                Console.WriteLine();
            }
        }
    }
    class Protoss : Unit
    {
        public void Protoss_Attack()
        {
            int Terran_Attack = 0;
            int Zerg_Attack = 0;
            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("Protoss가 공격합니다.");
            Console.WriteLine("공격 상대를 지정하세요.");
            Console.WriteLine("0번 Terran, 1번 Zerg");
            Console.Write("선택 : ");
            int sel = Int32.Parse(Console.ReadLine());
            if (sel == 0)
            {
                Terran_Attack = +1;
                Console.WriteLine("Protoss가 Terran을 공격합니다.");
                Console.WriteLine("Protoss가 Terran공격 횟수 {0}", Terran_Attack);
                Console.WriteLine();
                Console.WriteLine();
            }
            else if (sel == 1)
            {
                Zerg_Attack = +1;
                Console.WriteLine("Protoss가 Zerg를 공격합니다.");
                Console.WriteLine("Protoss가 Zerg공격 횟수 {0}", Zerg_Attack);
                Console.WriteLine();
                Console.WriteLine();
            }
        }
    }

    class Terran : Unit
    {
        public void Terran_Attack()
        {
            int Protoss_Attack = 0;
            int Zerg_Attack = 0;
            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("Terran이 공격합니다.");
            Console.WriteLine("공격 상대를 지정하세요.");
            Console.WriteLine("0번 Protoss, 1번 Zerg");
            Console.Write("선택 : ");
            int sel = Int32.Parse(Console.ReadLine());
            if (sel == 0)
            {
                Protoss_Attack = +1;
                Console.WriteLine("Terran이 Protoss을 공격합니다.");
                Console.WriteLine("Terran이 Protoss공격 횟수 {0}", Protoss_Attack);
                Console.WriteLine();
                Console.WriteLine();
            }
            else if (sel == 1)
            {
                Zerg_Attack = +1;
                Console.WriteLine("Protoss가 Zerg를 공격합니다.");
                Console.WriteLine("Protoss가 Zerg공격 횟수 {0}", Zerg_Attack);
                Console.WriteLine();
                Console.WriteLine();
            }
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            Unit Game = new Unit();
            Zerg Z = new Zerg();
            Protoss P = new Protoss();
            Terran T = new Terran();

            bool gamesel = true;

            Game.gameStart();

            while (gamesel)
            {
                Console.WriteLine("0번 - Zerg가 공격");
                Console.WriteLine("1번 - Terran이 공격");
                Console.WriteLine("2번 - Protoss가 공격");
                Console.WriteLine("3번 - 게임 종료");
                Console.Write("선택 : ");
                int sel = Int32.Parse(Console.ReadLine());
                switch (sel)
                {
                    case 0:
                        Z.Zerg_Attack();
                        break;
                    case 1:
                        T.Terran_Attack();
                        break;
                    case 2:
                        P.Protoss_Attack();
                        break;
                    case 3:
                        gamesel = false;
                        break;
                }
            }

        }
    }
}
