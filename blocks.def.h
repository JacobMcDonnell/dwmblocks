//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
	{"", "cfetch | grep Today", 								0,		6},

	{"", "uname -sr",									0,		6},

	{"", "date +'%b %d %Y (%a) %I:%M%p'",							30,		8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
