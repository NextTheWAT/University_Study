using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace StarCraftGame
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Add("Terran이 공격합니다. 대상을 선택하세요: ");
            listBox1.Items.Add("0번 Zerg, 1번 Protoss");
            int sel = Int32.Parse(textBox1.Text);
            if (sel == 0)
            {
                listBox1.Items.Add("Zerg를 공격합니다.");
            }
            else if(sel == 1)
            {
                listBox1.Items.Add("Protoss를 공격합니다.");
            }
            
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
