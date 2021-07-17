/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* colorscheme */
static char norm_fg[]               = "#ebdbb2";
static char norm_bg[]               = "#282828";
static char sel_fg[]                = "#ebdbb2";
static char sel_bg[]                = "#458588";
static char out_fg[]                = "#282828";
static char out_bg[]                = "#282828";
static char hlsel_fg[]              = "#b8bb26";
static char hlsel_bg[]              = "#458588";
static char hlnorm_fg[]             = "#b8bb26";
static char hlnorm_bg[]             = "#282828";
static char *colors[SchemeLast][2]  = {
	/*                                  fg          bg       */
	[SchemeNorm]                    = { norm_fg,    norm_bg   },
	[SchemeSel]                     = { sel_fg,     sel_bg    },
	[SchemeOut]                     = { out_fg,     out_bg    },
	[SchemeSelHighlight]            = { hlsel_fg,   hlsel_bg  },
	[SchemeNormHighlight]           = { hlnorm_fg,  hlnorm_bg },
};

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]          = {
	"monospace:size=10"
};

/* Xresources */
ResourcePref resources[]            = {
	{ "color15",    STRING,     &norm_fg   },
	{ "color0",     STRING,     &norm_bg   },
	{ "color0",     STRING,     &sel_fg    },
	{ "color2",     STRING,     &sel_bg    },
	{ "color6",     STRING,     &hlsel_fg  },
	{ "color2",     STRING,     &hlsel_bg  },
	{ "color6",     STRING,     &hlnorm_fg },
	{ "color0",     STRING,     &hlnorm_bg },
};

/* -b option; if 0, dmenu appears at bottom */
static int topbar                   = 1;

/* -bw option; size of the window border */
static unsigned int border_width    = 0;

/* -c option; centers dmenu on screen */
static int centered                 = 0;
/* minimum width when centered */
static int min_width                = 500;

/* -F option; if 0, dmenu doesn't use fuzzy matching */
static int fuzzy                    = 1;

/* -h option; minimum height of a menu line */
static unsigned int lineheight      = 25;
static unsigned int min_lineheight  = 10;

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines           = 0;
static unsigned int columns         = 0;

/* -p option; prompt to the left of input field */
static const char *prompt           = NULL;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[]  = " ";
