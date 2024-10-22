#include <stdio.h>
#include <stdlib.h>

#define ROW 6
#define COL 6
#define STARTX 1
#define STARTY 1
#define ENDX 1
#define ENDY 5

char map[ROW][COL]={
     {'#', '#', '#', '#', '#', '#'},
     {'#', 'O', ' ', '#', ' ', ' '},
     {'#', ' ', '#', '#', ' ', '#'},
     {'#', ' ', ' ', '#', ' ', '#'},
     {'#', '#', ' ', ' ', ' ', '#'},
     {'#', '#', '#', '#', '#', '#'}
     };

void draw(const char cs[][COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("%c", cs[i][j]);
        }
        printf("\n");
    }
}




void move(int *x, int *y){ 
    char act;
    getchar();  //吸收上次输入的换行符
    scanf("%c", &act);
    switch (act)
    {
    case 'w':
    case 'W':
        if (*x > 0 && map[*x-1][*y]!='#'){
            char temp = map[*x][*y];  
            map[*x][*y] = map[*x-1][*y];    //上移
            map[--(*x)][*y] = temp;
        }
        break;
    
    case 's':
    case 'S':
        if (*x<ROW-1 && map[*x+1][*y]!='#'){
            char temp = map[*x][*y];
            map[*x][*y] = map[*x+1][*y];
            map[++(*x)][*y] = temp; 
        }
        break;

    case 'a':
    case 'A':
        if(*y>0 && map[*x][*y-1]!='#'){
            char temp = map[*x][*y];
            map[*x][*y] = map[*x][*y-1];
            map[*x][--(*y)] = temp;}
        break;

    case 'd':
    case 'D':
        if(*y<COL-1 && map[*x][*y+1]!='#'){
            char temp = map[*x][*y];
            map[*x][*y] = map[*x][*y+1];
            map[*x][++(*y)] = temp;}
        break;
    default:
        printf("use wasd to move!");
        break;
    }   
}

void clear_screen() {
    for (int i = 0; i < 50; i++) {
        printf("\n");
    }
}

void game(){
    int userX = STARTX, userY  = STARTY;
    while(userX!=ENDX || userY!=ENDY){
        clear_screen();    //清屏
        draw(map);  //绘制地图
        move(&userX, &userY);
    }
    printf("you win!")
}



int main(){
    game();
    return 0;
}