using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp1
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Esc_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
        private void Info_Developer(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("Разработчик - Студент группы ПО-4 Коташевич Станислав Николаевич");
        }
        private void Green_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Зелёный фон";
        }
        private void Blue_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Синий фон";
        }
        private void Yellow_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Жёлтый фон";
        }
        private void Purple_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Фиолетовый фон";
        }
        private void White_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Белый фон";
        }
        private void Dev_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Информация о разработчике";
        }
        private void Esc_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Закрыть окно";
        }
        private void Color_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "Выбрать цвет фона";
        }
        private void Clear_info(object sender, MouseEventArgs e)
        {
            lbl.Text = "";
        }

        private void Color(object sender, EventArgs e)
        {
            if (sender == Gr || sender == Gre)
                Background = new SolidColorBrush(Colors.Green);
            else if (sender == Bl || sender == Blu)
                Background = new SolidColorBrush(Colors.Blue);
            else if (sender == Ye || sender == Yel)
                Background = new SolidColorBrush(Colors.Yellow);
            else if (sender == Pu || sender == Pur)
                Background = new SolidColorBrush(Colors.Purple);
            else if (sender == Wh || sender == Whi)
                Background = new SolidColorBrush(Colors.White);
        }
    }
}