#include<simplecpp>

main_program
{
initCanvas("game",1400,800);
Text t0(680,350,"----INSTRUCTIONS----");
t0.setColor(RED);
Text t1(680,390,"<-- TO MOVE RIGHT");
Text t2(680,410,"--> TO MOVE LEFT");
Text t3(633,430,"^");
Text t4(680,435,"|  TO MOVE UP");
Text t5(680,455,"|  TO MOVE DOWN");
Text t6(622,470,"V");
wait(1);
t0.moveTo(65,20);
wait(1);
t1.moveTo(65,40);
wait(1);
t2.moveTo(65,60);
wait(1);
t3.moveTo(14,80);
t4.moveTo(60,85);
wait(1);
t5.moveTo(72,105);
t6.moveTo(14,120);

//PACMAN
int score=0;
Circle c(10,350,10);
c.setColor(YELLOW);
c.setFill(YELLOW);

//CHECKPOINT
Rectangle checkpoint(1350,350,20,20);
checkpoint.setColor(GREEN);
checkpoint.setFill(GREEN);

//COINS
Circle c1(10,200,5);
c1.setColor(RED);
c1.setFill(RED);
Circle c2(100,440,5);
c2.setColor(RED);
c2.setFill(RED);
Circle c3(200,600,5);
c3.setColor(RED);
c3.setFill(RED);
Circle c4(390,420,5);
c4.setColor(RED);
c4.setFill(RED);
Circle c5(450,550,5);
c5.setColor(RED);
c5.setFill(RED);
Circle c6(260,230,5);
c6.setColor(RED);
c6.setFill(RED);
Circle c7(250,400,5);
c7.setColor(RED);
c7.setFill(RED);
Circle c8(300,100,5);
c8.setColor(RED);
c8.setFill(RED);
Circle c9(320,200,5);
c9.setColor(RED);
c9.setFill(RED);
Circle c10(1160,300,5);
c10.setColor(RED);
c10.setFill(RED);
Circle c11(500,310,5);
c11.setColor(RED);
c11.setFill(RED);
Circle c12(550,30,5);
c12.setColor(RED);
c12.setFill(RED);
Circle c13(600,200,5);
c13.setColor(RED);
c13.setFill(RED);
Circle c14(760,500,5);
c14.setColor(RED);
c14.setFill(RED);
Circle c15(720,620,5);
c15.setColor(RED);
c15.setFill(RED);
Circle c16(800,30,5);
c16.setColor(RED);
c16.setFill(RED);
Circle c17(900,350,5);
c17.setColor(RED);
c17.setFill(RED);
Circle c18(790,110,5);
c18.setColor(RED);
c18.setFill(RED);
Circle c19(820,160,5);
c19.setColor(RED);
c19.setFill(RED);
Circle c20(70,90,5);
c20.setColor(RED);
c20.setFill(RED);
Circle c21(140,140,5);
c21.setColor(RED);
c21.setFill(RED);
Circle c22(930,300,5);
c22.setColor(RED);
c22.setFill(RED);
Circle c23(650,465,5);
c23.setColor(RED);
c23.setFill(RED);
Circle c24(1160,870,5);
c24.setColor(RED);
c24.setFill(RED);
Circle c25(1240,650,5);
c25.setColor(RED);
c25.setFill(RED);
Circle c26(1280,80,5);
c26.setColor(RED);
c26.setFill(RED);
Circle c27(1000,965,5);
c27.setColor(RED);
c27.setFill(RED);
Circle c28(1195,10,5);
c28.setColor(RED);
c28.setFill(RED);
Circle c29(1220,240,5);
c29.setColor(RED);
c29.setFill(RED);
Circle c30(1260,560,5);
c30.setColor(RED);
c30.setFill(RED);

//OBSTACLES
Rectangle r (1300,500,100,100);
r.setColor(BLUE);
r.setFill(BLUE);
Rectangle r1(200,700,100,100);
r1.setColor(BLUE);
r1.setFill(BLUE);
Rectangle r2(100,500,100,100);
r2.setColor(BLUE);
r2.setFill(BLUE);
Rectangle r3(300,-800,100,100);
r3.setColor(BLUE);
r3.setFill(BLUE);
Rectangle r4(700,-1500,100,100);
r4.setColor(BLUE);
r4.setFill(BLUE);
Rectangle r5(2000,700,100,100);
r5.setColor(BLUE);
r5.setFill(BLUE);
Rectangle r6(600,-1500,100,100);
r6.setColor(BLUE);
r6.setFill(BLUE);
Rectangle r7(2500,600,100,100);
r7.setColor(BLUE);
r7.setFill(BLUE);
Rectangle r8(900,-2500,100,100);
r8.setColor(BLUE);
r8.setFill(BLUE);
Rectangle r9(3000,500,100,100);
r9.setColor(BLUE);
r9.setFill(BLUE);
Rectangle r10(300,900,100,100);
r10.setColor(BLUE);
r10.setFill(BLUE);
Rectangle r11(1000,-3000,100,100);
r11.setColor(BLUE);
r11.setFill(BLUE);
Rectangle r12(3500,800,100,100);
r12.setColor(BLUE);
r12.setFill(BLUE);
Rectangle r13(800,-3500,100,100);
r13.setColor(BLUE);
r13.setFill(BLUE);
Rectangle r14(5000,800,100,100);
r14.setColor(BLUE);
r14.setFill(BLUE);
Rectangle r15(1000,-4000,100,100);
r15.setColor(BLUE);
r15.setFill(BLUE);
Rectangle r16(4500,700,100,100);
r16.setColor(BLUE);
r16.setFill(BLUE);
Rectangle r17(1000,5000,100,100);
r17.setColor(BLUE);
r17.setFill(BLUE);
Rectangle r18(1300,-5500,100,100);
r18.setColor(BLUE);
r18.setFill(BLUE);
Rectangle r19(800,-6500,100,100);
r19.setColor(BLUE);
r19.setFill(BLUE);
Rectangle r20(6000,400,100,100);
r20.setColor(BLUE);
r20.setFill(BLUE);

//ARROWS
XEvent e;
while(1)
{
nextEvent(e);
switch(charFromEvent(e))
{
case 77:c.move(10,0);
break;

case 75:c.move(-10,0);
break;

case 72:c.move(0,-10);
break;

case 80:c.move(0,10);
break;
}

//OBSTACLE MOVEMENT
r.move(-10,0);
r1.move(0,-10);
r2.move(0,-10);
r3.move(0,10);
r4.move(0,10);
r5.move(-10,0);
r6.move(0,-10);
r7.move(-10,0);
r8.move(0,10);
r9.move(-10,0);
r10.move(0,-10);
r11.move(0,10);
r12.move(-10,0);
r13.move(0,-10);
r14.move(-10,0);
r15.move(0,10);
r16.move(-10,0);
r17.move(0,-10);
r18.move(0,10);
r19.move(0,10);
r20.move(-10,0);

//COIN COORDINATES
int x,y;
x=c.getX();
y=c.getY();
int coin1x,coin1y,coin2x,coin2y,coin3x,coin3y,coin4x,coin4y,coin5x,coin5y,coin6x,coin6y,coin7x,coin7y,coin8x,coin8y,coin9x,coin9y,coin10x,coin10y,coin11x,coin11y,coin12x,coin12y,coin13x,coin13y,coin14x,coin14y,coin15x,coin15y,coin16x,coin16y,coin17x,coin17y,coin18x,coin18y,coin19x,coin19y,coin20x,coin20y,coin21x,coin21y,coin22x,coin22y,coin23x,coin23y,coin24x,coin24y,coin25x,coin25y,coin26x,coin26y,coin27x,coin27y,coin28x,coin28y,coin29x,coin29y,coin30x,coin30y;
coin1x=c1.getX();
coin1y=c1.getY();
coin2x=c2.getX();
coin2y=c2.getY();
coin3x=c3.getX();
coin3y=c3.getY();
coin4x=c4.getX();
coin4y=c4.getY();
coin5x=c5.getX();
coin5y=c5.getY();
coin6x=c6.getX();
coin6y=c6.getY();
coin7x=c7.getX();
coin7y=c7.getY();
coin8x=c8.getX();
coin8y=c8.getY();
coin9x=c9.getX();
coin9y=c9.getY();
coin10x=c10.getX();
coin10y=c10.getY();
coin11x=c11.getX();
coin11y=c11.getY();
coin12x=c12.getX();
coin12y=c12.getY();
coin13x=c13.getX();
coin13y=c13.getY();
coin14x=c14.getX();
coin14y=c14.getY();
coin15x=c15.getX();
coin15y=c15.getY();
coin16x=c16.getX();
coin16y=c16.getY();
coin17x=c17.getX();
coin17y=c17.getY();
coin18x=c18.getX();
coin18y=c18.getY();
coin19x=c19.getX();
coin19y=c19.getY();
coin20x=c20.getX();
coin20y=c20.getY();
coin21x=c21.getX();
coin21y=c21.getY();
coin22x=c22.getX();
coin22y=c22.getY();
coin23x=c23.getX();
coin23y=c23.getY();
coin24x=c24.getX();
coin24y=c24.getY();
coin25x=c25.getX();
coin25y=c25.getY();
coin26x=c26.getX();
coin26y=c26.getY();
coin27x=c27.getX();
coin27y=c27.getY();
coin28x=c28.getX();
coin28y=c28.getY();
coin29x=c29.getX();
coin29y=c29.getY();
coin30x=c30.getX();
coin30y=c30.getY();

if ((x==coin1x)&&(y==coin1y))
{
    score+=100;
    c1.hide();
}
if ((x==coin2x)&&(y==coin2y))
{
    score+=100;
    c2.hide();
}
if ((x==coin3x)&&(y==coin3y))
{
    score+=100;
    c3.hide();
}
if ((x==coin4x)&&(y==coin4y))
{
    score+=100;
    c4.hide();
}
if ((x==coin5x)&&(y==coin5y))
{
    score+=100;
    c5.hide();
}
if ((x==coin6x)&&(y==coin6y))
{

     score+=100;
    c6.hide();
}
if ((x==coin7x)&&(y==coin7y))
{

     score+=100;
    c7.hide();
}
if ((x==coin8x)&&(y==coin8y))
{

     score+=100;
    c8.hide();
}
if ((x==coin9x)&&(y==coin9y))
{

     score+=100;
    c9.hide();
}
if ((x==coin10x)&&(y==coin10y))
{

     score+=100;
    c10.hide();
}
if ((x==coin11x)&&(y==coin11y))
{

     score+=100;
    c11.hide();
}
if ((x==coin12x)&&(y==coin12y))
{

     score+=100;
    c12.hide();
}
if ((x==coin13x)&&(y==coin13y))
{

     score+=100;
    c13.hide();
}
if ((x==coin14x)&&(y==coin14y))
{

     score+=100;
    c14.hide();
}
if ((x==coin15x)&&(y==coin15y))
{

     score+=100;
    c15.hide();
}
if ((x==coin16x)&&(y==coin16y))
{

    score+=100;
    c16.hide();
}
if ((x==coin17x)&&(y==coin17y))
{

     score+=100;
    c17.hide();
}
if ((x==coin18x)&&(y==coin18y))
{

     score+=100;
    c18.hide();
}
if ((x==coin19x)&&(y==coin19y))
{

     score+=100;
    c19.hide();
}
if ((x==coin20x)&&(y==coin20y))
{

    score+=100;
    c20.hide();

}
if ((x==coin21x)&&(y==coin21y))
{

     score+=100;
    c21.hide();
}
if ((x==coin22x)&&(y==coin22y))
{

     score+=100;
    c22.hide();
}
if ((x==coin23x)&&(y==coin23y))
{

   score+=100;
    c23.hide();
}
if ((x==coin24x)&&(y==coin24y))
{

     score+=100;
    c24.hide();
}
if ((x==coin25x)&&(y==coin25y))
{

     score+=100;
    c25.hide();
}
if ((x==coin26x)&&(y==coin26y))
{

     score+=100;
    c26.hide();

}
if ((x==coin27x)&&(y==coin27y))
{

    score+=100;
    c27.hide();
}
if ((x==coin28x)&&(y==coin28y))
{

     score+=100;
    c28.hide();
}
if ((x==coin29x)&&(y==coin29y))
{

     score+=100;
    c29.hide();
}
if ((x==coin30x)&&(y==coin30y))
{

     score+=100;
    c30.hide();
}

//RECTANGLE COORDINATES
int rx,ry,r1x,r1y,r2x,r2y,r3x,r3y,r4x,r4y,r5x,r5y,r6x,r6y,r7x,r7y,r8x,r8y,r9x,r9y,r10x,r10y,r11x,r11y,r12x,r12y,r13x,r13y,r14x,r14y,r15x,r15y,r16x,r16y,r17x,r17y,r18x,r18y,r19x,r19y,r20x,r20y;
rx=r.getX();
ry=r.getY();
r1x=r1.getX();
r1y=r1.getY();
r2x=r2.getX();
r2y=r2.getY();
r3x=r3.getX();
r3y=r3.getY();
r4x=r4.getX();
r4y=r4.getY();
r5x=r5.getX();
r5y=r5.getY();
r6x=r6.getX();
r6y=r6.getY();
r7x=r7.getX();
r7y=r7.getY();
r8x=r8.getX();
r8y=r8.getY();
r9x=r9.getX();
r9y=r9.getY();
r10x=r10.getX();
r10y=r10.getY();
r11x=r11.getX();
r11y=r11.getY();
r12x=r12.getX();
r12y=r12.getY();
r13x=r13.getX();
r13y=r13.getY();
r14x=r14.getX();
r14y=r14.getY();
r15x=r15.getX();
r15y=r15.getY();
r16x=r16.getX();
r16y=r16.getY();
r17x=r17.getX();
r17y=r17.getY();
r18x=r18.getX();
r18y=r18.getY();
r19x=r19.getX();
r19y=r19.getY();
r20x=r20.getX();
r20y=r20.getY();

//COLLISION OF CIRCLE WITH RECTANGLE
//r
//case 1:colliding from bottom

if(((x+10>=rx-50)&&(x+10<=rx+50))&&(ry+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(rx-50))&&((y>=(ry-50))&&(y<=(ry+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=rx-50)&&(x+10>=rx+50))&&(y+10==ry-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(rx+50))&&((y>=(ry-50))&&(y<=(ry+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//r1
//case 1:colliding from bottom

if(((x+10>=r1x-50)&&(x+10<=r1x+50))&&(r1y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r1x-50))&&((y>=(r1y-50))&&(y<=(r1y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r1x-50)&&(x+10>=r1x+50))&&(y+10==r1y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r1x+50))&&((y>=(r1y-50))&&(y<=(r1y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//r2
//case 1:colliding from bottom

if(((x+10>=r2x-50)&&(x+10<=r2x+50))&&(r2y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r2x-50))&&((y>=(r2y-50))&&(y<=(r2y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r2x-50)&&(x+10>=r2x+50))&&(y+10==r2y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r2x+50))&&((y>=(r2y-50))&&(y<=(r2y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;

wait(3);
break;
}//r3
//case 1:colliding from bottom

if(((x+10>=r3x-50)&&(x+10<=r3x+50))&&(r3y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r3x-50))&&((y>=(r3y-50))&&(y<=(r3y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r3x-50)&&(x+10>=r3x+50))&&(y+10==r3y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r3x+50))&&((y>=(r3y-50))&&(y<=(r3y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}//r4
//case 1:colliding from bottom

if(((x+10>=r4x-50)&&(x+10<=r4x+50))&&(r4y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r4x-50))&&((y>=(r4y-50))&&(y<=(r4y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r4x-50)&&(x+10>=r4x+50))&&(y+10==r4y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r4x+50))&&((y>=(r4y-50))&&(y<=(r4y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r5
//case 1:colliding from bottom

if(((x+10>=r5x-50)&&(x+10<=r5x+50))&&(r5y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r5x-50))&&((y>=(r5y-50))&&(y<=(r5y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r5x-50)&&(x+10>=r5x+50))&&(y+10==r5y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r5x+50))&&((y>=(r5y-50))&&(y<=(r5y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r6
//case 1:colliding from bottom

if(((x+10>=r6x-50)&&(x+10<=r6x+50))&&(r6y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r6x-50))&&((y>=(r6y-50))&&(y<=(r6y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r6x-50)&&(x+10>=r6x+50))&&(y+10==r6y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r6x+50))&&((y>=(r6y-50))&&(y<=(r6y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r7
//case 1:colliding from bottom

if(((x+10>=r7x-50)&&(x+10<=r7x+50))&&(r7y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r7x-50))&&((y>=(r7y-50))&&(y<=(r7y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r7x-50)&&(x+10>=r7x+50))&&(y+10==r7y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r7x+50))&&((y>=(r7y-50))&&(y<=(r7y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r8
//case 1:colliding from bottom

if(((x+10>=r8x-50)&&(x+10<=r8x+50))&&(r8y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r8x-50))&&((y>=(r8y-50))&&(y<=(r8y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r8x-50)&&(x+10>=r8x+50))&&(y+10==r8y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r8x+50))&&((y>=(r8y-50))&&(y<=(r8y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r9
//case 1:colliding from bottom

if(((x+10>=r9x-50)&&(x+10<=r9x+50))&&(r9y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r9x-50))&&((y>=(r9y-50))&&(y<=(r9y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r9x-50)&&(x+10>=r9x+50))&&(y+10==r9y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r9x+50))&&((y>=(r9y-50))&&(y<=(r9y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r10
//case 1:colliding from bottom

if(((x+10>=r10x-50)&&(x+10<=r10x+50))&&(r10y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r10x-50))&&((y>=(r10y-50))&&(y<=(r10y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r10x-50)&&(x+10>=r10x+50))&&(y+10==r10y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r10x+50))&&((y>=(r10y-50))&&(y<=(r10y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r11
//case 1:colliding from bottom

if(((x+10>=r11x-50)&&(x+10<=r11x+50))&&(r11y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r11x-50))&&((y>=(r11y-50))&&(y<=(r11y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r11x-50)&&(x+10>=r11x+50))&&(y+10==r11y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r11x+50))&&((y>=(r11y-50))&&(y<=(r11y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r12
//case 1:colliding from bottom

if(((x+10>=r12x-50)&&(x+10<=r12x+50))&&(r12y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r12x-50))&&((y>=(r12y-50))&&(y<=(r12y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r12x-50)&&(x+10>=r12x+50))&&(y+10==r12y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r12x+50))&&((y>=(r12y-50))&&(y<=(r12y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r13
//case 1:colliding from bottom

if(((x+10>=r13x-50)&&(x+10<=r13x+50))&&(r13y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r13x-50))&&((y>=(r13y-50))&&(y<=(r13y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r13x-50)&&(x+10>=r13x+50))&&(y+10==r13y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r13x+50))&&((y>=(r13y-50))&&(y<=(r13y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r14
//case 1:colliding from bottom

if(((x+10>=r14x-50)&&(x+10<=r14x+50))&&(r14y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r14x-50))&&((y>=(r14y-50))&&(y<=(r14y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r14x-50)&&(x+10>=r14x+50))&&(y+10==r14y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r14x+50))&&((y>=(r14y-50))&&(y<=(r14y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r15
//case 1:colliding from bottom

if(((x+10>=r15x-50)&&(x+10<=r15x+50))&&(r15y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r15x-50))&&((y>=(r15y-50))&&(y<=(r15y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r15x-50)&&(x+10>=r15x+50))&&(y+10==r15y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r15x+50))&&((y>=(r15y-50))&&(y<=(r15y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r16
//case 1:colliding from bottom

if(((x+10>=r16x-50)&&(x+10<=r16x+50))&&(r16y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r16x-50))&&((y>=(r16y-50))&&(y<=(r16y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r16x-50)&&(x+10>=r16x+50))&&(y+10==r16y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r16x+50))&&((y>=(r16y-50))&&(y<=(r16y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r17
//case 1:colliding from bottom

if(((x+10>=r17x-50)&&(x+10<=r17x+50))&&(r17y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r17x-50))&&((y>=(r17y-50))&&(y<=(r17y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r17x-50)&&(x+10>=r17x+50))&&(y+10==r17y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r17x+50))&&((y>=(r17y-50))&&(y<=(r17y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r18
//case 1:colliding from bottom

if(((x+10>=r18x-50)&&(x+10<=r18x+50))&&(r18y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r18x-50))&&((y>=(r18y-50))&&(y<=(r18y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r18x-50)&&(x+10>=r18x+50))&&(y+10==r18y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r18x+50))&&((y>=(r18y-50))&&(y<=(r18y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}//r19
//case 1:colliding from bottom

if(((x+10>=r19x-50)&&(x+10<=r19x+50))&&(r19y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r19x-50))&&((y>=(r19y-50))&&(y<=(r19y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r19x-50)&&(x+10>=r19x+50))&&(y+10==r19y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r19x+50))&&((y>=(r19y-50))&&(y<=(r19y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//r20
//case 1:colliding from bottom

if(((x+10>=r20x-50)&&(x+10<=r20x+50))&&(r20y+50==y+10))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 2:colliding from left

if(((x+10)>=(r20x-50))&&((y>=(r20y-50))&&(y<=(r20y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}
//case 3:colliding from top

if(((x+10<=r20x-50)&&(x+10>=r20x+50))&&(y+10==r20y-50))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;

}
//case 4:colliding from right

if(((x+10)>=(r20x+50))&&((y>=(r20y-50))&&(y<=(r20y+50))))
{
cout<<"GAME OVER"<<endl;
Text t(680,350,"!!!GAME OVER!!!");
cout<<"Your Score is "<<score;
wait(3);
break;
}

//CHECKPOINT
int checkx,checky;

checkx=checkpoint.getX();
checky=checkpoint.getY();

if((x==checkx)&&(y==checky))
{
cout<<"YOU WIN"<<endl;;
Text t(680,350,"!!!YOU WIN!!!");
wait(3);
cout<<"Your Score is "<<score;
break;
}



}
}
