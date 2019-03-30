#include "object.h"
#include <stdlib.h>
#include <stdio.h>

Object *createCircle(int id, double radius, double x, double y) {
    Object *newObj = malloc(sizeof(Object));
    Circle *newCircle = malloc(sizeof(Circle));
    newCircle->radius = radius;
    newCircle->x = x;
    newCircle->y = y;
    newObj->content = newCircle;
    newObj->type = OBJ_CIRC;
    newObj->id = id;
    return newObj;
}

Object *createRectangle(int id, double width, double height, double x, double y) {
    Object *newObj = malloc(sizeof(Object));
    Rectangle *newRect = malloc(sizeof(Rectangle));
    newRect->width = width;
    newRect->height = height;
    newRect->x = x;
    newRect->y = y;
    newObj->content = newRect;
    newObj->type = OBJ_RECT;
    newObj->id = id;
    return newObj;
}

void destroyObject(Object *obj) {
    free(obj->content);
    free(obj);
}