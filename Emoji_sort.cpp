#include<graphics.h>
#include<stdlib.h>
#include"Emoji_sort.h"

void init_hash(hash_table *h){
    int i;
    h->arr = (int*)(malloc(4*(sizeof(int))));
    for(i = 0; i < SIZE; i++)
        h->arr[i] = -1;
    return;
}

void insert_hash(hash_table *h, int value){
    int key = value % SIZE;
    if(h->arr[key] == -1){
        h->arr[key] = value;
    }
    return;
}

int size_hash(hash_table h){
    int k = 0, i;
    for( i = 0; i < SIZE; i++){
        if(h.arr[i] != -1)
            k++;
    }
    return k;
}
void traverse(hash_table h){
    int i;
    for(i = 0; i < SIZE; i++)
        printf("%d ", h.arr[i]);
    return;
}
void loadingpage(){
    cleardevice();
    delay(50);
    int x = getmaxx()/2;
    int y = getmaxy()/2;
    settextstyle(TRIPLEX_FONT,HORIZ_DIR, 3);
    setbkcolor(0);
    setcolor(4);
    int c = 150;
    for(int e = 0; e <30; e++){
        for(int i = 50; i < 100; i++){
            setcolor(3);
            settextstyle(SMALL_FONT, HORIZ_DIR, 10);
            outtextxy(x,y, "Loading...");
            settextstyle(SMALL_FONT,HORIZ_DIR,5);
            outtextxy(x+5, y+5, "Please wait...");
            circle(x, y, i);
            circle(x, y , c);
            c--;
            cleardevice();
        }
    }
    initwindow(800,500);
    settextstyle(TRIPLEX_FONT,HORIZ_DIR, 5);
    delay(50);
    setcolor(YELLOW);
  //  outtextxy(getmaxx()/2-200, getmaxy()/2-35, "EMOJI SORT PUZZLE");
    outtextxy(getmaxx()/2-240, getmaxy()/2-35, "E");
    delay(100);
    outtextxy(getmaxx()/2-195, getmaxy()/2-35, "M");
     delay(100);
    outtextxy(getmaxx()/2-135, getmaxy()/2-35, "O");
     delay(100);
    outtextxy(getmaxx()/2-85, getmaxy()/2-35, "J");
     delay(100);
    outtextxy(getmaxx()/2-50, getmaxy()/2-35, "I");
     delay(100);
    outtextxy(getmaxx()/2+10, getmaxy()/2-35, "S");
     delay(100);
    outtextxy(getmaxx()/2+50, getmaxy()/2-35, "O");
     delay(100);
    outtextxy(getmaxx()/2+100, getmaxy()/2-35, "R");
     delay(100);
    outtextxy(getmaxx()/2+150, getmaxy()/2-35, "T");
     delay(100);
    outtextxy(getmaxx()/2-125, getmaxy()/2+6, "P");
     delay(100);
    outtextxy(getmaxx()/2-85, getmaxy()/2+6, "U");
     delay(100);
    outtextxy(getmaxx()/2-35, getmaxy()/2+6, "Z");
     delay(100);
    outtextxy(getmaxx()/2+10, getmaxy()/2+6, "Z");
     delay(100);
    outtextxy(getmaxx()/2+55, getmaxy()/2+6, "L");
     delay(100);
     outtextxy(getmaxx()/2+100, getmaxy()/2+6, "E");

    return;
}

void init_emo(emo *e){
    e->x = 0;
    e->y = 0;
    e->emo_ptr = NULL;
    return;
}
void flask(int x, int y){
    setcolor(15);
    line(x-2,y,x+46,y);
    arc(x-2,y+5,90,270,6);
    arc(x+46,y+5,-90,90,6);
    line(x-2,y+10,x-2,y+180);
    line(x+46,y+10,x+46,y+180);
    arc(x+2,y+180,180,270,4);
    arc(x+42,y+180,-90,0,4);
    line(x+2,y+184,x+42,y+184);
    return;
}

int  upside_down(int x, int y){
    setfillstyle(SOLID_FILL,YELLOW);
    setcolor(14);
    circle(x,y,22);
    floodfill(x,y,14);
    setcolor(0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x-12,y+7,0,360,3,6);
    floodfill(x-12,y+7,0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x+10,y+7,0,360,3,6);
    floodfill(x+10,y+7,0);
    setlinestyle(0,0,2);
    arc(x,y,30,150,15);
    return 2;

}

int Expressionless(int x, int y){
    setfillstyle(SOLID_FILL,YELLOW);
    setcolor(14);
    circle(x,y,22);
    floodfill(x,y,14);
    setcolor(0);
    setlinestyle(0,0,2);
    line(x-17,y-5,x-8,y-5);
    setlinestyle(0,0,2);
    line(x+6,y-5,x+15,y-5);
    setlinestyle(0,0,2);
    line(x-7,y+8,x+7,y+8);
    return 1;

}

