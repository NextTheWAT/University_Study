using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinGu
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void Button1_Click(object sender, EventArgs e)
        {
            Console.Write("시작 단 : ");
            int start = Int32.Parse(textBox1.Text);
            Console.Write("끝 단 : ");
            int end = Int32.Parse(textBox2.Text);
            string result = "";

            for (int i = start; i <= end; i++)
            {
                Console.WriteLine();
                Console.WriteLine("{0}단", i);
                for (int j = 1; j <= 9; j++)
                {
                    //Console.WriteLine("{0} x {1} = {2}", i, j, i * j);
                    result = i + "*" + j + "=" + i * j;
                    listBox1.Items.Add(result);
                }
            }
        }

    }
}
