/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

/* -b option; if 0, dmenu appears at bottom */
static int topbar                   = 1;

/* -bw option; size of the window border */
static unsigned int border_width    = 0;

/* -p option; prompt to the left of input field */
static const char *prompt           = NULL;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines           = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
