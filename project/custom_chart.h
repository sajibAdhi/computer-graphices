void bar_chart()
{

    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    outtextxy(275,0,"BAR GRAPH");

    setlinestyle(SOLID_LINE,0,2);
    /* Draw X and Y Axis */
    line(90,410,90,50);
    line(90,410,590,410);
    line(85,60,90,50);
    line(95,60,90,50);
    line(585,405,590,410);
    line(585,415,590,410);

    outtextxy(65,60,"Y");
    outtextxy(570,420,"X");
    outtextxy(70,415,"O");
    /* Draw bars on screen */
    setfillstyle(XHATCH_FILL, RED);
    bar(150,80,200,410);
    bar(225,100,275,410);
    bar(300,120,350,410);
    bar(375,170,425,410);
    bar(450,135,500,410);
}

void pie_chart()
{
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    outtextxy(220,50,"PIE CHART");
    /* Setting cordinate of center of circle */
    int x = getmaxx()/2;
    int y = 300;

    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    setfillstyle(SOLID_FILL, RED);
    pieslice(x, y, 0, 60, 120);
    outtextxy(x + 140, y - 70, "FOOD");

    setfillstyle(SOLID_FILL, YELLOW);
    pieslice(x, y, 60, 160, 120);
    outtextxy(x - 30, y - 170, "RENT");

    setfillstyle(SOLID_FILL, GREEN);
    pieslice(x, y, 160, 220, 120);
    outtextxy(x - 250, y, "ELECTRICITY");

    setfillstyle(SOLID_FILL, BROWN);
    pieslice(x, y, 220, 360, 120);
    outtextxy(x, y + 150, "SAVINGS");
}
