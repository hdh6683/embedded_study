//before
if (a == 1) {
}else if (a == 2) {
}else if (a == 3) {
}else if (a == 4) {
}else if (a == 5) {
}else if (a == 6) {
}else if (a == 7) {
}else if (a == 8) {
}

//after (이진 분리 분기)
if (a <= 4) {
	if (a == 1) {
	}
	else if (a == 2) {
	}
	else if (a == 3) {
	}
	else if (a == 4) {
	}
}
else {
	else if (a == 5) {
	}
	else if (a == 6) {
	}
	else if (a == 7) {
	}
	else if (a == 8) {
	}
}