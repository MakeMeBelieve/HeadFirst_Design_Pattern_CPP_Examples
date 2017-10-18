using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
using System.Data.OleDb;

namespace _90yil
{
    public partial class Hayat : Form
    {
        public Hayat()
        {
            InitializeComponent();

            dataGridView1.ColumnHeadersHeight.Equals(10);
            string pathconn = "Provider = Microsoft.jet.OLEDB.4.0; Data source= D:\\90yilinHaftalari.xls ;Extended Properties=\"Excel 8.0;HDR= yes;\";";
            OleDbConnection baglanti = new OleDbConnection(pathconn);            
            baglanti.Open();
            OleDbDataAdapter da = new OleDbDataAdapter("SELECT * FROM [Sayfa1$]", baglanti);
            DataTable dt = new DataTable();
            da.Fill(dt);
            dataGridView1.DataSource = dt.DefaultView;
            baglanti.Close();
            for(int i = 0; i < dataGridView1.Columns.Count; i++)
{
                dataGridView1.Columns[i].AutoSizeMode = DataGridViewAutoSizeColumnMode.AllCells;
            }
            
            dataGridView1.ColumnHeadersVisible.Equals(false);
            dataGridView1.RowHeadersVisible.Equals(false);
            



        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            
        }

        private void Hayat_Load(object sender, EventArgs e)
        {

   

        }

        private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
