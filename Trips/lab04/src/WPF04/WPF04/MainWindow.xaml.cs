using System.Windows;

namespace Trips_lab03
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void TextBox_MouseEnter(object sender, System.Windows.Input.MouseEventArgs e)
        {
            (sender as FrameworkElement).Style = (Style)Resources["Selected"];
        }

        private void TextBox_MouseLeave(object sender, System.Windows.Input.MouseEventArgs e)
        {
            (sender as FrameworkElement).Style = (Style)Resources["NotSelected"];
        }
    }
}
