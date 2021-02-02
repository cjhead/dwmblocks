#define PATH(name)                      "/home/carl/.scripts/"name

/* DELIMITERENDCHAR must be less than 32.
 * At max, DELIMITERENDCHAR - 1 number of clickable blocks will be allowed.
 * Raw characters larger than DELIMITERENDCHAR and smaller than ' ' in ASCII
   character set can be used for signaling color change in status.
 * The character corresponding to DELIMITERENDCHAR + 1 ('\x0b' when
   DELIMITERENDCHAR is 10) will switch the active colorscheme to the first one
   defined in colors array in dwm's config.h and so on.
 * If you wish to change DELIMITERENDCHAR, don't forget to update its value in
   dwm.c and color codes in your pathu programs. */
#define DELIMITERENDCHAR                10

/* If interval of a block is set to 0, the block will only be updated once at
   startup.
 * If interval is set to a negative value, the block will never be updated in
   the main loop.
 * Set pathc to NULL if clickability is not required for the block.
 * Set signal to 0 if both clickability and signaling are not required for the
   block.
 * Signal must be less than DELIMITERENDCHAR for clickable blocks.
 * If multiple signals are pending, then the lowest numbered one will be
   delivered first. */

/* pathu - path of the program whose output is used as status text of the block
           (output of the program should end in a null or newline character)
 * pathc - path of the program used for handling clicks on the block */

/* 1 interval = INTERVALs seconds, INTERVALn nanoseconds */
#define INTERVALs                       1
#define INTERVALn                       0

static Block blocks[] = {
/*      pathu                           pathc                           interval        signal */
        { PATH("weather"),              PATH("weather_button"),         0,              3},
        { PATH("cpu_stats"),            PATH("cpu_stats_button"),       60,             2},
        { PATH("gpu_stats"),            NULL,                           60,             0},
        { PATH("upgrades"),             PATH("upgrades_button"),        3600,           4},
        { PATH("bluetooth"),            PATH("bluetooth_button"),       0,              5},
        { PATH("volume"),               PATH("volume_button"),          0,              1},
        { PATH("battery"),              NULL,                           60,             0},
        { PATH("cdate"),                NULL,                           60,             0},
        { NULL } /* just to mark the end of the array */
};

/* default delimiter string */
#define DELIMITER                       "   "
