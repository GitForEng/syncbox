// TFT module connections
char TFT_DataPort at LATE;
sbit TFT_RST at LATD7_bit;
sbit TFT_BLED at LATD2_bit;
sbit TFT_RS at LATD9_bit;
sbit TFT_CS at LATD10_bit;
sbit TFT_RD at LATD5_bit;
sbit TFT_WR at LATD4_bit;
char TFT_DataPort_Direction at TRISE;
sbit TFT_RST_Direction at TRISD7_bit;
sbit TFT_BLED_Direction at TRISD2_bit;
sbit TFT_RS_Direction at TRISD9_bit;
sbit TFT_CS_Direction at TRISD10_bit;
sbit TFT_RD_Direction at TRISD5_bit;
sbit TFT_WR_Direction at TRISD4_bit;
// End TFT module connections

const code char HandelGothic_BT21x22_Regular[] = {
   0x00,
   0x00,
   0x20,0x00,
   0x7F,0x00,
   0x16,
   0x00,
   0x01,0x88,0x01,0x00,
   0x05,0x9E,0x01,0x00,
   0x06,0xB4,0x01,0x00,
   0x0E,0xCA,0x01,0x00,
   0x0E,0xF6,0x01,0x00,
   0x11,0x22,0x02,0x00,
   0x0F,0x64,0x02,0x00,
   0x03,0x90,0x02,0x00,
   0x06,0xA6,0x02,0x00,
   0x06,0xBC,0x02,0x00,
   0x09,0xD2,0x02,0x00,
   0x0E,0xFE,0x02,0x00,
   0x03,0x2A,0x03,0x00,
   0x06,0x40,0x03,0x00,
   0x03,0x56,0x03,0x00,
   0x08,0x6C,0x03,0x00,
   0x0E,0x82,0x03,0x00,
   0x04,0xAE,0x03,0x00,
   0x0C,0xC4,0x03,0x00,
   0x0B,0xF0,0x03,0x00,
   0x0F,0x1C,0x04,0x00,
   0x0C,0x48,0x04,0x00,
   0x0E,0x74,0x04,0x00,
   0x0C,0xA0,0x04,0x00,
   0x0D,0xCC,0x04,0x00,
   0x0D,0xF8,0x04,0x00,
   0x03,0x24,0x05,0x00,
   0x03,0x3A,0x05,0x00,
   0x0D,0x50,0x05,0x00,
   0x0D,0x7C,0x05,0x00,
   0x0D,0xA8,0x05,0x00,
   0x0D,0xD4,0x05,0x00,
   0x12,0x00,0x06,0x00,
   0x0F,0x42,0x06,0x00,
   0x0D,0x6E,0x06,0x00,
   0x0C,0x9A,0x06,0x00,
   0x0E,0xC6,0x06,0x00,
   0x0C,0xF2,0x06,0x00,
   0x0C,0x1E,0x07,0x00,
   0x0E,0x4A,0x07,0x00,
   0x0C,0x76,0x07,0x00,
   0x04,0xA2,0x07,0x00,
   0x09,0xB8,0x07,0x00,
   0x0D,0xE4,0x07,0x00,
   0x0A,0x10,0x08,0x00,
   0x10,0x3C,0x08,0x00,
   0x0D,0x68,0x08,0x00,
   0x0F,0x94,0x08,0x00,
   0x0D,0xC0,0x08,0x00,
   0x10,0xEC,0x08,0x00,
   0x0E,0x18,0x09,0x00,
   0x0E,0x44,0x09,0x00,
   0x0B,0x70,0x09,0x00,
   0x0D,0x9C,0x09,0x00,
   0x0E,0xC8,0x09,0x00,
   0x15,0xF4,0x09,0x00,
   0x0D,0x36,0x0A,0x00,
   0x0C,0x62,0x0A,0x00,
   0x0D,0x8E,0x0A,0x00,
   0x06,0xBA,0x0A,0x00,
   0x08,0xD0,0x0A,0x00,
   0x05,0xE6,0x0A,0x00,
   0x0F,0xFC,0x0A,0x00,
   0x0A,0x28,0x0B,0x00,
   0x07,0x54,0x0B,0x00,
   0x0B,0x6A,0x0B,0x00,
   0x0B,0x96,0x0B,0x00,
   0x0A,0xC2,0x0B,0x00,
   0x0B,0xEE,0x0B,0x00,
   0x0A,0x1A,0x0C,0x00,
   0x08,0x46,0x0C,0x00,
   0x0B,0x5C,0x0C,0x00,
   0x0A,0x88,0x0C,0x00,
   0x04,0xB4,0x0C,0x00,
   0x04,0xCA,0x0C,0x00,
   0x0B,0xE0,0x0C,0x00,
   0x04,0x0C,0x0D,0x00,
   0x0E,0x22,0x0D,0x00,
   0x0A,0x4E,0x0D,0x00,
   0x0C,0x7A,0x0D,0x00,
   0x0B,0xA6,0x0D,0x00,
   0x0B,0xD2,0x0D,0x00,
   0x08,0xFE,0x0D,0x00,
   0x0B,0x14,0x0E,0x00,
   0x08,0x40,0x0E,0x00,
   0x0A,0x56,0x0E,0x00,
   0x0B,0x82,0x0E,0x00,
   0x11,0xAE,0x0E,0x00,
   0x0A,0xF0,0x0E,0x00,
   0x0A,0x1C,0x0F,0x00,
   0x0A,0x48,0x0F,0x00,
   0x08,0x74,0x0F,0x00,
   0x06,0x8A,0x0F,0x00,
   0x07,0xA0,0x0F,0x00,
   0x0D,0xB6,0x0F,0x00,
   0x0B,0xE2,0x0F,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 32
   0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00, // Code for char num 33
   0x00,0x00,0x00,0x00,0x00,0x36,0x36,0x36,0x36,0x36,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 34
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x1C,0xC0,0x0C,0x60,0x0C,0x60,0x0E,0xFC,0x3F,0xFC,0x1F,0x32,0x03,0x30,0x03,0xFE,0x1F,0xFF,0x0F,0x98,0x01,0x8C,0x01,0xCC,0x00,0xCE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 35
   0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xF8,0x1F,0xFC,0x1F,0x9E,0x00,0x8E,0x00,0x8E,0x00,0x9E,0x00,0xFC,0x0F,0xF8,0x1F,0x80,0x38,0x80,0x38,0x80,0x38,0x80,0x3C,0xFC,0x1F,0xFC,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 36
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x08,0x00,0x7F,0x0C,0x00,0x63,0x04,0x00,0x63,0x06,0x00,0x63,0x02,0x00,0x7F,0x03,0x00,0x3E,0x01,0x00,0x80,0xF9,0x00,0x80,0xFD,0x01,0x80,0x8C,0x01,0xC0,0x8C,0x01,0x40,0x8C,0x01,0x60,0xFC,0x01,0x20,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 37
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x03,0xFC,0x03,0x1E,0x00,0x0E,0x00,0x0E,0x00,0x1E,0x00,0x7C,0x7E,0x7C,0x7E,0x1E,0x1C,0x0E,0x1C,0x0E,0x0E,0x1E,0x0F,0xFC,0x07,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 38
   0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 39
   0x00,0x00,0x00,0x00,0x38,0x18,0x0C,0x0C,0x0C,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x0C,0x0C,0x18,0x38,0x00,0x00, // Code for char num 40
   0x00,0x00,0x00,0x00,0x0E,0x0C,0x18,0x18,0x18,0x30,0x30,0x30,0x30,0x30,0x30,0x18,0x18,0x18,0x0C,0x0E,0x00,0x00, // Code for char num 41
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0xB4,0x00,0xFE,0x01,0x78,0x00,0xFE,0x01,0xB4,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 42
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xFC,0x3F,0xFC,0x3F,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 43
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x04,0x02,0x00,0x00, // Code for char num 44
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 45
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x00, // Code for char num 46
   0x00,0x00,0x00,0x00,0xC0,0x40,0x40,0x60,0x20,0x30,0x10,0x18,0x08,0x08,0x0C,0x04,0x06,0x02,0x02,0x03,0x00,0x00, // Code for char num 47
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x03,0xFC,0x0F,0x1E,0x1E,0x0E,0x1C,0x07,0x38,0x07,0x38,0x07,0x38,0x07,0x38,0x07,0x38,0x07,0x38,0x0E,0x1C,0x1E,0x1E,0xFC,0x0F,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 48
   0x00,0x00,0x00,0x00,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00, // Code for char num 49
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x03,0xFF,0x07,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0xFC,0x07,0xFE,0x03,0x0F,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 50
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x01,0xFF,0x03,0x80,0x07,0x00,0x07,0x00,0x07,0x80,0x07,0xFE,0x03,0xFE,0x03,0x80,0x07,0x00,0x07,0x00,0x07,0x80,0x07,0xFF,0x03,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 51
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x1F,0x80,0x1F,0xC0,0x1F,0xE0,0x1D,0xF0,0x1C,0x78,0x1C,0x3C,0x1C,0x1E,0x1C,0xFE,0x7F,0xFE,0x7F,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 52
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x07,0xFF,0x07,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0xFF,0x03,0xFF,0x07,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0xFF,0x07,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 53
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x1F,0xF8,0x1F,0x3C,0x00,0x1C,0x00,0x0E,0x00,0x0E,0x00,0xFE,0x0F,0xFE,0x1F,0x0E,0x38,0x0E,0x38,0x1C,0x38,0x3C,0x3C,0xF8,0x1F,0xE0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 54
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x03,0xC0,0x01,0xE0,0x00,0xF0,0x00,0x78,0x00,0x38,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 55
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x07,0xFE,0x0F,0x0F,0x1E,0x07,0x1C,0x07,0x1C,0x0F,0x1E,0xFE,0x0F,0xFE,0x0F,0x0F,0x1E,0x07,0x1C,0x07,0x1C,0x0F,0x1E,0xFE,0x0F,0xFC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 56
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xFE,0x07,0x0F,0x0F,0x07,0x0E,0x07,0x1C,0x07,0x1C,0xFE,0x1F,0xFC,0x1F,0x00,0x1C,0x00,0x1C,0x00,0x0E,0x00,0x0F,0xFE,0x07,0xFE,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 57
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x00, // Code for char num 58
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00,0x06,0x06,0x04,0x02,0x00,0x00, // Code for char num 59
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x1E,0x80,0x0F,0xE0,0x03,0x7C,0x00,0x1C,0x00,0x7C,0x00,0xE0,0x03,0x80,0x0F,0x00,0x1E,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 60
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x1F,0xFC,0x1F,0x00,0x00,0x00,0x00,0xFC,0x1F,0xFC,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 61
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x3C,0x00,0xF8,0x00,0xE0,0x03,0x00,0x1F,0x00,0x1C,0x00,0x1F,0xE0,0x03,0xF8,0x00,0x3C,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 62
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0xFE,0x0F,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0xF8,0x0F,0xFC,0x07,0x1E,0x00,0x0E,0x00,0x0E,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 63
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1F,0x00,0xE0,0x7F,0x00,0x70,0xE0,0x00,0x38,0x80,0x01,0x9C,0xB7,0x03,0xCC,0x17,0x03,0xC6,0x18,0x03,0x66,0x18,0x03,0x66,0x18,0x03,0x66,0x8C,0x01,0x66,0xCC,0x01,0xE6,0xFB,0x00,0xCC,0x79,0x00,0x1C,0x00,0x00,0x78,0xE0,0x00,0xF0,0x3F,0x00,0xC0,0x0F,0x00,0x00,0x00,0x00, // Code for char num 64
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x01,0xE0,0x03,0xE0,0x03,0xF0,0x03,0x30,0x07,0x38,0x07,0x38,0x0E,0x18,0x0E,0xFC,0x1F,0xFC,0x1F,0x0E,0x1C,0x0E,0x38,0x06,0x38,0x07,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 65
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0xFE,0x0F,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0xFE,0x0F,0xFE,0x0F,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0xFE,0x0F,0xFE,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 66
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x0F,0xF8,0x0F,0x1C,0x00,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0C,0x00,0x1C,0x00,0xF8,0x0F,0xF0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 67
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0xFE,0x0F,0x0E,0x1C,0x0E,0x1C,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x38,0x0E,0x1C,0x0E,0x1C,0xFE,0x0F,0xFE,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 68
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x0F,0xF8,0x0F,0x1C,0x00,0x1C,0x00,0x0E,0x00,0x0E,0x00,0xFE,0x0F,0xFE,0x0F,0x0E,0x00,0x0E,0x00,0x0C,0x00,0x1C,0x00,0xF8,0x0F,0xF0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 69
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x0F,0xFC,0x0F,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0xFE,0x0F,0xFE,0x0F,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 70
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0xF8,0x3F,0x3C,0x00,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x8E,0x3F,0x8E,0x3F,0x0E,0x38,0x0E,0x38,0x1C,0x38,0x3C,0x38,0xF8,0x3F,0xF0,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 71
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0xFE,0x0F,0xFE,0x0F,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 72
   0x00,0x00,0x00,0x00,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00, // Code for char num 73
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xE0,0x01,0xFF,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 74
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1E,0x0E,0x0F,0x8E,0x07,0x8E,0x03,0xCE,0x01,0xEE,0x00,0xFE,0x00,0xFE,0x00,0xEE,0x01,0xCE,0x01,0x8E,0x03,0x8E,0x07,0x0E,0x0F,0x0E,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 75
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x1E,0x00,0xFC,0x03,0xF8,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 76
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0xF0,0x3E,0xF8,0x3E,0xF8,0x3E,0xF8,0x7E,0xFC,0x7E,0xFC,0x6E,0xEC,0x6E,0xEE,0xEE,0xEE,0xCE,0xE6,0xCE,0xE6,0xCE,0xE7,0x8E,0xE3,0x8E,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 77
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x1C,0x1E,0x1C,0x3E,0x1C,0x7E,0x1C,0x7E,0x1C,0xEE,0x1C,0xCE,0x1C,0xCE,0x1D,0x8E,0x1D,0x8E,0x1F,0x0E,0x1F,0x0E,0x1F,0x0E,0x1E,0x0E,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 78
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x07,0xF8,0x1F,0x3C,0x3C,0x1C,0x38,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x1C,0x38,0x3C,0x3C,0xF8,0x1F,0xE0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 79
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0xFE,0x0F,0x0E,0x1E,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1E,0xFE,0x0F,0xFE,0x07,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 80
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x07,0xF8,0x1F,0x3C,0x3C,0x1C,0x38,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x1C,0x78,0x3C,0x3C,0xF8,0x3F,0xE0,0xF7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 81
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0xFE,0x0F,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0xFE,0x0F,0xFE,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x0E,0x0E,0x0E,0x0E,0x1C,0x0E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 82
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x1F,0xFC,0x1F,0x1E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0xFC,0x0F,0xF8,0x1F,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0xFC,0x1F,0xFC,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 83
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x07,0xFF,0x07,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 84
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x0E,0x1C,0x1E,0x1E,0xFC,0x0F,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 85
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x38,0x07,0x1C,0x07,0x1C,0x0F,0x1E,0x0E,0x0E,0x1E,0x0F,0x1C,0x07,0x1C,0x07,0xB8,0x03,0xB8,0x03,0xF8,0x03,0xF0,0x01,0xF0,0x01,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 86
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0E,0x1C,0x07,0x0F,0x1C,0x06,0x1F,0x0E,0x0E,0x1F,0x0E,0x0E,0x1B,0x0E,0x8C,0x3B,0x06,0x9C,0x3B,0x07,0x9C,0x39,0x07,0x9C,0x31,0x07,0xF8,0xF1,0x03,0xF8,0xF1,0x03,0xF8,0xF1,0x03,0xF0,0xE0,0x01,0xF0,0xE0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 87
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1E,0x0E,0x0F,0x1C,0x07,0xBC,0x03,0xF8,0x03,0xF0,0x01,0xF0,0x00,0xF0,0x01,0xF0,0x01,0xB8,0x03,0xBC,0x07,0x1C,0x07,0x0E,0x0F,0x0F,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 88
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x07,0x07,0x8E,0x03,0x8E,0x03,0xDC,0x01,0xF8,0x00,0xF8,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 89
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0xFE,0x1F,0x00,0x1E,0x00,0x0F,0x80,0x07,0xC0,0x03,0xE0,0x01,0xE0,0x01,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0xFE,0x1F,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 90
   0x00,0x00,0x00,0x00,0x3E,0x3E,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x3E,0x3E,0x00,0x00, // Code for char num 91
   0x00,0x00,0x00,0x00,0x03,0x02,0x02,0x06,0x04,0x0C,0x08,0x08,0x10,0x10,0x30,0x20,0x60,0x40,0x40,0xC0,0x00,0x00, // Code for char num 92
   0x00,0x00,0x00,0x00,0x1F,0x1F,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x1F,0x1F,0x00,0x00, // Code for char num 93
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x0F,0xC0,0x1D,0xE0,0x38,0x70,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 94
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x03, // Code for char num 95
   0x00,0x00,0x00,0x00,0x1C,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 96
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x01,0xFC,0x03,0x00,0x07,0x00,0x07,0xFC,0x07,0xFE,0x07,0x0E,0x07,0x0E,0x07,0xFE,0x07,0xFC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 97
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0xFE,0x01,0xFE,0x03,0x8E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x8E,0x03,0xFE,0x03,0xFE,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 98
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x03,0xFC,0x03,0x1C,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x1C,0x00,0xFC,0x03,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 99
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0xF8,0x07,0xFC,0x07,0x1E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x1C,0x07,0xFC,0x07,0xF8,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 100
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x03,0xFC,0x03,0x0E,0x00,0x0E,0x00,0xFE,0x03,0xFE,0x03,0x0E,0x00,0x0E,0x00,0xFC,0x03,0xF8,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 101
   0x00,0x00,0x00,0x00,0xF8,0xFC,0x1C,0x1C,0xFF,0xFF,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00, // Code for char num 102
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0xFC,0x07,0x1C,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x1E,0x07,0xFC,0x07,0xF8,0x07,0x00,0x07,0x00,0x07,0xFC,0x03,0xFC,0x01, // Code for char num 103
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0xFE,0x01,0xFE,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 104
   0x00,0x00,0x00,0x00,0x00,0x0E,0x0E,0x00,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00, // Code for char num 105
   0x00,0x00,0x00,0x00,0x00,0x0E,0x0E,0x00,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x07,0x07, // Code for char num 106
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x07,0x8E,0x03,0xCE,0x01,0xEE,0x00,0x7E,0x00,0x7E,0x00,0xEE,0x00,0xCE,0x01,0x8E,0x03,0x8E,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 107
   0x00,0x00,0x00,0x00,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00, // Code for char num 108
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x1F,0xFE,0x3F,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 109
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x01,0xFE,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 110
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0xFC,0x07,0x1C,0x07,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x1C,0x07,0xFC,0x07,0xF0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 111
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x01,0xFE,0x03,0x8E,0x03,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x8E,0x07,0xFE,0x03,0xFE,0x01,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00, // Code for char num 112
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0xFC,0x07,0x1C,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x1E,0x07,0xFC,0x07,0xF8,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07, // Code for char num 113
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0xFE,0xEE,0xEE,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00, // Code for char num 114
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x03,0xFE,0x03,0x0E,0x00,0x0E,0x00,0xFE,0x03,0xFC,0x07,0x00,0x07,0x00,0x07,0xFE,0x07,0xFE,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 115
   0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0xFF,0xFF,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0xFC,0xF8,0x00,0x00,0x00,0x00, // Code for char num 116
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0xFE,0x03,0xF8,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 117
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x06,0x03,0x8E,0x03,0x8E,0x03,0x9C,0x01,0xDC,0x01,0xD8,0x00,0xF8,0x00,0xF8,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 118
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0xC3,0x01,0xC7,0xC7,0x01,0xC6,0xC7,0x00,0xC6,0xC6,0x00,0xEE,0xEE,0x00,0xEC,0x6E,0x00,0x6C,0x6C,0x00,0x7C,0x7C,0x00,0x78,0x3C,0x00,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 119
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0x03,0xCE,0x01,0xFC,0x00,0xFC,0x00,0x78,0x00,0x78,0x00,0x7C,0x00,0xFC,0x00,0xCE,0x01,0x87,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 120
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0x8E,0x03,0xFE,0x03,0xFC,0x03,0x80,0x03,0x80,0x03,0xFE,0x01,0xFE,0x00, // Code for char num 121
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x03,0xFE,0x03,0xC0,0x03,0xE0,0x01,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0xFE,0x03,0xFE,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 122
   0x00,0x00,0x00,0x00,0xE0,0xF0,0x30,0x30,0x30,0x30,0x30,0x30,0x1C,0x1C,0x30,0x30,0x30,0x30,0x30,0x30,0xF0,0xE0, // Code for char num 123
   0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30, // Code for char num 124
   0x00,0x00,0x00,0x00,0x0E,0x1E,0x18,0x18,0x18,0x18,0x18,0x18,0x70,0x70,0x18,0x18,0x18,0x18,0x18,0x18,0x1E,0x0E, // Code for char num 125
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x10,0xFC,0x1F,0x04,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 126
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x07,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0xFE,0x07 // Code for char num 127
        };
        
