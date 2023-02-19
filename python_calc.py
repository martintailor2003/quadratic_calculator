import math

class Main():

    def main(self):
        print("\nQuadratic calculator")
        
        while True:
            print("\nEnter A:. ")
            a = int(input())
            print("\nEnter B:. ")
            b = int(input())
            print("\nEnter C:. ")
            c = int(input())

            result = self.calc_function(a,b,c)
            print(result,"\nPress r to reset or any other key to quit:.")
            r = str(input())
            if r != "r":
                break

    def calc_function(self,a,b,c):
        #check for valid solution
        if(b*b-4*a*c <0):
            return "No valid solution.\n"
        root = math.sqrt(b*b-4*a*c)
        if root%1 != 0:
            return "Not valid solution.\n"
        
        #continue the calculation if solution
        x1 = ((-b) + math.sqrt(b*b-4*a*c))/(2*a)
        x2 = ((-b) - math.sqrt(b*b-4*a*c))/(2*a)
        
        solution = f"\nSolution: x1={x1} x2={x2}\n"
        return solution
        

if __name__ == "__main__":
    mainClass = Main()
    mainClass.main()