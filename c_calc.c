#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>
#include <memory.h>

char* calc_functions(int a,int b,int c)
{
    int calc_result;
    //check for valid roots
    if (b*b-(4*a*c) < 0)
    {
        return "No valid solution.";
    }
    calc_result = sqrt((b*b-(4*a*c)));
    if (calc_result%1 != 0){
        return "No valid solution.";
    }
    

    float x1 = ((-b) + sqrt((b*b-(4*a*c))) )/ (2*a);
    float x2 = ((-b) - sqrt((b*b-(4*a*c))) )/ (2*a);

    char answer1[64];
    char answer2[64];
    sprintf(answer1, "%f", x1);
    sprintf(answer2, "%f", x2);

    char* final_answer = (char*) malloc(9 + strlen(answer1)+strlen(answer2)+25);
    strcpy(final_answer, "Solutions: ");
    strcat(final_answer, "x1=");
    strcat(final_answer, answer1);
    strcat(final_answer, " x2=");
    strcat(final_answer, answer2);

    return final_answer;
}

int main()
{   
    printf("\nQuadratic calculator\n");
    while (1)
    {
        // Initialize
        int a;
        int b;
        int c;
        //Get values
        printf("\n");
        printf("Enter A: ");
        scanf("%d", &a);
        printf("\nEnter B: ");
        scanf("%d", &b);
        printf("\nEnter C: ");
        scanf("%d", &c);

        char* result = calc_functions(a,b,c);
        printf("\n%s", result);
        free(result);

        printf("\nPress r to reset or any other key to exit: ");
        char r[2];
        scanf("%s", &r);
        if (strcmp(r, "r")!=0 && strcmp(r, "R")!=0){
            break;

        }

    }

}
