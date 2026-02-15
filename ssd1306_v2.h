#ifndef SSD1306_H
#define SSD1306_H

#include <stdint.h>
#include <stdbool.h>

// Display size
#define SSD1306_WIDTH   128
#define SSD1306_HEIGHT  64

// Color options
#define BLACK   0
#define WHITE   1

// Row Definitions for 6x8 Font (Pixel starting positions)  TG Added these
//Note each character is 8 pixels in height
//#define ROW0    0
//#define ROW1    8
//#define ROW2    16
//#define ROW3    24
//#define ROW4    32
//#define ROW5    40
//#define ROW6    48
//#define ROW7    56

// Font structure (for extensibility)
typedef struct {
    const uint8_t width;
    const uint8_t height;
    const uint8_t *data;
} FontDef;

// Example font declaration (6x8 classic)
extern const FontDef Font_6x8;

// Public functions
void SSD1306_Init(void);
void SSD1306_ClearDisplay(void);
//void SSD1306_SetCursor(uint8_t x, uint8_t y);
void SSD1306_SetCursor(uint8_t col, uint8_t row);
void SSD1306_WriteChar(char ch, const FontDef font, uint8_t color);
void SSD1306_WriteString(const char* str, const FontDef font, uint8_t color);
void SSD1306_Display(void);
void SSD1306_PowerDown(void);
void SSD1306_PowerUp(void);

#endif
