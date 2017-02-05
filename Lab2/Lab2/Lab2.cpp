// Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"


void part3(char* str3) {
	char* strheap = (char*)malloc(14);
	int count = 0;
	while (count != 14) {
		strheap[count] = str3[count];
		count++;
	}

}

int main()
{
	//part 1 
//#pragma bssseg ("MyBSS");
	//part 1 end
	//part2
	char* str = (char*) malloc(13);
	str = "123456789011";
	char* str2 = str;
	//end part2
	//part 3
	char* str3 = "thisis14bytes";
	part3(str3);
	//end part3 
	// part 4
	char* data4 = "thisisa15bytes!";
	int count = 0;
	//while (count != 15) {
		data4 = nullptr;
		//count++;
	//}
	// end part 4
	//part 5
	//not really sure hout to do this 
	
	return 0;
}

