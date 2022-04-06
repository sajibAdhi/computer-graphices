#include <iostream>
#include<graphics.h>
#include "emoji.h"
#include "flag.h"
#include "animated_circle.h"
#include "custom_chart.h"
#include "exit_output.h"
#include "name.h"

using namespace std;

bool stayInProgram = true;

void pattern(string input)
{
    cout<<"\t\t\t-----     "<<input<<endl;
}

void invoke(void (*func)())
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    name();
    exit_output();
    func();

    getch();
    closegraph();

}

int main()
{
    int x;
    while(stayInProgram)
    {
        system("CLS");
        cout<<"\t\t\t<<<<<<<<<< Computer Graphics Project >>>>>>>>>"<<endl;
        cout<<"\t\t\t<<<<<<<<<<        Sjaib Adhikary     >>>>>>>>>"<<endl;
        cout<<"\t\t\t<<<<<<<<<<        CSE1901016103      >>>>>>>>>"<<endl;
        cout<<"\t\t\t<<<<<<<<<<        16A2               >>>>>>>>>"<<endl;
        pattern("1. Flag");
        pattern("2. Emoji");
        pattern("3. Animated Circle");
        pattern("4. Bar Chart");
        pattern("5. Pie Chart");

        pattern("Enter a Number to Get a 2D Graphical Image");
        pattern("Press Any Key To Exit");
        cin>>x;

        switch(x)
        {
        case 1:
            invoke(&flag);
            break;
        case 2:
            invoke(&emoji);
            break;
        case 3:
            invoke(&animated_circle);
            break;
        case 4:
            invoke(&bar_chart);
            break;
        case 5:
            invoke(&pie_chart);
            break;
        default:
            stayInProgram = false;
            break;
        }

    }

    exit(0);
    return 0;
}
