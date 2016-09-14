

// Type description for turtle.
//
typdef struct _turtle {
  // Your fields here.
} turtle;

// Method prototypes.
//
turtle *new_turtle(char *name);
void forward(turtle *t);
void turn_left(turtle *t);
void turn_right(turtle *t);
void pen_down(turtle *t);
void pen_up(turtle *t);
char *as_string(turtle *t);
void replenish(turtle *t);
