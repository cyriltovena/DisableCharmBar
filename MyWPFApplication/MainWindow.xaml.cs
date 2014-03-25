using System;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Interop;

namespace MyWPFApplication
{
    public partial class MainWindow : Window
    {
        [DllImport("DisableCharmbar.dll", EntryPoint = "DisableCharmbar"
, ExactSpelling = false, CallingConvention = CallingConvention.Cdecl)]
        static extern bool DisableCharmbar(IntPtr hWnd);

        public MainWindow()
        {
            InitializeComponent();
            this.Loaded += (sender, args) => DisableCharmbar(new WindowInteropHelper(this).Handle);
        }
    }
}
