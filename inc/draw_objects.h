//
//  draw_objects.h
//  Programmeringsprojekt
//
//  Created by Alexander Ohrt on 08/06/2018.
//  Copyright © 2018 Alexander Ohrt. All rights reserved.
//

#ifndef draw_objects_h
#define draw_objects_h

void window(int x1, int y1, int x2, int y2, char * title, uint8_t style);

typedef struct {
    int x, y, vX, vY; //(x,y) is the position of the ball, and (vX,vY) is the velocity-vector of the ball (how much it's going to move up/down next iteration)
} ball_t;
void drawBall(ball_t * ball_p);
void updateBallPos(ball_t * ball_p, int k);


#endif /* draw_objects_h */