const code char Verdana12x13_Regular[] = {
   0x00,
   0x00,
   0x20,0x00,
   0x7F,0x00,
   0x0D,
   0x00,
   0x01,0x88,0x01,0x00,
   0x03,0x95,0x01,0x00,
   0x04,0xA2,0x01,0x00,
   0x08,0xAF,0x01,0x00,
   0x06,0xBC,0x01,0x00,
   0x0B,0xC9,0x01,0x00,
   0x08,0xE3,0x01,0x00,
   0x02,0xF0,0x01,0x00,
   0x04,0xFD,0x01,0x00,
   0x04,0x0A,0x02,0x00,
   0x06,0x17,0x02,0x00,
   0x08,0x24,0x02,0x00,
   0x03,0x31,0x02,0x00,
   0x04,0x3E,0x02,0x00,
   0x03,0x4B,0x02,0x00,
   0x05,0x58,0x02,0x00,
   0x06,0x65,0x02,0x00,
   0x06,0x72,0x02,0x00,
   0x06,0x7F,0x02,0x00,
   0x06,0x8C,0x02,0x00,
   0x06,0x99,0x02,0x00,
   0x06,0xA6,0x02,0x00,
   0x06,0xB3,0x02,0x00,
   0x06,0xC0,0x02,0x00,
   0x06,0xCD,0x02,0x00,
   0x06,0xDA,0x02,0x00,
   0x03,0xE7,0x02,0x00,
   0x03,0xF4,0x02,0x00,
   0x07,0x01,0x03,0x00,
   0x08,0x0E,0x03,0x00,
   0x08,0x1B,0x03,0x00,
   0x05,0x28,0x03,0x00,
   0x09,0x35,0x03,0x00,
   0x07,0x4F,0x03,0x00,
   0x07,0x5C,0x03,0x00,
   0x08,0x69,0x03,0x00,
   0x08,0x76,0x03,0x00,
   0x06,0x83,0x03,0x00,
   0x06,0x90,0x03,0x00,
   0x08,0x9D,0x03,0x00,
   0x07,0xAA,0x03,0x00,
   0x04,0xB7,0x03,0x00,
   0x04,0xC4,0x03,0x00,
   0x07,0xD1,0x03,0x00,
   0x06,0xDE,0x03,0x00,
   0x08,0xEB,0x03,0x00,
   0x07,0xF8,0x03,0x00,
   0x08,0x05,0x04,0x00,
   0x06,0x12,0x04,0x00,
   0x08,0x1F,0x04,0x00,
   0x07,0x2C,0x04,0x00,
   0x07,0x39,0x04,0x00,
   0x07,0x46,0x04,0x00,
   0x07,0x53,0x04,0x00,
   0x07,0x60,0x04,0x00,
   0x0A,0x6D,0x04,0x00,
   0x07,0x87,0x04,0x00,
   0x07,0x94,0x04,0x00,
   0x07,0xA1,0x04,0x00,
   0x04,0xAE,0x04,0x00,
   0x05,0xBB,0x04,0x00,
   0x04,0xC8,0x04,0x00,
   0x08,0xD5,0x04,0x00,
   0x07,0xE2,0x04,0x00,
   0x04,0xEF,0x04,0x00,
   0x06,0xFC,0x04,0x00,
   0x06,0x09,0x05,0x00,
   0x06,0x16,0x05,0x00,
   0x06,0x23,0x05,0x00,
   0x06,0x30,0x05,0x00,
   0x04,0x3D,0x05,0x00,
   0x06,0x4A,0x05,0x00,
   0x06,0x57,0x05,0x00,
   0x02,0x64,0x05,0x00,
   0x03,0x71,0x05,0x00,
   0x06,0x7E,0x05,0x00,
   0x02,0x8B,0x05,0x00,
   0x0A,0x98,0x05,0x00,
   0x06,0xB2,0x05,0x00,
   0x06,0xBF,0x05,0x00,
   0x06,0xCC,0x05,0x00,
   0x06,0xD9,0x05,0x00,
   0x05,0xE6,0x05,0x00,
   0x05,0xF3,0x05,0x00,
   0x04,0x00,0x06,0x00,
   0x06,0x0D,0x06,0x00,
   0x06,0x1A,0x06,0x00,
   0x08,0x27,0x06,0x00,
   0x06,0x34,0x06,0x00,
   0x06,0x41,0x06,0x00,
   0x05,0x4E,0x06,0x00,
   0x06,0x5B,0x06,0x00,
   0x03,0x68,0x06,0x00,
   0x06,0x75,0x06,0x00,
   0x08,0x82,0x06,0x00,
   0x09,0x8F,0x06,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,                // Code for char num 32
   0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x04,0x00,0x00,                // Code for char num 33
   0x00,0x00,0x0A,0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,                // Code for char num 34
   0x00,0x00,0x00,0x50,0x50,0xFC,0x28,0x28,0x7E,0x14,0x14,0x00,0x00,                // Code for char num 35
   0x00,0x00,0x08,0x08,0x3C,0x0A,0x0A,0x1C,0x28,0x28,0x1E,0x08,0x08,                // Code for char num 36
   0x00,0x00,0x00,0x00,0x00,0x00,0x8C,0x00,0x92,0x00,0x52,0x00,0x4C,0x00,0x20,0x03,0xA0,0x04,0x90,0x04,0x10,0x03,0x00,0x00,0x00,0x00, // Code for char num 37
   0x00,0x00,0x00,0x0C,0x12,0x12,0x4C,0x52,0x22,0x62,0x9C,0x00,0x00,                // Code for char num 38
   0x00,0x00,0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,                // Code for char num 39
   0x00,0x00,0x08,0x04,0x04,0x02,0x02,0x02,0x02,0x02,0x04,0x04,0x08,                // Code for char num 40
   0x00,0x00,0x02,0x04,0x04,0x08,0x08,0x08,0x08,0x08,0x04,0x04,0x02,                // Code for char num 41
   0x00,0x00,0x08,0x2A,0x1C,0x2A,0x08,0x00,0x00,0x00,0x00,0x00,0x00,                // Code for char num 42
   0x00,0x00,0x00,0x00,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x00,0x00,                // Code for char num 43
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x02,                // Code for char num 44
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,                // Code for char num 45
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x00,                // Code for char num 46
   0x00,0x00,0x10,0x10,0x08,0x08,0x04,0x04,0x02,0x02,0x01,0x01,0x00,                // Code for char num 47
   0x00,0x00,0x00,0x1C,0x22,0x22,0x22,0x22,0x22,0x22,0x1C,0x00,0x00,                // Code for char num 48
   0x00,0x00,0x00,0x08,0x0E,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,                // Code for char num 49
   0x00,0x00,0x00,0x1C,0x22,0x20,0x10,0x08,0x04,0x02,0x3E,0x00,0x00,                // Code for char num 50
   0x00,0x00,0x00,0x1C,0x22,0x20,0x18,0x20,0x20,0x22,0x1C,0x00,0x00,                // Code for char num 51
   0x00,0x00,0x00,0x10,0x18,0x14,0x12,0x11,0x3F,0x10,0x10,0x00,0x00,                // Code for char num 52
   0x00,0x00,0x00,0x3E,0x02,0x02,0x1E,0x20,0x20,0x22,0x1C,0x00,0x00,                // Code for char num 53
   0x00,0x00,0x00,0x18,0x04,0x02,0x1E,0x22,0x22,0x22,0x1C,0x00,0x00,                // Code for char num 54
   0x00,0x00,0x00,0x3E,0x20,0x10,0x10,0x08,0x08,0x04,0x04,0x00,0x00,                // Code for char num 55
   0x00,0x00,0x00,0x1C,0x22,0x22,0x1C,0x22,0x22,0x22,0x1C,0x00,0x00,                // Code for char num 56
   0x00,0x00,0x00,0x1C,0x22,0x22,0x22,0x3C,0x20,0x10,0x0C,0x00,0x00,                // Code for char num 57
   0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x00,0x04,0x04,0x00,0x00,                // Code for char num 58
   0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x00,0x04,0x04,0x04,0x02,                // Code for char num 59
   0x00,0x00,0x00,0x00,0x00,0x60,0x18,0x06,0x18,0x60,0x00,0x00,0x00,                // Code for char num 60
   0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0xFE,0x00,0x00,0x00,0x00,                // Code for char num 61
   0x00,0x00,0x00,0x00,0x00,0x0C,0x30,0xC0,0x30,0x0C,0x00,0x00,0x00,                // Code for char num 62
   0x00,0x00,0x00,0x0E,0x10,0x10,0x08,0x04,0x04,0x00,0x04,0x00,0x00,                // Code for char num 63
   0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x04,0x01,0x72,0x01,0x4A,0x01,0x4A,0x01,0x4A,0x01,0xB2,0x00,0x04,0x00,0x78,0x00,0x00,0x00, // Code for char num 64
   0x00,0x00,0x00,0x18,0x18,0x24,0x24,0x24,0x7E,0x42,0x42,0x00,0x00,                // Code for char num 65
   0x00,0x00,0x00,0x1E,0x22,0x22,0x3E,0x42,0x42,0x42,0x3E,0x00,0x00,                // Code for char num 66
   0x00,0x00,0x00,0x78,0x84,0x02,0x02,0x02,0x02,0x84,0x78,0x00,0x00,                // Code for char num 67
   0x00,0x00,0x00,0x3E,0x42,0x82,0x82,0x82,0x82,0x42,0x3E,0x00,0x00,                // Code for char num 68
   0x00,0x00,0x00,0x3E,0x02,0x02,0x3E,0x02,0x02,0x02,0x3E,0x00,0x00,                // Code for char num 69
   0x00,0x00,0x00,0x3E,0x02,0x02,0x1E,0x02,0x02,0x02,0x02,0x00,0x00,                // Code for char num 70
   0x00,0x00,0x00,0x78,0x84,0x02,0x02,0xE2,0x82,0x84,0x78,0x00,0x00,                // Code for char num 71
   0x00,0x00,0x00,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0x00,0x00,                // Code for char num 72
   0x00,0x00,0x00,0x0E,0x04,0x04,0x04,0x04,0x04,0x04,0x0E,0x00,0x00,                // Code for char num 73
   0x00,0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x07,0x00,0x00,                // Code for char num 74
   0x00,0x00,0x00,0x42,0x22,0x12,0x0A,0x0E,0x12,0x22,0x42,0x00,0x00,                // Code for char num 75
   0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x3E,0x00,0x00,                // Code for char num 76
   0x00,0x00,0x00,0xC6,0xC6,0xAA,0xAA,0x92,0x92,0x82,0x82,0x00,0x00,                // Code for char num 77
   0x00,0x00,0x00,0x46,0x46,0x4A,0x4A,0x52,0x52,0x62,0x62,0x00,0x00,                // Code for char num 78
   0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00,                // Code for char num 79
   0x00,0x00,0x00,0x1E,0x22,0x22,0x22,0x1E,0x02,0x02,0x02,0x00,0x00,                // Code for char num 80
   0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x44,0x38,0x20,0xC0,                // Code for char num 81
   0x00,0x00,0x00,0x1E,0x22,0x22,0x22,0x1E,0x12,0x22,0x42,0x00,0x00,                // Code for char num 82
   0x00,0x00,0x00,0x3C,0x42,0x02,0x0C,0x30,0x40,0x42,0x3C,0x00,0x00,                // Code for char num 83
   0x00,0x00,0x00,0x7F,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,                // Code for char num 84
   0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,                // Code for char num 85
   0x00,0x00,0x00,0x42,0x42,0x42,0x24,0x24,0x24,0x18,0x18,0x00,0x00,                // Code for char num 86
   0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x02,0x22,0x02,0x54,0x01,0x54,0x01,0x54,0x01,0x54,0x01,0x88,0x00,0x88,0x00,0x00,0x00,0x00,0x00, // Code for char num 87
   0x00,0x00,0x00,0x42,0x42,0x24,0x18,0x18,0x24,0x42,0x42,0x00,0x00,                // Code for char num 88
   0x00,0x00,0x00,0x41,0x22,0x14,0x08,0x08,0x08,0x08,0x08,0x00,0x00,                // Code for char num 89
   0x00,0x00,0x00,0x7E,0x40,0x20,0x10,0x08,0x04,0x02,0x7E,0x00,0x00,                // Code for char num 90
   0x00,0x00,0x0E,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x0E,                // Code for char num 91
   0x00,0x00,0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x00,                // Code for char num 92
   0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0E,                // Code for char num 93
   0x00,0x00,0x00,0x10,0x28,0x44,0x82,0x00,0x00,0x00,0x00,0x00,0x00,                // Code for char num 94
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,                // Code for char num 95
   0x00,0x00,0x04,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,                // Code for char num 96
   0x00,0x00,0x00,0x00,0x00,0x1C,0x20,0x3C,0x22,0x22,0x3C,0x00,0x00,                // Code for char num 97
   0x00,0x00,0x02,0x02,0x02,0x1E,0x22,0x22,0x22,0x22,0x1E,0x00,0x00,                // Code for char num 98
   0x00,0x00,0x00,0x00,0x00,0x1C,0x22,0x02,0x02,0x22,0x1C,0x00,0x00,                // Code for char num 99
   0x00,0x00,0x20,0x20,0x20,0x3C,0x22,0x22,0x22,0x22,0x3C,0x00,0x00,                // Code for char num 100
   0x00,0x00,0x00,0x00,0x00,0x1C,0x22,0x3E,0x02,0x22,0x1C,0x00,0x00,                // Code for char num 101
   0x00,0x00,0x0C,0x02,0x02,0x0F,0x02,0x02,0x02,0x02,0x02,0x00,0x00,                // Code for char num 102
   0x00,0x00,0x00,0x00,0x00,0x3C,0x22,0x22,0x22,0x22,0x3C,0x20,0x1C,                // Code for char num 103
   0x00,0x00,0x02,0x02,0x02,0x1E,0x22,0x22,0x22,0x22,0x22,0x00,0x00,                // Code for char num 104
   0x00,0x00,0x02,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00,                // Code for char num 105
   0x00,0x00,0x04,0x00,0x00,0x06,0x04,0x04,0x04,0x04,0x04,0x04,0x03,                // Code for char num 106
   0x00,0x00,0x02,0x02,0x02,0x22,0x12,0x0A,0x0E,0x12,0x22,0x00,0x00,                // Code for char num 107
   0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00,                // Code for char num 108
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDE,0x01,0x22,0x02,0x22,0x02,0x22,0x02,0x22,0x02,0x22,0x02,0x00,0x00,0x00,0x00, // Code for char num 109
   0x00,0x00,0x00,0x00,0x00,0x1E,0x22,0x22,0x22,0x22,0x22,0x00,0x00,                // Code for char num 110
   0x00,0x00,0x00,0x00,0x00,0x1C,0x22,0x22,0x22,0x22,0x1C,0x00,0x00,                // Code for char num 111
   0x00,0x00,0x00,0x00,0x00,0x1E,0x22,0x22,0x22,0x22,0x1E,0x02,0x02,                // Code for char num 112
   0x00,0x00,0x00,0x00,0x00,0x3C,0x22,0x22,0x22,0x22,0x3C,0x20,0x20,                // Code for char num 113
   0x00,0x00,0x00,0x00,0x00,0x1A,0x06,0x02,0x02,0x02,0x02,0x00,0x00,                // Code for char num 114
   0x00,0x00,0x00,0x00,0x00,0x1C,0x02,0x06,0x18,0x10,0x0E,0x00,0x00,                // Code for char num 115
   0x00,0x00,0x00,0x02,0x02,0x0F,0x02,0x02,0x02,0x02,0x0C,0x00,0x00,                // Code for char num 116
   0x00,0x00,0x00,0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x3C,0x00,0x00,                // Code for char num 117
   0x00,0x00,0x00,0x00,0x00,0x22,0x22,0x14,0x14,0x08,0x08,0x00,0x00,                // Code for char num 118
   0x00,0x00,0x00,0x00,0x00,0x92,0x92,0xAA,0xAA,0x44,0x44,0x00,0x00,                // Code for char num 119
   0x00,0x00,0x00,0x00,0x00,0x22,0x14,0x08,0x08,0x14,0x22,0x00,0x00,                // Code for char num 120
   0x00,0x00,0x00,0x00,0x00,0x22,0x14,0x14,0x14,0x08,0x08,0x08,0x04,                // Code for char num 121
   0x00,0x00,0x00,0x00,0x00,0x1E,0x10,0x08,0x04,0x02,0x1E,0x00,0x00,                // Code for char num 122
   0x00,0x00,0x30,0x08,0x08,0x08,0x08,0x06,0x08,0x08,0x08,0x08,0x30,                // Code for char num 123
   0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,                // Code for char num 124
   0x00,0x00,0x06,0x08,0x08,0x08,0x08,0x30,0x08,0x08,0x08,0x08,0x06,                // Code for char num 125
   0x00,0x00,0x00,0x00,0x00,0x00,0x8C,0x92,0x62,0x00,0x00,0x00,0x00,                // Code for char num 126
   0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0xFE,0x01,0x00,0x00,0x00,0x00 // Code for char num 127
        };