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

namespace ТРИПС_1._2_Лаба
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

        private void Change_Colors(object sender, RoutedEventArgs e)
        {
            switch(Colors.SelectedIndex)
            {
                case 0:
                    DrW.Color = (Color)
                        ColorConverter.ConvertFromString("Red");
                    break;
                case 1:
                    DrW.Color = (Color)
                        ColorConverter.ConvertFromString("Green");
                    break;
                case 2:
                    DrW.Color = (Color)
                        ColorConverter.ConvertFromString("Blue");
                    break;

            }

        }

        private void Size_Brush(object sender, RoutedEventArgs e)
        {
            var slider = sender as Slider;
            double value = slider.Value;
            DrW.Width = value;
            DrW.Height = value;

        }

        private void Click_Clear(object sender, RoutedEventArgs e)
        {
            this.Draw.Strokes.Clear();
        }

        private void RadioBotton_Click(object sender, RoutedEventArgs e)
        {
            var radiobutton = sender as RadioButton;
            string radioPressed = radiobutton.Content.ToString();
            if(radioPressed == "Рисование")
            {
                this.Draw.EditingMode = InkCanvasEditingMode.Ink;
            } else if(radioPressed == "Удаление")
            {
                this.Draw.EditingMode = InkCanvasEditingMode.EraseByStroke;
            } else if (radioPressed == "Редактирование")
            {
                this.Draw.EditingMode = InkCanvasEditingMode.EraseByPoint;
            }
        }
    }
}