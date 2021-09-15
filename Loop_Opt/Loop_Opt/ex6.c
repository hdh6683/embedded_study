//Before
for (i = 0; i < 30; i++) {
	sum[i] = (group1->classA->person[i]->kor) +
		(group1->classA->person[i]->math) +
		group1->classA->person[i]->eng;
}

//After
struct student* tmp = group1->classA;
for (i = 0; i < 30; i++) {
	sum[i] = tmp->person[i]->kor +
		tmp->person[i]->math +
		tmp->person[i]->eng;
}