/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 1000;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"CaskaydiaCoveNerdFont:size=18:style=bold"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char unsel_bg[]        = "#000000";
static const char unsel_fg[]        = "#ffffff";
static const char sel_fg[]        = "#000000";
/*green colorscheme*/
/*static const char sel_tag[]        = "#67A86C";*/
static const char sel_tag[]        = "#ffffff";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { unsel_fg, unsel_bg },
	[SchemeSel] = { sel_fg, sel_tag },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 8;
static unsigned int columns    = 2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