void upside_down_black(int x, int y){
    setfillstyle(SOLID_FILL,0);
    setcolor(0);
    circle(x,y,22);
    floodfill(x,y,0);
    setcolor(0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x-12,y+7,0,360,3,6);
    floodfill(x-12,y+7,0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x+10,y+7,0,360,3,6);
    floodfill(x+10,y+7,0);
    setlinestyle(0,0,2);
    arc(x,y,30,150,15);
    return ;
}
int  upside_up_sad(int x, int y){
    setfillstyle(SOLID_FILL,YELLOW);
    setcolor(14);
    circle(x,y,22);
    floodfill(x,y,14);
    setcolor(0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x-10,y-5,0,360,3,6);
    floodfill(x-10,y-5,0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x+10,y-5,0,360,3,6);
    floodfill(x+10,y-5,0);
    setlinestyle(0,0,2);
    arc(x - 1,y+20,30,150,15);
    return 3;

}
int  upside_up(int x, int y){
    setfillstyle(SOLID_FILL,YELLOW);
    setcolor(14);
    circle(x,y,22);
    floodfill(x,y,14);
    setcolor(0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x-10,y-5,0,360,3,6);
    floodfill(x-10,y-5,0);
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(0);
    ellipse(x+10,y-5,0,360,3,6);
    floodfill(x+10,y-5,0);
    setlinestyle(0,0,2);
    arc(x - 1,y+1,210,330,15);
    return 4;

}
void init_gameboard(gameboard *g, int num){
    g->number = num;
    g->A = (emo_stack*)(malloc(num *sizeof(emo_stack)));
    g->E = (emo*)(malloc(4 * sizeof(emo)));
    g->top1 = 0;
    g->top2 = 0;
    return;
}


void initStack(emo_stack *s, int x, int y){
    s->top = 0;
    s->e = (emo*)(malloc(STACK_SIZE_LIMIT *sizeof(emo)));
    s->xPos = x;
    s->yPos = y;
    s->flask_ptr = &flask;
    s->flask_ptr(x, y);
    return;
}

void insert_gameboard_stack(gameboard *G,int x, int y){
    while(G->top1 < G->number){
       initStack(&(G->A[G->top1]), x, y);
       x = x + 150;
       G->top1++;
    }
    return;
}
void insert_gameboard_emo(gameboard *G){
    while(G->top2 < 3){
        init_emo(&(G->E[G->top2]));
        G->top2++;
    }
    G->E[0].emo_ptr = &upside_down;
    G->E[1].emo_ptr = &Expressionless;
    G->E[2].emo_ptr = &upside_up;
    return;
}
int isEmpty(emo_stack s){
    if(s.top == 0)
        return 1;
    else
        return 0;
}

int isFull(emo_stack s){
    if(s.top == STACK_SIZE_LIMIT)
        return 1;
    else
        return 0;
}


int top(emo_stack s){
    int c;
    if(isEmpty(s))
        return 0;
    c = s.e[s.top].emo_ptr(s.e[s.top].x,s.e[s.top].y);
    //upside_down_black(e.x, e.y);
    return c;
}

void push(emo_stack *s, emo e4){
    if(isFull(*s))
        return;
    s->top++;
    s->e[s->top] = e4;
  //  printf("%d", s->e[s->top].x);
    s->e[s->top].x = s->xPos + 22;
    if(s->top == 1){
      s->e[s->top].y = s->yPos  + 162;
    }
    else if(s->top == 2){
       s->e[s->top].y = s->yPos + 118;
    }
    else if(s->top == 3){
       s->e[s->top].y = s->yPos  + 74;
    }
    else
       s->e[s->top].y = s->yPos + 30;
    s->e[s->top].emo_ptr(s->e[s->top].x, s->e[s->top].y);
    return;

}

void pop(emo_stack *s){
    if(isEmpty(*s))
        return;
    setcolor(0);
    upside_down_black(s->e[s->top].x, s->e[s->top].y);
    s->e[s->top].y = 100;
    s->e[s->top].emo_ptr(s->e[s->top].x, s->e[s->top].y);
    setcolor(15);
    s->top--;
    counter--;
    return ;
}

/*int top(emo_stack s){
    int c;
    if(isEmpty(s))
        return 0;
    c = s.e[s.top].emo_ptr(s.e[s.top].x,s.e[s.top].y);
    //upside_down_black(e.x, e.y);
    return c;
}
/*void callMouse(){
    in.x.ax = 1;
    int86(0X33 , &in, &out);
}*/

int canmove(emo_stack *source, emo_stack *destn, int p){
    if(isFull(*destn))
        return 0;
    if(isEmpty(*destn))
        return 1;
    if(p == top(*destn))
        return 1;
}

int istackSolved(emo_stack s){
    int i, c;
    hash_table h;
    init_hash(&h);
    if(!isFull(s))
        return 0;
    for(i = 1; i <= SIZE; i++){
        c = s.e[i].emo_ptr(s.e[i].x,s.e[i].y);
        insert_hash(&h, c);
    }
    if(size_hash(h) > 1)
        return 0;
   // if(size_hash(h) == 1)
    //    return 0;
    else
       return 1;
}


