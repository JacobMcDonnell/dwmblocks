//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
//	{"", "~/.local/bin/coronacounter",							0,		0},

	{"", "~/.local/bin/weather",								60,		1},

	{"", "volume",										0,		2},

	{"", "internet",									60,		3},

	{"", "~/.local/bin/battery",								60,		5},

	{"", "uname -sr",									0,		6},

	{"", "dateAndTime",									30,		7},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
