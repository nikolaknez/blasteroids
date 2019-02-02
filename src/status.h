#ifndef STATUS_H
#define STATUS_H

#define STATUS_FONT_COLOR al_map_rgb (241, 156, 187)

void status_init  (void);
void status_free  (void);
void status_score (long score);
void status_lives (int lives);

#endif /* status.c */
