namespace Configurator
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.AmazonServer = new System.Windows.Forms.RadioButton();
            this.AmazonConsole = new System.Windows.Forms.RadioButton();
            this.ServerXpos = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.ServerYpos = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.ResX = new System.Windows.Forms.TextBox();
            this.ResY = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.Disk = new System.Windows.Forms.TextBox();
            this.Port = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // AmazonServer
            // 
            this.AmazonServer.AutoSize = true;
            this.AmazonServer.Location = new System.Drawing.Point(29, 30);
            this.AmazonServer.Name = "AmazonServer";
            this.AmazonServer.Size = new System.Drawing.Size(94, 17);
            this.AmazonServer.TabIndex = 0;
            this.AmazonServer.TabStop = true;
            this.AmazonServer.Text = "AmazonServer";
            this.AmazonServer.UseVisualStyleBackColor = true;
            this.AmazonServer.CheckedChanged += new System.EventHandler(this.AmazonServer_CheckedChanged);
            // 
            // AmazonConsole
            // 
            this.AmazonConsole.AutoSize = true;
            this.AmazonConsole.Location = new System.Drawing.Point(163, 30);
            this.AmazonConsole.Name = "AmazonConsole";
            this.AmazonConsole.Size = new System.Drawing.Size(104, 17);
            this.AmazonConsole.TabIndex = 1;
            this.AmazonConsole.TabStop = true;
            this.AmazonConsole.Text = "Amazon Console";
            this.AmazonConsole.UseVisualStyleBackColor = true;
            this.AmazonConsole.CheckedChanged += new System.EventHandler(this.radioButton2_CheckedChanged);
            // 
            // ServerXpos
            // 
            this.ServerXpos.Location = new System.Drawing.Point(128, 59);
            this.ServerXpos.Name = "ServerXpos";
            this.ServerXpos.Size = new System.Drawing.Size(100, 20);
            this.ServerXpos.TabIndex = 2;
            this.ServerXpos.TextChanged += new System.EventHandler(this.ServerXpos_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(49, 66);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(61, 13);
            this.label1.TabIndex = 3;
            this.label1.Text = "X cordinate";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(49, 100);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(61, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "Y cordinate";
            // 
            // ServerYpos
            // 
            this.ServerYpos.Location = new System.Drawing.Point(128, 93);
            this.ServerYpos.Name = "ServerYpos";
            this.ServerYpos.Size = new System.Drawing.Size(100, 20);
            this.ServerYpos.TabIndex = 5;
            this.ServerYpos.TextChanged += new System.EventHandler(this.ServerYpos_TextChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(49, 185);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(57, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "Resolution";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(49, 157);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(26, 13);
            this.label4.TabIndex = 7;
            this.label4.Text = "Port";
            this.label4.Click += new System.EventHandler(this.label4_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(49, 127);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(28, 13);
            this.label5.TabIndex = 8;
            this.label5.Text = "Disk";
            this.label5.Click += new System.EventHandler(this.label5_Click);
            // 
            // textBox1
            // 
            this.ResX.Location = new System.Drawing.Point(128, 177);
            this.ResX.Name = "textBox1";
            this.ResX.Size = new System.Drawing.Size(100, 20);
            this.ResX.TabIndex = 9;
            this.ResX.TextChanged += new System.EventHandler(this.ResX_TextChanged_1);
            // 
            // textBox2
            // 
            this.ResY.Location = new System.Drawing.Point(264, 177);
            this.ResY.Name = "textBox2";
            this.ResY.Size = new System.Drawing.Size(100, 20);
            this.ResY.TabIndex = 10;
            this.ResY.TextChanged += new System.EventHandler(this.ResY_TextChanged_1);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(240, 180);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(14, 13);
            this.label6.TabIndex = 11;
            this.label6.Text = "X";
            this.label6.Click += new System.EventHandler(this.label6_Click);
            // 
            // textBox3
            // 
            this.Disk.Location = new System.Drawing.Point(128, 123);
            this.Disk.Name = "textBox3";
            this.Disk.Size = new System.Drawing.Size(100, 20);
            this.Disk.TabIndex = 12;
            this.Disk.TextChanged += new System.EventHandler(this.Disk_TextChanged);
            // 
            // textBox4
            // 
            this.Port.Location = new System.Drawing.Point(128, 151);
            this.Port.Name = "textBox4";
            this.Port.Size = new System.Drawing.Size(100, 20);
            this.Port.TabIndex = 13;
            this.Port.TextChanged += new System.EventHandler(this.Port_TextChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(716, 401);
            this.Controls.Add(this.Port);
            this.Controls.Add(this.Disk);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.ResY);
            this.Controls.Add(this.ResX);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.ServerYpos);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.ServerXpos);
            this.Controls.Add(this.AmazonConsole);
            this.Controls.Add(this.AmazonServer);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RadioButton AmazonServer;
        private System.Windows.Forms.RadioButton AmazonConsole;
        private System.Windows.Forms.TextBox ServerXpos;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox ServerYpos;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox ResX;
        private System.Windows.Forms.TextBox ResY;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox Disk;
        private System.Windows.Forms.TextBox Port;
    }
}

