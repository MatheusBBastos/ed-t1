#include "svg.h"

void putSVGStart(FILE *file) {
    fputs("<svg height=\"1000\" width=\"1000\">\n", file);
}

void putSVGCircle(FILE *file, Circle *circ, char color1[], char color2[]) {
    fprintf(file, "<circle cx=\"%lf\" cy=\"%lf\" r=\"%lf\" stroke=\"%s\" stroke-width=\"%s\" fill=\"%s\"/>\n",
            circ->x,
            circ->y,
            circ->radius,
            color1,
            STROKE_WIDTH,
            color2);
}

void putSVGRectangle(FILE *file, Rectangle *rect, char color1[], char color2[]) {
    fprintf(file, "<rect x=\"%lf\" y=\"%lf\" width=\"%lf\" height=\"%lf\" stroke=\"%s\" stroke-width=\"%s\" fill=\"%s\"/>\n",
            rect->x,
            rect->y,
            rect->width,
            rect->height,
            color1,
            STROKE_WIDTH,
            color2);
}

void putSVGText(FILE *file, double x, double y, char text[]) {
    fprintf(file, "<text x=\"%lf\" y=\"%lf\" fill=\"%s\">%s</text>\n",
            x, y, TEXT_FILL_COLOR, text);
}

void putSVGBox(FILE *file, double x, double y, double width, double height, bool gaps) {
    fprintf(file, "<rect x=\"%lf\" y=\"%lf\" width=\"%lf\" height=\"%lf\" stroke=\"black\" fill=\"none\" stroke-width=\"%s\" stroke-dasharray=\"%s\"/>\n",
            x,
            y,
            width,
            height,
            STROKE_WIDTH,
            gaps ? "2" : "0");
}

void putSVGPoint(FILE *file, double x, double y, bool inside) {
    fprintf(file, "<circle cx=\"%lf\" cy=\"%lf\" r=\"%lf\" fill=\"%s\"/>\n",
            x,
            y,
            POINT_RADIUS,
            inside ? "green" : "red");
}

void putSVGLine(FILE *file, double x1, double y1, double x2, double y2) {
    fprintf(file, "<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" style=\"stroke:rgb(0,0,0);stroke-width:%s\" />",
            x1,
            y1,
            x2,
            y2,
            STROKE_WIDTH);
}

void putSVGEnd(FILE *file) {
    fputs("</svg>\n", file);
}