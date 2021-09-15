#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//Before
	int i, j = 10;
	for (i = 0; i < 67; i++) {
		function(j);
	}

	//After
	int i, j = 10;
	for (i = 0; i < 66; i += 11) {
		function(j);
		function(j);
		function(j);
		function(j);
		function(j);
		function(j);
		function(j);
		function(j);
		function(j);
		function(j);
		function(j);
	}
	function(j);
}