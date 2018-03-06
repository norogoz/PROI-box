
#ifndef BOX_H
#define BOX_H

#define SIZE 5


class Box
{
    int space[SIZE], sp = 0;

    public:
        int put (int);
        int take ();
        int clean ();
        Box();
        char *name = "BOX01";
};

#endif // BOX_H
