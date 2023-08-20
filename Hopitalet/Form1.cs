using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Hopitalet
{
    public partial class Form1 : Form
    {

        //Enfermedades
        // (A) Bronquitis
        // (B) Infeccion de oido
        // (C) Sinusitis
        // (D) Influenza
        // (E) Anemia

        public Form1()
        {

            InitializeComponent();


        }

        private void Diagnostico_Click(object sender, EventArgs e)
        {

            //Bonquitis
            if (rbtnQ1_2.Checked == true)
            {
                if (rbtnQ2_3.Checked == true)
                {
                    if (rbtnQ3_1.Checked == true)
                    {
                        if (rbtnQ4_1.Checked == true)
                        {
                            if (rbtnQ5_2.Checked == true)
                                MessageBox.Show("Ustes tiene  Bronquitis, Consulte a su medico");
                        }
                    }
                }

            }
            
 
 
            //Infeccion de Oido
            if (rbtnQ1_3.Checked == true)
            {
                if (rbtnQ2_1.Checked == true)
                {
                    if (rbtnQ3_1.Checked == true)
                    {
                        if (rbtnQ4_3.Checked == true)
                        {
                            if (rbtnQ5_1.Checked == true)
                                MessageBox.Show("Ustes tiene  Infeccion de Oido, Consulte a su medico");
                        }
                    }
                }

            }


            // Sinusistis
            if (rbtnQ1_3.Checked == true)
            {
                if (rbtnQ2_3.Checked == true)
                {
                    if (rbtnQ3_1.Checked == true)
                    {
                        if (rbtnQ4_1.Checked == true)
                        {
                            if (rbtnQ5_3.Checked == true)
                                MessageBox.Show("Ustes tiene  Sinusitis, Consulte a su medico");
                        }
                    }
                }

            }


            //Influenza
            if (rbtnQ1_2.Checked == true)
            {
                if (rbtnQ2_1.Checked == true)
                {
                    if (rbtnQ3_2.Checked == true)
                    {
                        if (rbtnQ4_2.Checked == true)
                        {
                            if (rbtnQ5_3.Checked == true)
                                MessageBox.Show("Ustes tiene  Influenza, Consulte a su medico");
                        }
                    }
                }
            }


            //Anemia
            if (rbtnQ1_3.Checked == true)
            {
                if (rbtnQ2_1.Checked == true)
                {
                    if (rbtnQ3_2.Checked == true)
                    {
                        if (rbtnQ4_3.Checked == true)
                        {
                            if (rbtnQ5_1.Checked == true)
                                MessageBox.Show("Ustes tiene  Anemia, Consulte a su medico");
                        }
                    }
                }
 
            }

            if (rbtnQ1_1.Checked && rbtnQ1_2.Checked && rbtnQ1_3.Checked && rbtnQ2_1.Checked && rbtnQ2_2.Checked && rbtnQ2_3.Checked && rbtnQ3_1.Checked && rbtnQ3_2.Checked && rbtnQ3_3.Checked && rbtnQ4_1.Checked && rbtnQ4_2.Checked && rbtnQ4_3.Checked && rbtnQ5_1.Checked && rbtnQ5_2.Checked && rbtnQ5_3.Checked == true)
            {
                MessageBox.Show("Faltan Casillas por selecionar");
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void lbl1_Click(object sender, EventArgs e)
        {

        }

        private void rbtnQ1_2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }
    }
}