void button(int x,int y){
    arc(x,y,90,180,5);
    line(x,y-5,x+70,y-5);
    arc(x+70,y,0,90,5);
    line(x-5,y,x-5,y+20);
    line(x+75,y,x+75,y+20);
    arc(x,y+20,180,270,5);
    arc(x+70,y+20,270,360,5);
    line(x,y+25,x+70,y+25);
    return;
}
void level_page(POINT cursor){
    cleardevice();
    button(getmaxx()/2-50, getmaxy()/2-50);
    outtextxy(getmaxx()/2-45, getmaxy()/2-50, "SETTING");
    button(getmaxx()/2-50, getmaxy()/2-10);
    outtextxy(getmaxx()/2-45, getmaxy()/2-10,"HELP");
    button(getmaxx()/2-50, getmaxy()/2+30);
    outtextxy(getmaxx()/2-45, getmaxy()/2+30,"START");
    button(getmaxx()/2-50, getmaxy()/2+70);
    outtextxy(getmaxx()/2-45, getmaxy()/2+70, "QUIT");
    while(1){
      GetCursorPos(&cursor);
      if(ismouseclick(WM_LBUTTONDOWN)){
      if((cursor.x >= getmaxx()/2 - 50 && cursor.x <= getmaxx()/2 + 40) && (cursor.y >= getmaxy()/2 - 50 && cursor.y <= getmaxy()/2-10)){
            setcolor(15);
            initwindow(200,280);
            button(50,60);
            outtextxy(51,63,"SOUND ON");
            button(50,100);
            outtextxy(50,103,"SOUND OF");
            button(50,140);
            outtextxy(50,143,"FLASK");
            button(50,180);
            outtextxy(50,183,"EMOJI");
            button(50,220);
            outtextxy(50,220,"CLOSE");
             while(1){
                GetCursorPos(&cursor);
                if(ismouseclick(WM_LBUTTONDOWN)){
                if((cursor.x >= 50&& cursor.x <= 140) && (cursor.y >= 220 && cursor.y <= 260)){
                      printf("%d,%d",cursor.x,cursor.y);
                      initwindow(700,500);
                      level_page(cursor);
                    break;
                }
               }
             }

        }
        else if((cursor.x >= getmaxx()/2 - 50 && cursor.x <= getmaxx()/2 + 40) && (cursor.y >= getmaxy()/2  && cursor.y <= getmaxy()/2+40)){

             initwindow(700,400);
             button(560,10);
             outtextxy(580, 11, "close");
             setfillstyle(1,3);
             floodfill(565, 10, 15);
             outtextxy(51,60,"Emoji Sort Puzzle");
             outtextxy(51,100,"Emoji Sort Puzzle is a fun and addictive puzzle game!");
             outtextxy(51,130,"Try to sort the emoji in the tubes until all the same emoji");
             outtextxy(51,160,"stay in the same tube.");
             outtextxy(51,190,"A challenging yet relaxing game to exercise your brain!");
             outtextxy(51,220,"HOW TO PLAY: ");
             outtextxy(51,250,"- Tap any tube to move the emoji lie on top in the tube to another tube.");
             outtextxy(51,280,"- The rule is that you can only move a emoji on top of another emoji if both are same");
             outtextxy(51,310,"- You can always move a emoji to an empty tube.");
             outtextxy(51,340,"- Try not to get stuck - but don’t worry, you can always restart the level at any time.");
             while(1){
                GetCursorPos(&cursor);
                if(ismouseclick(WM_LBUTTONDOWN)){
                if((cursor.x >= 560 && cursor.x <= 650) && (cursor.y >= 30 && cursor.y <= 70)){
                    initwindow(700,500);
                    level_page(cursor);
                    break;
                }
               }
             }
        }
        else if((cursor.x >= getmaxx()/2 - 50 && cursor.x <= getmaxx()/2 + 40) && (cursor.y >= getmaxy()/2 + 40 && cursor.y <= getmaxy()/2+80)){
                level1(cursor);
        }
        else if((cursor.x >= getmaxx()/2 - 50 && cursor.x <= getmaxx()/2 + 40) && (cursor.y >= getmaxy()/2 + 90 && cursor.y <= getmaxy()/2+120)){
            exit(0);
        }

      }
    }
    return;
}

void BEEP(int frequency,float duration){
    Beep(frequency,duration);
}

void SLEEP(float duration){
    Sleep(duration);
}
int convertTofrequency(int ocatve,char *syllable){
    int syllableIndex = 0;
    if(syllable == "C")syllableIndex = 0;
    else if(syllable == "C#")syllableIndex = 1;
    else if(syllable == "D")syllableIndex = 2;
    else if(syllable == "D#")syllableIndex = 3;
    else if(syllable == "E")syllableIndex = 4;
    else if(syllable == "F")syllableIndex = 5;
    else if(syllable == "F#")syllableIndex = 6;
    else if(syllable == "G")syllableIndex = 7;
    else if(syllable == "G#")syllableIndex = 8;
    else if(syllable == "A")syllableIndex = 9;
    else if(syllable == "A#")syllableIndex = 10;
    else if(syllable == "B")syllableIndex = 11;
    return frequencyTable[ocatve-1][syllableIndex];
}

void Note(int octave,char *syllable,float durationRatio){
    BEEP(convertTofrequency(octave,syllable),defaultDuration*durationRatio);
    outtextxy(getmaxx()/2 - 100,130,"$_");
    return;
}

void rest(float durationRatio){
    SLEEP(defaultDuration *durationRatio);
    return;
}

