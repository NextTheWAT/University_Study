﻿using System;
using GuGuDLL;

namespace _3주차
{/*
    class Unit
    {
        private int hp = 100; //멤버변수는 private으로 하는게 좋다
                              //그리고 외부에서 접근할수 있도록 set, get을 사용하는게 좋다
        public int HP
        {
            set
            {
                this.hp = value;
                //if(value < 100) // 이런식으로 조건문도 달수있다 100이하의 값
            }
            get
            {
                return hp;
            }
        public virtual void Attack()
        {
            Console.WriteLine("공격합니다.");
        }
    }
    class Zerg : Unit //유닛을 상속받는다 저그가
    {
        
        public override void Attack() //멤버 함수
                                        //오버라이드를 해줘야함
        {
            Console.WriteLine("저그가 공격합니다.");    //이게 되는게아니라 Unit에 있는 Attack이 사용된다
        }
    }
    class Protoss : Unit //유닛을 상속받는다 저그가
    {
        public override void Attack() //멤버 함수
                                      //오버라이드를 해줘야함
        {
            Console.WriteLine("저그가 공격합니다.");    //이게 되는게아니라 Unit에 있는 Attack이 사용된다
        }
    }
    */

    /*
    class Program
    {
        public void Main(String[] args)
        {
            //Unit u1 = new Zerg();
            //Unit u2 = new Protoss();

            //u1.Attack();
            //u2.Attack();

            GuGuDan Gu = new GuGuDan();

            Gu.Print();
            
        }
    }
    */



    public class A
    {
        public void main(String[] args)
        {
            public int a = 10;

        Console.WriteLine("a = " + a);
        }
    }
}
