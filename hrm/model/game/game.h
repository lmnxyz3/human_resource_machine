#ifndef _GAME_H_
#define _GAME_H_

#include <fstream>
#include <string>
#include <vector>

class item {
private:
	char Letter;
	int Number;
	bool Type;
public:
	item();
	~item();
	bool Get_Type();
	void Set_Type(bool type);
	char Get_Letter();
	void Set_Letter(char letter);
	int Get_Number();
	void Set_Number(int number);
};

class iobox {
private:
	int Mission;
	std::vector <item> Inbox;
	std::vector <item> Outbox;
	void Set_Iobox();
public:
	iobox();
	iobox(int mission);
	~iobox();
	std::vector <item> Get_Inbox();
	std::vector <item> Get_Outbox();
};

#endif