void astronomia(){
Note(4,"F#", 1);
Note(4,"F#",0.5);
Note(5, "C#",0.5);
Note(4, "B",1);
Note(4, "A",1);
Note(4,"G#",1);
Note(4, "G#",0.5);
Note(4, "G#",0.5);
Note(4, "B",1);
Note(4, "A",0.5);
Note(4, "G#",0.5);
Note(4, "F#",1);
Note(4, "F#",0.5);
Note(5, "A",0.5);
Note(5,"G#",0.5);
Note(5,"A", 0.5);
Note(5,"G#",0.5);
Note(5, "A",0.5);
//Note(4, "F#",1);
//Note(4, "F#",0.5);
//Note(5,"A",0.5);
//Note(5, "G#",0.5);
//Note(5, "A", 0.5);
//Note(5, "G#",0.5);
//Note(5, "A", 0.5);
//Note(4, "F#",1);
//Note(4,"F#",0.5);
//Note(5,"C#", 0.5);
//Note(4,"B",1);
//Note(4,"A",1);
//Note(4,"G#",1);
//Note(4,"G#",0.5);
//Note(4,"G#",0.5);
//Note(4,"B",1);
//Note(4,"A",0.5);
//Note(4,"G#",0.5);
//Note(4,"F#",1);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(4,"F#",1);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A", 0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(4,"F#",1);
//Note(4,"F#",0.5);
//Note(5,"C#",0.5);
//Note(4,"B",1);
//Note(4,"A",1);
//Note(4,"G#",1);
//Note(4,"G#",0.5);
//Note(4,"G#",0.5);
//Note(4,"B",1);
//Note(4,"A",0.5);
//Note(4,"G#",0.5);
//Note(4,"F#",1);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(4,"F#",1);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note (5,"G#",0.5);
//Note(5,"A", 0.5);
//Note(5,"G# ",0.5);
//Note(5,"A",0.5);
//Note(4,"A",0.5);
//Note(4,"A",0.5);
//Note(4,"A",0.5);
//Note(4,"A",0.5);
//Note(5,"C#",0.5);
//Note(5,"C#",0.5);
//Note(5,"C#",0.5);
//Note(5,"C#",0.5);
//Note(4,"B",0.5);
//Note(4,"B",0.5);
//Note(4,"B",0.5);
//Note(4 ,"B",0.5);
//Note(5,"E",0.5);
//Note(5,"E",0.5);
//Note(5,"E",0.5);
//Note(5,"E",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#", 0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(5,"F#",0.5);
//Note(4,"B",0.5);
//Note(4,"A",0.5);
//Note(4,"G#",0.5);
//Note(4,"E",0.5);
//Note(4,"F#",0.5);
//Note(4,"D",0.5);
//Note(4,"F#",0.5);
//Note(5,"C#",0.5);
//Note(4,"B",0.5);
//Note(4,"D",0.5);
//Note(4,"A",0.5);
//Note(4,"D",0.5);
//Note(4,"G#",0.5);
//Note(4,"E",0.5);
//Note(4,"G#",0.5);
//Note(4,"G#",0.5);
//Note(4,"B",0.5);
//Note(4,"E",0.5);
//Note(4,"A",0.5);
//Note(4,"G#",0.5);
//Note(4,"F#",0.5);
//Note(4,"C#", 0.5);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(4,"C#",0.5);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A", 0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(4,"F#",0.5);
//Note(4,"D",0.5);
//Note(4,"F#",0.5);
//Note(5,"C#",0.5);
//Note(4,"B",0.5);
//Note(4,"D",0.5);
//Note(4,"A",0.5);
//Note(4,"D",0.5);
//Note(4,"G#",0.5);
//Note(4,"E",0.5);
//Note(4,"G#",0.5);
//Note(4,"G#",0.5);
//Note(4,"B",0.5);
//Note(4,"E",0.5);
//Note(4,"A",0.5);
//Note(4,"G#",0.5);
//Note(4,"F#",0.5);
//Note(4,"C#",0.5);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(4,"F#",0.5);
//Note(4,"C#",0.5);
//Note(4,"F#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"A",0.5);
//Note(5,"F#",0.25);
//Note(5,"D",0.25);
//Note(4,"A",0.25);
//Note(4,"F#",0.25);
//Note(5,"F#",0.5);
//Note(6,"C#",0.5);
//Note(5,"B",0.5);
//Note(5,"D",0.5);
//Note(5,"A",0.5);
//Note(5,"D",0.5);
//Note(5,"G#",0.25);
//Note(5,"E",0.25);
//Note(4,"B",0.25);
//Note(4,"G#",0.25);
//Note(5,"G#",0.5);
//Note(5,"G#",0.5);
//Note(5,"B",0.5);
//Note(5,"E",0.5);
//Note(5,"A",0.5);
//Note(5,"G#",0.5);
//Note(5,"F#",0.25);
//Note(5,"C#",0.25);
//Note(4,"A",0.25);
//Note(4,"F#",0.25);
//Note(5,"F#",0.5);
//Note(6,"A",0.5);
//Note(6,"G#",0.5);
//Note(6,"A",0.25);
//Note(6,"A",0.25);
//Note(6,"G#",0.5);
//Note(6,"A",0.5);
//Note(5,"F#",0.25);
//Note(5,"C#",0.25);
//Note(4,"A",0.25);
//Note(4,"F#",0.25);
//Note(5,"F#",0.5);
//Note(6,"A",0.5);
//Note(6,"G#",0.5);
//Note(6,"A",0.25);
//Note(6,"A",0.25);
//Note(6,"G#",0.5);
//Note(6,"A",0.5);
//Note(5,"A",0.5);
//Note(5,"A",0.5);
//Note(5,"A",0.5);
//Note(5, "A",0.5);
//Note(6,"C#",0.5);
//Note(6,"C#",0.5);
//Note(6,"C#",0.5);
//Note(6,"C#",0.5);
//Note(5,"B",0.5);
//Note(5,"B",0.5);
//Note(5,"B",0.5);
//Note(5,"B",0.5);
//Note(6,"E",0.5);
//Note(6,"E",0.5);
//Note(6,"E",0.5);
//Note(6,"E", 0.5);
//Note(6,"F#",0.25);
//Note(6,"C#",0.25);
//Note(5, "A",0.25);
//Note(5,"F#",0.25);
//Note(6,"F#",0.25);
//Note(6,"C#",0.25);
//Note(5, "A",0.25);
//Note(5,"F#",0.25);
//Note(6,"F#",0.25);
//Note(6,"C#",0.25);
//Note(5, "A",0.25);
//Note(5,"F#",0.25);
//Note(6,"F#",0.25);
//Note(6,"C#",0.25);
//Note(5,"A",0.25);
//Note(5,"F#",0.25);
//Note(6,"F#",0.5);
//Note(6,"F#", 0.5);
//Note(6,"F#",0.5);
//Note(6, "F#",0.5);
//Note(5,"B",0.5);
//Note(5, "A",0.5);
//Note(5,"G#",0.5);
//Note(5,"E",0.5);
outtextxy(getmaxx()/2 - 100,130,"$50");
Note(5,"F#",4);
settextstyle(4,HORIZ_DIR,5);
outtextxy(getmaxx()/2 - 100,130,"$50");
return;
}
int iswin_level2(gameboard G){
    if(isEmpty(G.A[0]) && istackSolved(G.A[1]) && istackSolved(G.A[2])){
        setcolor(RED);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[1]) && istackSolved(G.A[0]) && istackSolved(G.A[2])){
         setcolor(RED);
         settextstyle(1,HORIZ_DIR,4);
         outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
         astronomia();
        return 1;
    }
    else if(isEmpty(G.A[2]) && istackSolved(G.A[0])&& istackSolved(G.A[1])){
         setcolor(RED);
         settextstyle(1,HORIZ_DIR,4);
         outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
         astronomia();
        return 1;
    }
    else
        return 0;
}

