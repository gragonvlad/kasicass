using System;
using System.Windows;

namespace Petzold.SayHello
{
    class SayHello
    {
        [STAThread]
        public static void Main()
        {
            Window win = new Window();
            win.Title = "Say Hello - 你好";
            win.Show();

            Application app = new Application();
            app.Run();
        }
    }
}