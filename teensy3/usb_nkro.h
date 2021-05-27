#ifndef USBnkro_h_
#define USBnkro_h_

#include "usb_desc.h"
#include "keylayouts.h"

#if defined (NKRO_INTERFACE)

#include <inttypes.h>

// C language implementation
#ifdef __cplusplus
extern "C" {
#endif
void usb_nkro_reset_keys();
void usb_nkro_reset_key(uint8_t key);
void usb_nkro_set_key(uint8_t key);
int usb_nkro_send_nkro_now();
#ifdef __cplusplus
}
#endif



// C++ interface
#ifdef __cplusplus
#include "Stream.h"

class usb_nkro_class
{
        public:
        void reset_keys() { usb_nkro_reset_keys(); }
        void reset_key(uint8_t key) { usb_nkro_reset_key(key); }
        void set_key(uint8_t key) { usb_nkro_set_key(key); }
        int send_nkro_now(void) { return usb_nkro_send_nkro_now(); }
};

extern usb_nkro_class Nkro;

#endif // __cplusplus

#endif // NKRO_INTERFACE
#endif // USBnkro_h_
