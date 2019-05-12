#include<stdio.h>
#include<math.h>

typedef struct point{

	int m;
	int n;
}pt;

pt MakePoint(int a,int b){

	pt temp /*= {a,b}*/;
	
	temp.m = a;
	temp.n = b;
	return temp;
}

double Norm(pt vb){

	return sqrt(vb.m*vb.m + vb.n*vb.n);
}

int main(){

	int x,y;
	pt pnt;

	printf("Enter co-ordinates of a point to find out its norm(shortest distance) from the origin : ");
	scanf("%d%d",&x,&y);

//	pnt = MakePoint(x,y);

	printf("The norm of point(%d,%d) is : %lf \a\n",x,y,Norm(MakePoint(x,y)));

	return 0;
}