#include<stdio.h>

typedef struct point{
	int x;
	int y;
} point;

typedef struct rect{
	point leftbot;
	point righttop;
} rect;

point makePoint();
rect makeRect();
void areaRect(rect *r);
void periRect(rect *r);

int main(){

	rect r /*= {{2,3},{5,5}}*/ ;
	r = makeRect();
	periRect(&r);				//Main Fuction.
	areaRect(&r);

	return 0;
}

point makePoint(){

	point pt;
	int a,b;
	printf("x co-ordinate : ");
	scanf("%d",&a);
	printf("y co-ordinate : ");
	scanf("%d",&b);
	pt.x = a;
	pt.y = b;
	return pt;
}

rect makeRect(){

	rect r1;
	printf("Enter the rectangle's leftbottom point's ");
	r1.leftbot = makePoint();
	printf("Enter the rectangle's righttop point's ");
	r1.righttop = makePoint();

	/*printf("Enter rect's points : ");
	r1 = {makePoint(),makePoint()};*/

	return r1;
}

void areaRect(rect *r){
	double area;
	area = ((*r).righttop.x - (*r).leftbot.x)*((*r).righttop.y - (*r).leftbot.y);
	printf("Area of the rectangle is - %.2lf (units squared) \n",area);
}

void periRect(rect *r){
	int peri;
	peri = 2*(((*r).righttop.x - (*r).leftbot.x) + ((*r).righttop.y - (*r).leftbot.y));
	printf("Perimeter of the rectangle is - %d (units) \n",peri);
}