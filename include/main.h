#ifndef MAIN_H
#define MAIN_H

#define LAST_F (n_dir_entries > ((unsigned)LINES - 6) ? ((unsigned)LINES - 6) : n_dir_entries)


void help(void);
void handle_winch(int);

#endif /* MAIN_H */
