using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Configurator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void AmazonServer_CheckedChanged(object sender, EventArgs e)
        {
         
            

            if (AmazonServer.Checked)
            {
                label1.Show();
                label2.Show();
                label3.Show();
                label4.Show();
                label5.Show();

                ServerXpos.Show();
                ServerYpos.Show();
                Disk.Show();
                Port.Show();
                ResX.Show();
                ResY.Show();

            }

            else
            {
                label1.Hide();
                label2.Hide();
                label3.Hide();
                label4.Hide();
                label5.Hide();

                ServerXpos.Hide();
                ServerYpos.Hide();
                Disk.Hide();
                Port.Hide();
                ResX.Hide();
                ResY.Hide();
            }
            
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {

           

        }

        private void ServerXpos_TextChanged(object sender, EventArgs e)
        {

        }

        private void ServerYpos_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void ResY_TextChanged_1(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void ResX_TextChanged_1(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void Disk_TextChanged(object sender, EventArgs e)
        {

        }

        private void Port_TextChanged(object sender, EventArgs e)
        {

        }

       
    }
}
