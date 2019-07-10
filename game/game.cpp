#include "game.h"

item::item(){}

item::~item(){}

bool item::Get_Type()
{
	return Type;
}

void item::Set_Type(bool type)
{
	Type = type;
}

char item::Get_Letter()
{
	return Letter;
}

void item::Set_Letter(char letter)
{
	Letter = letter;
}

int item::Get_Number()
{
	return Number;
}

void item::Set_Number(int number)
{
	Number = number;
}

iobox::iobox()
{
	Mission = 0;
	Set_Iobox();
}

iobox::iobox(int mission)
{
	Mission = mission;
	Set_Iobox();
}

iobox::~iobox()
{
	Inbox.clear();
	Outbox.clear();
}

std::vector <item> iobox::Get_Inbox()
{
	return Inbox;
}

std::vector <item> iobox::Get_Outbox()
{
	return Outbox;
}

void iobox::Set_Iobox()
{
	std::string inbox, outbox;
	item in, out;
	std::fstream fin("game.txt");
	int front = 0, rear = 0, temp, signal, pos;
	
	for (pos = 0; pos <= Mission; pos++) {
		getline(fin, inbox);
		getline(fin, outbox);
	}
	while (rear < inbox.size()) {
		while (inbox[rear] != ' ')
			rear++;
		if (rear - front > 1) {
			temp = 0;
			signal = 1;
			if (inbox[front] == '-') {
				front++;
				signal = -1;
			}
			for (pos = front; pos < rear; pos++)
				temp = 10 * temp + inbox[pos] - 48;
			temp *= signal;
			in.Set_Type(true);
			in.Set_Number(temp);
		}
		else if (inbox[front] >= 48 && inbox[front] <= 57) {
			in.Set_Type(true);
			in.Set_Number(inbox[front] - 48);
		}
		else {
			in.Set_Type(false);
			in.Set_Letter(inbox[front]);
		}
		Inbox.push_back(in);
		front = ++rear;
	}
	front = rear = 0;
	while (rear < outbox.size()) {
		while (outbox[rear] != ' ')
			rear++;
		if (rear - front > 1) {
			temp = 0;
			signal = 1;
			if (outbox[front] == '-') {
				front++;
				signal = -1;
			}
			for (pos = front; pos < rear; pos++)
				temp = 10 * temp + outbox[pos] - 48;
			temp *= signal;
			out.Set_Type(true);
			out.Set_Number(temp);
		}
		else if (outbox[front] >= 48 && outbox[front] <= 57) {
			out.Set_Type(true);
			out.Set_Number(outbox[front] - 48);
		}
		else {
			out.Set_Type(false);
			out.Set_Letter(outbox[front]);
		}
		Outbox.push_back(out);
		front = ++rear;
	}
	fin.close();
}
