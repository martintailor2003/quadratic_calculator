using System;

namespace Space
{
    class main{
        static void Main(string[] args)
        {
            Console.WriteLine("\nQuadratic calculator\n");
            while (true){
                Console.WriteLine("Enter A:.");
                string? sa = Console.ReadLine();
                Console.WriteLine("\nEnter B:. ");
                string? sb = Console.ReadLine();
                Console.WriteLine("\nEnter C:. ");
                string? sc = Console.ReadLine();

                int a = Int32.Parse(sa??"0");
                int b = Int32.Parse(sb??"0");
                int c = Int32.Parse(sc??"0");

                string answer = calc(a,b,c);
                Console.WriteLine("\n{0}",answer);
                Console.WriteLine("\nPress r to reset  or any other key to quit:. ");
                string ?r = Console.ReadLine();
                if (r != "r"){
                    break;
                }
            
            }
        }
        static string calc(int a, int b, int c)
        {
            if(b*b-4*a*c < 0){
                return "No valid solution";
            }
            double root = Math.Sqrt(b*b-4*a*c);
            if(root%1 != 0){
                return "No valid solution";
            }
            //continue the calculation if valid solution
            float x1 = ((Convert.ToSingle(-b) + Convert.ToSingle(Math.Sqrt(b*b-4*a*c))) / Convert.ToSingle(2*a) );
            float x2 = ((Convert.ToSingle(-b) - Convert.ToSingle(Math.Sqrt(b*b-4*a*c))) / Convert.ToSingle(2*a) );
            string final_answer = "Solutions: x1=" + x1 + " x2=" + x2;

            return final_answer;
        }
    }
}