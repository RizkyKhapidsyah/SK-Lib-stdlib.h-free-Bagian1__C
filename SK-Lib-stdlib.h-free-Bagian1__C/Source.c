#include <stdlib.h>     

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main(){
	int* buffer1, * buffer2, * buffer3;

	buffer1 = (int*)malloc(100 * sizeof(int));
	buffer2 = (int*)calloc(100, sizeof(int));
	buffer3 = (int*)realloc(buffer2, 500 * sizeof(int));
	
	free(buffer1);
	free(buffer3);

	_getch();
	return 0;
}