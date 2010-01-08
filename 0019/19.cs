using System;
using System.Text;

    class Program
    {
        static void Main(string[] args)
        {
            System.DateTime d = new DateTime(1901, 1, 1);
            int count = 0;
            while (d.Year < 2001)
            {
                if (d.DayOfWeek == DayOfWeek.Sunday)
                    count++;
                d = d.AddMonths(1);
            }
            Console.WriteLine(count);
        }
    }
