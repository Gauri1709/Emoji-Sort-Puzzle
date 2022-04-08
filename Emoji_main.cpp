#include"Emoji_sort.cpp"
int main(){
    char c;
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    cleardevice();
 //   upside_down(100,100);
    POINT cursor;
    loadingpage();
    delay(1000);
    cleardevice();
    initwindow(700,500);
    level_page(cursor);
    getch();
    closegraph();
    return 0;
}

