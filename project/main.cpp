#include <iostream>
#include<graphics.h>
#include "emoji.h"
#include "flag.h"
#include "animated_circle.h"
#include "bar_chart.h"
#include "exit_output.h"

using namespace std;

bool stayInProgram = true;

void pattern(string input)
{
    cout<<"-----     "<<input<<endl;
}

void invoke(void (*func)())
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

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
        cout<<"Computer Graphics Project"<<endl;
        pattern("1. Flag");
        pattern("2. Emoji");
        pattern("3. Animated Circle");
        pattern("4. Bar Chart");
        pattern("5. Exit");

        pattern("Enter a Number to Get a 2D Graphical Image");
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
        default:
            stayInProgram = false;
            break;
        }

    }

    return 0;
}
