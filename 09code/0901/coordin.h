#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance;
    double angele;
    /* data */
};

struct rect
{
    double x;
    double y;
    /* data */
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif