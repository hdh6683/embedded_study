// before
int i, j = 10;
for (i = 0; i < 20; i++) {
	function(j);
}

// after
for (i = 0; i < 20; i += 4) {
	function(j);
	function(j);
	function(j);
	function(j);
}