#include <iostream>
#include "game.h"

int main(void)
{
	std::vector <item> input, output;
	int pos;
	iobox test(1);
	input = test.Get_Inbox();
	output = test.Get_Outbox();
	for (pos = 0; pos < input.size(); pos++) {
		if (input[pos].Get_Type())
			std::cout << input[pos].Get_Number() << " ";
		else
			std::cout << input[pos].Get_Letter() << " ";
	}
	std::cout << std::endl;
	for (pos = 0; pos < output.size(); pos++) {
		if (output[pos].Get_Type())
			std::cout << output[pos].Get_Number() << " ";
		else
			std::cout << output[pos].Get_Letter() << " ";
	}
	std::cout << std::endl;
	return 0;
}
