#include <stdio.h>
#include <unistd.h>
#include "sense.h"

#define WHITE 0xFFFF
#define GREEN 0x07E0
#define BLACK 0x0000
int main(void) {
    // getFrameBuffer should only get called once/program
    pi_framebuffer_t *fb=getFrameBuffer();
    sense_fb_bitmap_t *bm=fb->bitmap;

    clearFrameBuffer(fb,BLACK);
 

    // Row one of B
    bm->pixel[6][1]=WHITE;
    bm->pixel[5][1]=WHITE;
    bm->pixel[4][1]=WHITE;
    bm->pixel[3][1]=WHITE;

    // row two of B
    bm->pixel[6][2]=WHITE;
    bm->pixel[5][2]=WHITE;
    bm->pixel[2][2]=WHITE;

    //row three of B
    bm->pixel[6][3]=WHITE;
    bm->pixel[5][3]=WHITE;
    bm->pixel[4][3]=WHITE;
    bm->pixel[3][3]=WHITE;

    //row four of B
    bm->pixel[6][4]=WHITE;
    bm->pixel[5][4]=WHITE;
    bm->pixel[2][4]=WHITE;
    bm->pixel[1][4]=WHITE;

    //row five of B
    bm->pixel[6][5]=WHITE;
    bm->pixel[5][5]=WHITE;
    bm->pixel[2][5]=WHITE;
    bm->pixel[1][5]=WHITE;

    //row six of B
    bm->pixel[6][6]=WHITE;
    bm->pixel[5][6]=WHITE;
    bm->pixel[4][6]=WHITE;
    bm->pixel[3][6]=WHITE;
    bm->pixel[2][6]=WHITE;
    bm->pixel[1][6]=WHITE;
    // see: "man 3 sleep"
    sleep(1);
    // freeFrameBuffer() should only be called once/program
    // may or may not clear the screen. See "clear" example.

    clearFrameBuffer(fb,BLACK);
   


    //top of shamrock 
    bm->pixel[2][1]=GREEN;
    bm->pixel[3][1]=GREEN;
    bm->pixel[4][1]=GREEN;
    bm->pixel[5][1]=GREEN;
    bm->pixel[2][2]=GREEN;
    bm->pixel[3][2]=GREEN;
    bm->pixel[4][2]=GREEN;
    bm->pixel[5][2]=GREEN;

    //middle of shamrock
    bm->pixel[1][3]=GREEN;
    bm->pixel[2][3]=GREEN;
    bm->pixel[3][3]=GREEN;
    bm->pixel[4][3]=GREEN;
    bm->pixel[5][3]=GREEN;
    bm->pixel[6][3]=GREEN;
    bm->pixel[1][4]=GREEN;
    bm->pixel[2][4]=GREEN;
    bm->pixel[3][4]=GREEN;
    bm->pixel[4][4]=GREEN;
    bm->pixel[5][4]=GREEN;
    bm->pixel[6][4]=GREEN;
    bm->pixel[1][5]=GREEN;
    bm->pixel[2][5]=GREEN;
    bm->pixel[3][5]=GREEN;
    bm->pixel[4][5]=GREEN;
    bm->pixel[5][5]=GREEN;
    bm->pixel[6][5]=GREEN;
    
    //bottom of shamrock
    bm->pixel[3][6]=GREEN;
    bm->pixel[4][6]=GREEN;
    bm->pixel[2][7]=GREEN;
    bm->pixel[3][7]=GREEN;
    bm->pixel[4][7]=GREEN;
    bm->pixel[5][7]=GREEN;

    sleep(1);

    clearFrameBuffer(fb,BLACK);
    //top of Z
    bm->pixel[1][1]=WHITE;
    bm->pixel[2][1]=WHITE;
    bm->pixel[3][1]=WHITE;
    bm->pixel[4][1]=WHITE;
    bm->pixel[5][1]=WHITE;
    bm->pixel[6][1]=WHITE;

    //middle of Z 
    bm->pixel[2][2]=WHITE;
    bm->pixel[3][3]=WHITE;
    bm->pixel[4][4]=WHITE;
    bm->pixel[5][5]=WHITE;
    //bottom of z
    bm->pixel[1][6]=WHITE;
    bm->pixel[2][6]=WHITE;
    bm->pixel[3][6]=WHITE;
    bm->pixel[4][6]=WHITE;
    bm->pixel[5][6]=WHITE;
    bm->pixel[6][6]=WHITE;

    sleep(1);
    clearFrameBuffer(fb,BLACK);
	    
    freeFrameBuffer(fb);
    return 0;
}
