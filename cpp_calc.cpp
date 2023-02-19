#include <iostream>
#include <string>
#include <cmath>
using namespace std;


string calc_function(int a, int b, int c)
{
    string answer;

    //return if no solution
    if ((b*b - 4*a*c) < 0)
    {
        return "No valid solution.";
    }

    int root = sqrt(b*b-4*a*c);
    if ( (root%1) != 0.0)
    {
        return "No valid solution.";
    }

    //continue the calculation if there is a solution
    float x1 = ((-b) + sqrt(b*b-4*a*c))/(2*a);
    float x2 = ((-b) - sqrt(b*b-4*a*c))/(2*a);

    answer = "\nSolution:  x1="+to_string(x1) + " x2="+to_string(x2) + "\n";
    return answer;
}


int main()
{
    int a,b,c;
    string result;
    cout << "\nQuadratic calculator\n";

    while (true)
    {
        //get input values
        cout << "\nEnter A: ";
        cin >> a;
        cout << "\nEnter B: ";
        cin >> b;
        cout << "\nEnter C: ";
        cin >> c;

        result = calc_function(a,b,c);

        cout << result;
        cout << "\nPress r to reset or any other key to exit: ";

        string reset;
        cin >> reset;
        if (reset != "r"){
            break;
        }

    }

}