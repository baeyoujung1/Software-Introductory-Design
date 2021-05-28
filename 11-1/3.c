#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
}Point;
Point getScale2xPoint(const Point* ptr) {
	Point p2;
	p2.xpos = 2 * (ptr->xpos);
	p2.ypos = 2 * (ptr->ypos);
	return p2;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	Point p1;
	p1.xpos = a;
	p1.ypos = b;
	Point c=getScale2xPoint(&p1);
	printf("%d %d", c.xpos, c.ypos);
	return 0;
}