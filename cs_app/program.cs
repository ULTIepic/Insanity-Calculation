using System;
using System.Diagnostics;
using System.IO;

class Program
{
    static void Main()
    {
        int result = 2 + 2;
        File.WriteAllText("cs_to_c.txt", result.ToString());
        Console.WriteLine("C# → C with value: " + result);
        Process.Start("c_app.exe");
    }
}