int iswin_level1(gameboard G){
    if(isEmpty(G.A[0]) && istackSolved(G.A[1])){
        setcolor(RED);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[1]) && istackSolved(G.A[0])){
         setcolor(RED);
         settextstyle(1,HORIZ_DIR,4);
         outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
         astronomia();
        return 1;
    }
    else
        return 0;
}

void helppage(POINT cursor){
        if((cursor.x >= 390 && cursor.x <= 480) && (cursor.y >= 30 && cursor.y <= 70)){
            if(l==1){
                cleardevice();
                level1(cursor);
            }
             if(l==2){
                cleardevice();
                initwindow(750,500);
                level2(cursor);
             }
             if(l==3){
                cleardevice();
                level3(cursor);
             }

        }

         else if((cursor.x >= 560 && cursor.x <= 650) && (cursor.y >= 30 && cursor.y <= 70)){
            exit(0);
         }
    return;
}
void level2(POINT cursor){
    l = 2;
    gameboard G;
    init_gameboard(&G, 3);
    cleardevice();
    button(380, 10);
    outtextxy(390, 11, "RESTART");
    setfillstyle(1,3);
    floodfill(380, 10, 15);
    button(470, 10);
    outtextxy(490, 11, "<---");
    setfillstyle(1,3);
    floodfill(470, 10, 15);
    button(560,10);
    outtextxy(580, 11, "Quit");
    setfillstyle(1,3);
    floodfill(565, 10, 15);
    settextstyle(0,HORIZ_DIR, 3);
    delay(1000);
    outtextxy(getmaxx()/2 - 100,50,"LEVEL 2");
    outtextxy(645,10,"$50");
    insert_gameboard_stack(&G,100, 190);
    insert_gameboard_emo(&G);
    push(&(G.A[0]), G.E[1]);
    push(&(G.A[0]), G.E[0]);
    push(&(G.A[0]), G.E[1]);
    push(&(G.A[0]), G.E[0]);
    push(&(G.A[1]), G.E[0]);
    push(&(G.A[1]), G.E[1]);
    push(&(G.A[1]), G.E[0]);
    push(&(G.A[1]), G.E[1]);
    int p;
    while(1){
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            solve_level2(cursor,&G);
            break;
        }
    }
    delay(1000);
    level3(cursor);
    return;
}

