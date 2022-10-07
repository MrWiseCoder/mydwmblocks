//Modify this file to change what commands output to your statusbar, and recompile using the make command.

// Pywal makes colors [9:15] same as [1:7].
// No need to define both.
// Assuming if fg is color, bg is black,
// and if bg is color, fg is black.

static char fg0[] = "^C0^";
static char fg1[] = "^C1^";
static char fg2[] = "^C2^";
static char fg3[] = "^C3^";
static char fg4[] = "^C4^";
static char fg5[] = "^C5^";
static char fg6[] = "^C6^";
static char fg7[] = "^C7^";
static char fg8[] = "^C8^";

static char bg0[] = "^C0^^B0^ ";
static char bg1[] = "^C0^^B1^ ";
static char bg2[] = "^C0^^B2^ ";
static char bg3[] = "^C0^^B3^ ";
static char bg4[] = "^C0^^B4^ ";
static char bg5[] = "^C0^^B5^ ";
static char bg6[] = "^C0^^B6^ ";
static char bg7[] = "^C0^^B7^ ";
static char bg8[] = "^C0^^B8^ ";

/* Took from onedark
 * background="#1e2127" 
 * foreground="#abb2bf"
*/
static char bg[] = "^c#abb2bf^^b#1e2127^";

static const Block blocks[] = {
	/*Icon*/	/*Command*/								/*Update Interval*/	/*Update Signal*/
	/* ----------------------------------- Luke ------------------------------------------ */
	/* {"⌨", 	"sb-kbselect", 									0, 					30}, */
	// {"", 	"cat /tmp/recordingicon 2>/dev/null",			0,					9},
	// {"",		"sb-tasks",										10,					26},
	// {"",		"sb-music",										0,					11},
	// {"",		"sb-pacpackages",								0,					8},
	// {"",		"sb-news",										0,					6},
	/* {"",		"sb-price lbc \"LBRY Token\" 📚",				9000,				22}, */
	/* {"",		"sb-price bat \"Basic Attention Token\" 🦁",	9000,				20}, */
	/* {"",		"sb-price link \"Chainlink\" 🔗",				300,				25}, */
	/* {"",		"sb-price xmr \"Monero\" 🔒",					9000,				24}, */
	/* {"",		"sb-price eth Ethereum 🍸",						9000,				23}, */
	/* {"",		"sb-price btc Bitcoin 💰",						9000,				21}, */
	// {"",		"sb-torrent",									20,					7},
	// {"",		"sb-memory",									10,					14},
	/* {"",		"sb-cpu",										10,					18}, */
	/* {"",		"sb-moonphase",									18000,				17}, */
	// {"",		"sb-forecast",									18000,				5},
	// {"",		"sb-mailbox",									180,				12},
	// {"",		"sb-nettraf",									1,					16},
	// {"",		"sb-volume",									0,					10},
	// {"",		"sb-battery",									5,					3},
	// {"",		"sb-clock",										60,					1},
	// {"",		"sb-internet",									5,					4},
	// {"",		"sb-help-icon",									0,					15},
	/* ----------------------------- anton ----------------------------- */
    // { "",    "brightness",                           2,                0 },
    // { "",    "volume",                               2,                0 },
    // { "",    "battery",                              60,               0 },
    { "",    "date '+ %d/%m/%Y   %H:%M%p'",        5,                0 },
	/* ----------------------------- xado-spare ----------------------------- */
	// {"",	"xado-clock",		60,		1},
	// {"",	"xado-tasks",		10,		26},
	// {"",	"xado-music",		0,		11},
	// {"",	"xado-pacpackages",	0,		8},
	// {"",	"xado-mailbox",		180,	12},
	// {"",	"xado-internet",	5,		4},
	// {"",	"xado-mpdup",		36000,	0},
	/* ----------------------------- xado ----------------------------- */
	{"",	"xado-volume",		0,		10},
	{"",	"xado-battery",		5,		3},
	{"",	"xado-brightness",	1,		1},
	{"⌨", 	"xado-kbselect", 	0, 		30},
	{"",	"xado-memory",		10,		14},
	{"",	"xado-cpu2",		10,		18},
	{"",	"xado-cpu",			10,		18},
	{"",	"xado-disk",		10,		4},
	{"",	"xado-news",		0,		6},
	{"",	"xado-moonphase",	18000,	17},
	{"",	"xado-forecast",	18000,	5},
	{"",	"xado-nettraf",		1,		16},
	{"",	"xado-iplocate",	36000,	0},
	{"",	"xado-vpn",			36000,	7},
	/* ----------------------------- x ----------------------------- */
	// {"",	"x-volume",			0,		10},
	// {"",	"x-battery",		5,		3},
	// {"",	"x-brightness",		1,		1},
	// {"⌨", 	"x-kbselect", 		0, 		30},
	// {"",	"x-memory",			10,		14},
	// {"",	"x-cpu",			10,		18},
	// {"",	"x-disk",			10,		4},
	// {"",	"x-vpn",			36000,	7},
	/* -----------------------------×××××××----------------------------- */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
// static char *delim = "^c#d19a66^|^d^ ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
