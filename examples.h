int empty[81] = {
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0
};

int solved[81] = {
    1,2,3,4,5,6,7,8,9,
    4,5,6,7,8,9,1,2,3,
    7,8,9,1,2,3,4,5,6,
    2,1,4,3,6,5,8,9,7,
    3,6,5,8,9,7,2,1,4,
    8,9,7,2,1,4,3,6,5,
    5,3,1,6,4,2,9,7,8,
    6,4,2,9,7,8,5,3,1,
    9,7,8,5,3,1,6,4,2
};

int options[81] = {
    0,0,3,4,5,6,7,8,9,
    4,5,6,7,8,9,1,2,3,
    7,8,9,1,2,3,4,5,6,
    0,0,4,3,6,5,8,9,7,
    3,6,5,8,9,7,2,1,4,
    8,9,7,2,1,4,3,6,5,
    5,3,1,6,4,2,9,7,8,
    6,4,2,9,7,8,5,3,1,
    9,7,8,5,3,1,6,4,2
};

int brute[81] = {
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,3,0,8,5,
    0,0,1,0,2,0,0,0,0,
    0,0,0,5,0,7,0,0,0,
    0,0,4,0,0,0,1,0,0,
    0,9,0,0,0,0,0,0,0,
    5,0,0,0,0,0,0,7,3,
    0,0,2,0,1,0,0,0,0,
    0,0,0,0,4,0,0,0,9
};