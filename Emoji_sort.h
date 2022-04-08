#define SIZE 4
#define STACK_SIZE_LIMIT 4
int l = 0;
int counter = 0;

typedef struct hash_table{
    int *arr;
}hash_table;

typedef struct emo{
    int x;
    int y;
    int(*emo_ptr)(int, int);
}emo;

typedef struct emo_stack{
    int top;
    int xPos;
    int yPos;
    emo *e;
    void(*flask_ptr)(int, int);
}emo_stack;

typedef struct gameboard{
    int number;
    emo_stack* A;
    emo *E;
    int top1, top2;
}gameboard;
void init_hash(hash_table *h);
void insert_hash(hash_table *h, int value);
int defaultDuration  = 500;
float duration = 465;
int coin;
int frequencyTable[8][12] =
	{
		{   33,   35,   37,   39,   41,   44,   46,   49,   52,   55,   58,   62 },
		{   65,   69,   73,   78,   82,   87,   92,   98,  104,  110,  117,  123 },
		{  131,  139,  147,  156,  165,  175,  185,  196,  208,  220,  233,  247 },
		{  262,  277,  294,  311,  330,  349,  370,  392,  415,  440,  466,  494 },
		{  524,  554,  587,  622,  659,  698,  740,  784,  831,  880,  932,  988 },
		{ 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976 },
		{ 2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951 },
		{ 4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902 }
	};
int size_hash(hash_table h);
void loadingpage();
void init_emo(emo *e);
void flask(int x, int y);
int  upside_down(int x, int y);
int Expressionless(int x, int y);
void upside_down_black(int x, int y);
int  upside_up_sad(int x, int y);
int  upside_up(int x, int y);
void init_gameboard(gameboard *g, int num);
void initStack(emo_stack *s, int x, int y);
void insert_gameboard_stack(gameboard *G,int x, int y);
void insert_gameboard_emo(gameboard *G);
int isEmpty(emo_stack s);
int isFull(emo_stack s);
int top(emo_stack s);
void push(emo_stack *s, emo e4);
void pop(emo_stack *s);
int canmove(emo_stack *source, emo_stack *destn, int p);
int istackSolved(emo_stack s);
void button(int x,int y);
void level_page(POINT cursor);
void BEEP(int frequency,float duration);
void SLEEP(float duration);
int convertTofrequency(int ocatve,char *syllable);
void Note(int octave,char *syllable,float durationRatio);
void rest(float durationRatio);
void astronomia();
int iswin_level2(gameboard G);
int iswin_level1(gameboard G);
void helppage(POINT cursor);
int iswin(gameboard G);
void solve_level1(POINT cursor,gameboard *G);
void solve_level2(POINT cursor,gameboard *G);
void solve_level3(POINT cursor,gameboard *G);
void level1(POINT cursor);
void level2(POINT cursor);
void level3(POINT cursor);
