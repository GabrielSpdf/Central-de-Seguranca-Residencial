void atualizaStatus(const bool modoAP, const char statusWiFi, const bool alarme);

void serialDisplayConfig();

static const uint8_t arduino_icon[1024]  = 
{
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0x00, 0xff, 
  0xff, 0xf0, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0xd7, 0xf0, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x00, 0x03, 0xef, 0xf0, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 
  0x01, 0xef, 0xf0, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0xff, 0xc0, 
  0x1f, 0xf0, 0x01, 0xf8, 0x01, 0xff, 0x00, 0x3f, 0xf0, 0xff, 0x80, 0x7f, 0xfe, 0x00, 0xf0, 0x07, 
  0xff, 0xe0, 0x1f, 0xf0, 0xff, 0x00, 0xff, 0xff, 0x80, 0x60, 0x1f, 0xff, 0xf0, 0x1f, 0xf0, 0xfe, 
  0x01, 0xff, 0xff, 0xc0, 0x00, 0x7f, 0xff, 0xf8, 0x0f, 0xf0, 0xfe, 0x03, 0xff, 0xff, 0xe0, 0x00, 
  0xff, 0xc7, 0xfc, 0x07, 0xf0, 0xfe, 0x07, 0xff, 0xff, 0xf0, 0x01, 0xff, 0xc7, 0xfc, 0x07, 0xf0, 
  0xfc, 0x07, 0xff, 0xff, 0xf8, 0x01, 0xff, 0xc7, 0xfe, 0x07, 0xf0, 0xfc, 0x0f, 0xe0, 0x07, 0xfc, 
  0x03, 0xfc, 0x00, 0x7e, 0x07, 0xf0, 0xfc, 0x0f, 0xe0, 0x07, 0xfc, 0x07, 0xfc, 0x00, 0x7e, 0x07, 
  0xf0, 0xfc, 0x07, 0xe0, 0x07, 0xf8, 0x03, 0xfc, 0x00, 0x7e, 0x07, 0xf0, 0xfc, 0x07, 0xff, 0xff, 
  0xf8, 0x01, 0xff, 0xc7, 0xfe, 0x07, 0xf0, 0xfe, 0x07, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xc7, 0xfc, 
  0x07, 0xf0, 0xfe, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x7f, 0xff, 0xf8, 0x0f, 0xf0, 0xff, 0x01, 0xff, 
  0xff, 0x80, 0x40, 0x3f, 0xff, 0xf0, 0x0f, 0xf0, 0xff, 0x80, 0xff, 0xfe, 0x00, 0xf0, 0x0f, 0xff, 
  0xe0, 0x1f, 0xf0, 0xff, 0x80, 0x1f, 0xf8, 0x01, 0xf8, 0x01, 0xff, 0x80, 0x3f, 0xf0, 0xff, 0xc0, 
  0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xfe, 0x00, 
  0x00, 0x00, 0xff, 0xf0, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x03, 0xff, 0xf0, 0xff, 
  0xff, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x0f, 0xff, 0xf0, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 
  0xfc, 0x00, 0x7f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf0, 0xff, 0xe3, 0xe0, 0x70, 0x1c, 0x63, 0x00, 0x8e, 0x30, 0x3f, 0xf0, 0xff, 0xe1, 0xe0, 0x30, 
  0x0c, 0x63, 0x01, 0x86, 0x33, 0x1f, 0xf0, 0xff, 0xc9, 0xe7, 0x31, 0xcc, 0x63, 0xc7, 0x82, 0x23, 
  0x9f, 0xf0, 0xff, 0xc8, 0xe6, 0x31, 0xcc, 0x63, 0xc7, 0x80, 0x23, 0x9f, 0xf0, 0xff, 0x80, 0xe0, 
  0x71, 0xcc, 0x63, 0xc7, 0x88, 0x23, 0x9f, 0xf0, 0xff, 0x80, 0xe6, 0x71, 0x8c, 0x63, 0xc7, 0x88, 
  0x23, 0x1f, 0xf0, 0xff, 0x9c, 0x66, 0x30, 0x1c, 0x07, 0x00, 0x8c, 0x30, 0x3f, 0xf0, 0xff, 0x1e, 
  0x67, 0x30, 0x7f, 0x0f, 0x00, 0xce, 0x38, 0x7f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0
};

static const uint8_t alarm_icon[1024] = 
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0xf0, 0x00, 0x01, 
  0xf8, 0x00, 0x03, 0xfc, 0x00, 0x03, 0xfc, 0x00, 0x03, 0xfc, 0x00, 0x63, 0xfc, 0x60, 0x53, 0xfc, 
  0xa0, 0xf7, 0xfe, 0xf0, 0xaf, 0xff, 0x50, 0xaf, 0xff, 0x50, 0xf3, 0xfc, 0xf0, 0x70, 0x00, 0xe0, 
  0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t wifi_icon[1024] = 
{
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x0f, 0xfe, 0x00, 0x1f, 0xff, 0x80, 0x7c, 
  0x03, 0xc0, 0x70, 0x00, 0xe0, 0x63, 0xf8, 0x40, 0x07, 0xfe, 0x00, 0x0f, 0x1f, 0x00, 0x0c, 0x07, 
  0x00, 0x00, 0x60, 0x00, 0x01, 0xf8, 0x00, 0x03, 0xf8, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t calendar_icon[1024] = 
{
  0x06, 0x06, 0x00, 0x06, 0x06, 0x00, 0x1f, 0xff, 0x80, 0x3f, 0xff, 0xc0, 0x3f, 0xff, 0xc0, 0x3f, 
  0xff, 0xc0, 0x3f, 0xff, 0xc0, 0x30, 0x00, 0xc0, 0x37, 0x6e, 0xc0, 0x37, 0x6e, 0xc0, 0x32, 0x24, 
  0xc0, 0x33, 0x6c, 0xc0, 0x37, 0x6e, 0xc0, 0x33, 0x6c, 0xc0, 0x30, 0x00, 0xc0, 0x30, 0x00, 0xc0, 
  0x3f, 0xff, 0xc0, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t book_icon[1024] = 
{
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x3f, 0xff, 0xc0, 0xff, 0xff, 0xf0, 0xcf, 
  0xff, 0xe0, 0xc1, 0xf8, 0x20, 0xf0, 0x41, 0xf0, 0xfe, 0x4f, 0xf0, 0x7f, 0xff, 0x10, 0x40, 0xf8, 
  0x30, 0xfc, 0x21, 0xe0, 0xff, 0xff, 0xe0, 0x87, 0xfe, 0x40, 0xc1, 0xe0, 0xe0, 0xfc, 0x8f, 0xe0, 
  0x1f, 0xfe, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};