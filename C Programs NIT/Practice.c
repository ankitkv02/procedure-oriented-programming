#include<stdio.h>

typedef struct point{
	int x;
	int y;
} point;

typedef struct rectangle{
	point leftbot;
	point righttop;
} rect;

point makePoint();
rect makeRectangle();
void periRect(rect);
void areaRect(rect);

int main(){
	rect rc;

	rc = makeRectangle();
	periRect(rc);
	areaRect(rc);
								//Main function.
	return 0;
}

point makePoint(){
	int a,b;
	point pt;

	printf("x co-ordinate : ");
	scanf("%d",&pt.x);

	printf("y co-ordinate : ");
	scanf("%d",&pt.y);

	return pt;
}

rect makeRectangle(){
	rect r;

	printf("Enter the rectangle's leftbottom point's ");
	r.leftbot = makePoint();
	printf("Enter the rectangle's righttop point's ");
	r.righttop = makePoint();

	return r;
}

void periRect(rect r){
	float peri;
	peri = 2*((r.righttop.x-r.leftbot.x)+(r.righttop.y-r.leftbot.y));
	printf("The perimeter of the rectangle is - %.2f units. \n",peri);
}

void areaRect(rect r){
	double area;
	area = (r.righttop.x-r.leftbot.x)*(r.righttop.y-r.leftbot.y);
	printf("The area of the rectangle is - %.2f units(squared). \n",area);
}