void level1(POINT cursor){
    l = 1;
    int w1 = initwindow(750,500);
    gameboard G;
    setcurrentwindow(w1);
    init_gameboard(&G, 5);
    button(380, 10);
    outtextxy(390, 11, "RESTART");
    setfillstyle(1,3);
    floodfill(380, 10, 15);
    button(470, 10);
    outtextxy(490, 11, "<---");
    setfillstyle(1,3);
    floodfill(470, 10, 15);
    button(560,10);
    outtextxy(580, 11, "Quit");
    setfillstyle(1,3);
    floodfill(565, 10, 15);
    settextstyle(0,HORIZ_DIR, 3);
    delay(1000);
    outtextxy(getmaxx()/2 - 100,50,"LEVEL 1");
    setcurrentwindow(w1);
    outtextxy(645,10,"$00");
    outtextxy(200,400,"Put emoji in the first tube");
    outtextxy(200,430,"from the second tube");
    init_gameboard(&G,2);
    insert_gameboard_stack(&G,200, 190);
    insert_gameboard_emo(&G);
    push(&(G.A[0]), G.E[1]);
    push(&(G.A[0]), G.E[1]);
    push(&(G.A[0]), G.E[1]);
    push(&(G.A[1]), G.E[1]);
    while(1){
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            solve_level1(cursor,&G);
            break;
        }
    }
    delay(1000);
    initwindow(750,500);
    level2(cursor);
    return;
}
void level3(POINT cursor){
    l = 3;
    int w2 = initwindow(800,800);
    setcurrentwindow(w2);
    gameboard G;
    init_gameboard(&G, 5);
    button(380, 10);
    outtextxy(390, 11, "RESTART");
    setfillstyle(1,3);
    floodfill(380, 10, 15);
    button(470, 10);
    outtextxy(490, 11, "<---");
    setfillstyle(1,3);
    floodfill(470, 10, 15);
    button(560,10);
    outtextxy(580, 11, "Quit");
    setfillstyle(1,3);
    floodfill(565, 10, 15);
    settextstyle(0,HORIZ_DIR, 3);
    delay(1000);
    outtextxy(getmaxx()/2 - 100,50,"LEVEL 3");
    setcurrentwindow(w2);
    outtextxy(645,10,"$100");
    init_gameboard(&G,5);
    insert_gameboard_stack(&G,100, 190);
    insert_gameboard_emo(&G);
    push(&(G.A[0]), G.E[0]);
    push(&(G.A[0]), G.E[1]);
    push(&(G.A[0]), G.E[2]);
    push(&(G.A[0]), G.E[0]);
    push(&(G.A[1]), G.E[0]);
    push(&(G.A[1]), G.E[1]);
    push(&(G.A[1]), G.E[2]);
    push(&(G.A[1]), G.E[1]);
    push(&(G.A[2]), G.E[1]);
    push(&(G.A[2]), G.E[0]);
    push(&(G.A[2]), G.E[2]);
    push(&(G.A[2]), G.E[2]);
    while(1){
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            solve_level3(cursor,&G);
            break;
        }
    }
    return;
}

void solve_level1(POINT cursor, gameboard *G){
    emo_stack  *source = NULL, *destn = NULL;
    hash_table h;
    init_hash(&h);
    int p;
    while(1){
     while(1){
        if(iswin_level1(*G))
                return;
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            if((cursor.x > 200 && cursor.x < 244) && (cursor.y > 190 && cursor.y < 490)){
                if(iswin_level1(*G))
                      return;
                if(istackSolved(G->A[0]))
                       break;
                  source = &(G->A[0]);
                  p = top(G->A[0]);
                  pop(&(G->A[0]));
                  break;
            }
            else if((cursor.x > 350 && cursor.x < 394) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin_level1(*G))
                      return;
                 if(istackSolved(G->A[1]))
                       break;
                  source = &(G->A[1]);
                  p = top(G->A[1]);
                  pop(&(G->A[1]));
                  break;
            }
            else{
                helppage(cursor);
            }

        }
    }
    while(1){
         if(iswin_level1(*G))
             return;
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            if(source == NULL){
                 break;
            }
            if((cursor.x > 200 && cursor.x < 244) && (cursor.y > 190 && cursor.y < 490)){
                if(iswin_level1(*G))
                      return;
                  if(istackSolved(G->A[0]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[0]);
                  if(source == destn){
                       if(p == 1)
                           push(&(*source), G->E[1]);
                      break;
                  }
                  if(canmove(source, destn, p)){
                     if(p == 1)
                        push(&(*destn), G->E[1]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    pop(&(G->A[0]));
                  }
                  break;
            }
            else if((cursor.x > 350 && cursor.x < 394) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin_level1(*G))
                      return;
                  if(istackSolved(G->A[1]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[1]);
                  if(source == destn){
                       if(p == 1)
                        push(&(*source), G->E[1]);
                        break;
                   }
                  if(canmove(source, destn, p)){
                      if(p == 1)
                        push(&(*destn), G->E[1]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    pop(&(G->A[1]));
                  }
                  break;
            }
            else{
                helppage(cursor);
            }
        }
    }
    }
    return;
}

