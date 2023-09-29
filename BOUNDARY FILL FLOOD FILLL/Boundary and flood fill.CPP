#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void Boundaryfill(int x,int y,int f_c,int b_c)
{
int current;
current=getpixel(x,y);
if(current!=b_c && current!=f_c)
{
  putpixel(x,y,f_c);
  Boundaryfill(x,y+1,f_c,b_c);
  Boundaryfill(x,y-1,f_c,b_c);
  Boundaryfill(x+1,y,f_c,b_c);
  Boundaryfill(x-1,y,f_c,b_c);
  }
}
 void FloodFill(int x1 ,int y1,int o_c ,int n_c)
 {
 int current;
 current=getpixel(x1,y1);
 if (current==o_c)
 {
 putpixel(x1,y1,n_c);
 FloodFill(x1,y1+1,o_c,n_c);
 FloodFill(x1,y1-1,o_c,n_c);
 FloodFill(x1-1,y1,o_c,n_c);
 FloodFill(x1+1,y1,o_c,n_c);
 }}
 void main()
 {
 int gd,gm,x,y,x1,y1,r;
 gd=DETECT;
 printf("Enter origin points for circle1 and 2:\n");
 scanf("%d %d %d %d",&x,&y,&x1,&y1);
 printf("\n Enter radius");
 scanf("%d",&r);
 initgraph(&gd,&gm,"..//bgi");
 circle(x,y,r);
 circle(x1,y1,r);
 Boundaryfill(x,y,7,15);
 FloodFill(x1,y1,0,2);
 getch();
 closegraph();
 }


