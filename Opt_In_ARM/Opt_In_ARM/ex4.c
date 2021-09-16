struct Circle {
	float x, y, r;
};
struct Area {
	float s;
	struct Circle c1;
};

//before
void setShape(struct Area* a1) {
	a1->c1->x = 123;
	a1->c1->y = 257;
	a1->c1->r = 5;
}

//after
void setShape(struct Area* a1) {
	struct Circle* p = a1->c1;
	p->x = 123;
	p->y = 257;
	p->r = 5;
}