void solve_level2(POINT cursor, gameboard *G){
    emo_stack  *source = NULL, *destn = NULL;
    int flag = 0;
    hash_table h;
    init_hash(&h);
    int p;
    while(1){
     while(1){
        if(iswin_level2(*G))
                return;
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            if((cursor.x > 100 && cursor.x < 144) && (cursor.y > 190 && cursor.y < 490)){
                if(iswin_level2(*G))
                      return;
                if(istackSolved(G->A[0]))
                       break;
                if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[0]);
                  p = top(G->A[0]);
                  pop(&(G->A[0]));
                  break;
            }
            else if((cursor.x > 250 && cursor.x < 294) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin_level2(*G))
                      return;
                 if(istackSolved(G->A[1]))
                       break;
                  if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[1]);
                  p = top(G->A[1]);
                  pop(&(G->A[1]));
                  break;
            }
            else if((cursor.x > 400 && cursor.x < 444) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin_level2(*G))
                      return;
                 if(istackSolved(G->A[2]))
                       break;
                  if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[2]);
                  p = top(G->A[2]);
                  pop(&(G->A[2]));
                  break;
            }
            else{
                helppage(cursor);
            }

        }
    }
    while(1){
         if(iswin_level2(*G))
             return;
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            if(source == NULL){
                 break;
            }
            if((cursor.x > 100 && cursor.x < 144) && (cursor.y > 190 && cursor.y < 490)){
                if(iswin_level2(*G))
                      return;
                  if(istackSolved(G->A[0]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[0]);
                  flag = 0;
                  if(source == destn){
                       if(p == 1)
                           push(&(*source), G->E[1]);
                       else if(p == 2)
                          push(&(*source), G->E[0]);
                      break;
                  }
                  if(canmove(source, destn, p)){
                     if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                    p = top(G->A[0]);
                    pop(&(G->A[0]));
                    source = destn;
                    flag = 1;
                  }
                  break;
            }
            else if((cursor.x > 250 && cursor.x < 294) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin_level2(*G))
                      return;
                  if(istackSolved(G->A[1]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[1]);
                  flag = 0;
                  if(source == destn){
                       if(p == 1)
                        push(&(*source), G->E[1]);
                       else if(p == 2)
                         push(&(*source), G->E[0]);
                        break;
                   }
                  if(canmove(source, destn, p)){
                      if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                    p = top(G->A[1]);
                    pop(&(G->A[1]));
                    source = destn;
                    flag = 1;
                  }
                  break;
            }
            else if((cursor.x > 400 && cursor.x < 444) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin_level2(*G))
                      return;
                  if(istackSolved(G->A[2]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[2]);
                  flag = 0;
                  if(source == destn){
                      if(p == 1)
                          push(&(*source), G->E[1]);
                      else if(p == 2)
                        push(&(*source), G->E[0]);
                      break;
                 }
                  if(canmove(source, destn, p)){
                    if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                    p = top(G->A[2]);
                    pop(&(G->A[2]));
                    source = destn;
                    flag = 1;
                  }
                  break;
            }
            else{
                helppage(cursor);
            }
        }
    }
    }
    return;
}
int iswin(gameboard G){
    if(isEmpty(G.A[0]) && isEmpty(G.A[1]) && istackSolved(G.A[2]) && istackSolved(G.A[3]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[0]) && isEmpty(G.A[2]) && istackSolved(G.A[1]) && istackSolved(G.A[3]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[0]) && isEmpty(G.A[3]) && istackSolved(G.A[2]) && istackSolved(G.A[1]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[0]) && isEmpty(G.A[4]) && istackSolved(G.A[2]) && istackSolved(G.A[3]) && istackSolved(G.A[1])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
     else if(isEmpty(G.A[1]) && isEmpty(G.A[2]) && istackSolved(G.A[0]) && istackSolved(G.A[3]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[1]) && isEmpty(G.A[3]) && istackSolved(G.A[2]) && istackSolved(G.A[0]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[1]) && isEmpty(G.A[4]) && istackSolved(G.A[2]) && istackSolved(G.A[3]) && istackSolved(G.A[0])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
     else if(isEmpty(G.A[2]) && isEmpty(G.A[0]) && istackSolved(G.A[1]) && istackSolved(G.A[3]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[2]) && isEmpty(G.A[3]) && istackSolved(G.A[0]) && istackSolved(G.A[1]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[2]) && isEmpty(G.A[4]) && istackSolved(G.A[0]) && istackSolved(G.A[3]) && istackSolved(G.A[1])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
     else if(isEmpty(G.A[3]) && isEmpty(G.A[2]) && istackSolved(G.A[1]) && istackSolved(G.A[0]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[3]) && isEmpty(G.A[0]) && istackSolved(G.A[2]) && istackSolved(G.A[1]) && istackSolved(G.A[4])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[3]) && isEmpty(G.A[4]) && istackSolved(G.A[2]) && istackSolved(G.A[0]) && istackSolved(G.A[1])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
     else if(isEmpty(G.A[4]) && isEmpty(G.A[2]) && istackSolved(G.A[1]) && istackSolved(G.A[3]) && istackSolved(G.A[0])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[4]) && isEmpty(G.A[3]) && istackSolved(G.A[2]) && istackSolved(G.A[1]) && istackSolved(G.A[0])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }
    else if(isEmpty(G.A[4]) && isEmpty(G.A[4]) && istackSolved(G.A[2]) && istackSolved(G.A[3]) && istackSolved(G.A[0])){
        setcolor(MAGENTA);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(getmaxx()/2 - 200, 80,"congrats!you win");
        astronomia();
        return 1;
    }

}



void solve_level3(POINT cursor, gameboard *G){
    int flag = 0;
    emo_stack  *source = NULL, *destn = NULL;
    hash_table h;
    init_hash(&h);
    int p;
    while(1){
     while(1){
        if(iswin(*G))
                return;
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            if(cursor.x > 100 && cursor.x < 144 && cursor.y > 190 && cursor.y < 490){
                if(iswin(*G))
                      return;
                if(istackSolved(G->A[0]))
                       break;
                 if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[0]);
                  p = top(G->A[0]);
                  pop(&(G->A[0]));
                  break;
            }
            else if((cursor.x > 250 && cursor.x < 294) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin(*G))
                     return;
                 if(istackSolved(G->A[1]))
                       break;
                 if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[1]);
                  p = top(G->A[1]);
                  pop(&(G->A[1]));
                  break;
            }
            else if((cursor.x > 400 && cursor.x < 444) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin(*G))
                    return;
                 if(istackSolved(G->A[2]))
                       break;
                 if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[2]);
                  p = top(G->A[2]);
                  pop(&(G->A[2]));
                  break;
            }
            else if((cursor.x > 550 && cursor.x < 594) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin(*G))
                     return;
                 if(istackSolved(G->A[3]))
                       break;
                 if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[3]);
                  p = top(G->A[3]);
                  pop(&(G->A[3]));
                  break;
            }
            else if((cursor.x > 700 && cursor.x < 744) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin(*G))
                     return;
                 if(istackSolved(G->A[4]))
                       break;
                 if(destn != NULL && source == destn && flag == 1)
                    break;
                  source = &(G->A[4]);
                  p = top(G->A[4]);
                  pop(&(G->A[4]));
                  break;
            }
            else{
                helppage(cursor);
            }
        }
    }
    while(1){
         if(iswin(*G))
             return;
        GetCursorPos(&cursor);
        if(ismouseclick(WM_LBUTTONDOWN)){
            clearmouseclick(WM_LBUTTONDOWN);
            if(source == NULL){
                 break;
            }
            if((cursor.x > 100 && cursor.x < 144) && (cursor.y > 190 && cursor.y < 490)){
                 flag = 0;
                if(iswin(*G))
                      return;
                  if(istackSolved(G->A[0]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[0]);
                  if(source == destn){
                       if(p == 1)
                           push(&(*source), G->E[1]);
                       else if(p == 2)
                          push(&(*source), G->E[0]);
                        else if(p == 4)
                          push(&(*source), G->E[2]);
                      break;
                  }
                  if(canmove(source, destn, p)){
                     if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                     else if(p == 4)
                        push(&(*destn), G->E[2]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                     else if(p == 4)
                        push(&(*source), G->E[2]);
                     p = top(G->A[0]);
                    pop(&(G->A[0]));
                    source = destn;
                    flag = 1;
                  }
                  break;
            }
            else if((cursor.x > 250 && cursor.x < 294) && (cursor.y > 190 && cursor.y < 490)){
                  flag = 0;
                 if(iswin(*G))
                      return;
                  if(istackSolved(G->A[1]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[1]);
                  if(source == destn){
                       if(p == 1)
                        push(&(*source), G->E[1]);
                       else if(p == 2)
                         push(&(*source), G->E[0]);
                        else if(p == 4)
                          push(&(*source), G->E[2]);
                        break;
                   }
                  if(canmove(source, destn, p)){
                      if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                     else if(p == 4)
                        push(&(*destn), G->E[2]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                     else if(p == 4)
                        push(&(*source), G->E[2]);
                     p = top(G->A[1]);
                    pop(&(G->A[1]));
                    source = destn;
                    flag = 1;
                  }
                  break;
            }
            else if((cursor.x > 400 && cursor.x < 444) && (cursor.y > 190 && cursor.y < 490)){
                  flag = 0;
                 if(iswin(*G))
                      return;
                  if(istackSolved(G->A[2]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[2]);
                  if(source == destn){
                      if(p == 1)
                          push(&(*source), G->E[1]);
                      else if(p == 2)
                        push(&(*source), G->E[0]);
                      else if(p == 4)
                        push(&(*source), G->E[2]);
                      break;
                 }
                  if(canmove(source, destn, p)){
                    if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                     else if(p == 4)
                        push(&(*destn), G->E[2]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                     else if(p == 4)
                        push(&(*source), G->E[2]);
                    p = top(G->A[2]);
                    pop(&(G->A[2]));
                    source = destn;
                    flag = 1;
                  }
                  break;
            }
             else if((cursor.x > 550 && cursor.x < 594) && (cursor.y > 190 && cursor.y < 490)){
                  flag = 0;
                 if(iswin(*G))
                      return;
                  if(istackSolved(G->A[3]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[3]);
                  if(source == destn){
                       if(p == 1)
                        push(&(*source), G->E[1]);
                       else if(p == 2)
                         push(&(*source), G->E[0]);
                       else if(p == 4)
                          push(&(*source), G->E[2]);
                        break;
                   }
                  if(canmove(source, destn, p)){
                      if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                     else if(p == 4)
                        push(&(*destn), G->E[2]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                     else if(p == 4)
                        push(&(*source), G->E[2]);
                     p = top(G->A[3]);
                    pop(&(G->A[3]));
                    flag = 1;
                    source = destn;
                  }
                  break;
            }
            else if((cursor.x > 700 && cursor.x < 744) && (cursor.y > 190 && cursor.y < 490)){
                 if(iswin(*G))
                      return;
                  flag = 0;
                  if(istackSolved(G->A[4]))
                     break;
                  upside_down_black(source->xPos + 22, 100);
                  destn = &(G->A[4]);
                  if(source == destn){
                      if(p == 1)
                          push(&(*source), G->E[1]);
                      else if(p == 2)
                        push(&(*source), G->E[0]);
                      else if(p == 4)
                        push(&(*source), G->E[2]);
                      break;
                 }
                  if(canmove(source, destn, p)){
                    if(p == 1)
                        push(&(*destn), G->E[1]);
                    else if(p == 2)
                        push(&(*destn), G->E[0]);
                     else if(p == 4)
                        push(&(*destn), G->E[2]);
                  }
                  else{
                    if(p == 1)
                        push(&(*source), G->E[1]);
                    else if(p == 2)
                        push(&(*source), G->E[0]);
                    else if(p == 4)
                        push(&(*source), G->E[2]);
                     p = top(G->A[4]);
                    pop(&(G->A[4]));
                    source = destn;
                    flag = 1;
                  }
                  break;
            }
            else{
                helppage(cursor);
            }
        }
    }
    }
    return;
}



