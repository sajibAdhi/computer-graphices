void animated_circle()
{
    int x,y,i;
    x=getmaxx()/3;
    y=getmaxy()/3;

    while (!kbhit())
    {
        setcolor(rand());
        for (int i=0; i<20; i++)
            circle(x,y,i );
        setcolor(rand());
        for (int j=40; j<60; j++)
            circle(x,y,j);
        setcolor(rand());
        for (int k=70; k<90; k++)
            circle(x,y,k);
        setcolor(rand());
        for (int l=100; l<150; l++)
            circle(x,y,l);
        delay(200);
    }
}
