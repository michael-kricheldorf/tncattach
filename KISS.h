#include <stdint.h>
#include "Constants.h"

#define FEND 0xC0
#define FESC 0xDB
#define TFEND 0xDC
#define TFESC 0xDD

#define CMD_UNKNOWN 0xFE
#define CMD_DATA 0x00
#define CMD_PREAMBLE 0x01
#define CMD_P 0x02
#define CMD_SLOTTIME 0x03
#define CMD_TXTAIL 0x04
#define CMD_FULLDUPLEX 0x05
#define CMD_SETHARDWARE 0x06

#define MAX_PAYLOAD MTU_MAX

#define LAST_RSSI 0x23

void kiss_serial_read(uint8_t sbyte);
int kiss_write_frame(int serial_port, uint8_t* buffer, int frame_len);