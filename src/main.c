// [HiRes Invert S1 S0    RGB LED NC NC]
#define HIRES 0X80
#define INVERT 0X40
#define SCREEN_0 0x00
#define SCREEN_1 0x10
#define SCREEN_2 0x20
#define SCREEN_3 0x30
#define RGB 0x08
#define LED 0x04

typedef struct{
    unsigned char x, y, color;
} pixel_pair;



extern void __fastcall__ setVideoMode(char mode);
extern void __fastcall__ drawPixelPair(void*);
extern void __cdecl__ drawPixelPairStack(unsigned char x, unsigned char y, unsigned char color);


pixel_pair pixel;

void main(void){
    unsigned char row, col, z;

    // Color lowres mode
    setVideoMode(RGB | SCREEN_3);
    
    // Grayscale lowres mode
    //setVideoMode(SCREEN_3);
    
    // B&W Hires mode
    //setVideoMode(HIRES | SCREEN_3);
    
    
    
	drawPixelPairStack(0x11,0x22,0x33);
    
    while(1){}
}
