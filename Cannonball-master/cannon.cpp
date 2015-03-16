#include "cannon.h"

void Cannon::build() {
    body.build(1.0,0.7,3.0);
    end.build(10,10);
}

void Cannon::render() const {
    static float COPPER_AMBIENT[] = {0.191250, 0.073500, 0.022500, 1.000000};
    static float COPPER_DIFFUSE[] = {0.703800, 0.270480, 0.082800, 1.000000};
    static float COPPER_SPECULAR[] = {0.256777, 0.137622, 0.086014, 1.000000};

    glMaterialfv(GL_FRONT, GL_AMBIENT, COPPER_AMBIENT);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, COPPER_DIFFUSE);
    glMaterialfv(GL_FRONT, GL_SPECULAR, COPPER_SPECULAR);
    glMaterialf(GL_FRONT, GL_SHININESS, 12.8);
    glPushMatrix();
    glRotatef(180,1,0,0);
    glTranslatef(0,0,-2);
    body.render();
    glPushMatrix();
    glTranslatef(0,0,1.0);
    end.render();
    glPopMatrix();
};