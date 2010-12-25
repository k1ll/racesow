/*
 * Hardcoded list for converting from keycodes to keys
 */

#define MAX_HARDCODED_KEYS 118

int keycode_to_keysym_key[MAX_HARDCODED_KEYS][2] = {
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 65307, K_ESCAPE },
	{ 49, 49 },
	{ 50, 50 },
	{ 51, 51 },
	{ 52, 52 },
	{ 53, 53 },
	{ 54, 54 },
	{ 55, 55 },
	{ 56, 56 },
	{ 57, 57 },
	{ 48, 48 },
	{ 45, 45 },
	{ 61, 61 },
	{ 65288, K_BACKSPACE },
	{ 65289, K_TAB },
	{ 113, 113 },
	{ 119, 119 },
	{ 101, 101 },
	{ 114, 114 },
	{ 116, 116 },
	{ 121, 121 },
	{ 117, 117 },
	{ 105, 105 },
	{ 111, 111 },
	{ 112, 112 },
	{ 91, 91 },
	{ 93, 93 },
	{ 65293, K_ENTER },
	{ 65507, K_CTRL },
	{ 97, 97 },
	{ 115, 115 },
	{ 100, 100 },
	{ 102, 102 },
	{ 103, 103 },
	{ 104, 104 },
	{ 106, 106 },
	{ 107, 107 },
	{ 108, 108 },
	{ 59, 59 },
	{ 39, 39 },
	{ 96, 96 },
	{ 65505, K_SHIFT },
	{ 92, 92 },
	{ 122, 122 },
	{ 120, 120 },
	{ 99, 99 },
	{ 118, 118 },
	{ 98, 98 },
	{ 110, 110 },
	{ 109, 109 },
	{ 44, 44 },
	{ 46, 46 },
	{ 47, 47 },
	{ 65506, K_SHIFT },
	{ 65450, KP_STAR },
	{ 65513, K_ALT },
	{ 32, K_SPACE },
	{ 65509, K_CAPSLOCK },
	{ 65470, K_F1 },
	{ 65471, K_F2 },
	{ 65472, K_F3 },
	{ 65473, K_F4 },
	{ 65474, K_F5 },
	{ 65475, K_F6 },
	{ 65476, K_F7 },
	{ 65477, K_F8 },
	{ 65478, K_F9 },
	{ 65479, K_F10 },
	{ 65407, K_NUMLOCK },
	{ 65300, K_SCROLLLOCK },
	{ 65429, KP_HOME },
	{ 65431, KP_UPARROW },
	{ 65434, KP_PGUP },
	{ 65453, KP_MINUS },
	{ 65430, KP_LEFTARROW },
	{ 65437, KP_5 },
	{ 65432, KP_RIGHTARROW },
	{ 65451, KP_PLUS },
	{ 65436, KP_END },
	{ 65433, KP_DOWNARROW },
	{ 65435, KP_PGDN },
	{ 65438, KP_INS },
	{ 65439, KP_DEL },
	{ 65377, -1 },
	{ 65406, -1 },
	{ 60, 60 },
	{ 65480, K_F11 },
	{ 65481, K_F12 },
	{ 65360, K_HOME },
	{ 65362, K_UPARROW },
	{ 65365, K_PGUP },
	{ 65361, K_LEFTARROW },
	{ 0, -1 },
	{ 65363, K_RIGHTARROW },
	{ 65367, K_END },
	{ 65364, K_DOWNARROW },
	{ 65366, K_PGDN },
	{ 65379, K_INS },
	{ 65535, K_DEL },
	{ 65421, KP_ENTER },
	{ 65508, K_CTRL },
	{ 65299, K_PAUSE },
	{ 65377, -1 },
	{ 65455, KP_SLASH },
	{ 65514, K_ALT },
	{ 65299, K_PAUSE },
	{ 65515, K_WIN },
	{ 65516, K_WIN },
	{ 65383, K_MENU },
};