#pragma once


#include <stdio.h>
#include <stdint.h>



/**
 * @brief Packet Main Body 
 */
typedef struct _t_if_pkt_main {
    uint16_t aid;       /**< Application Program Identifier */
    uint16_t len;       /**< Length of BODY packet */
    uint8_t body[1];    /**< Packet Body */
}if_pkt_main_t;


/**
 * @brief Union type to send the Response 
 */
typedef union _t_if_resp {
    struct {
        uint8_t sw1;            /**< Command Processing Status */
        uint8_t sw2;            /**< Command Processing Qualifier */
        uint16_t len;           /**< Length */
    }resp;
    uint32_t w;
}if_resp_t;

#define NP_RESP_NORMAL_prefix       (0x50 << 4)
#define NP_RESP_STATUS2_prefix      (0x60 << 4)
#define WP_RESP_prefix              (0x62 << 4)
#define ER_RESP_prefix              (0x63 << 4)
#define SE_RESP_prefix              (0x64 << 4)

#define NP_RESP_PC                  (NP_RESP_NORMAL_prefix | 0x00) /**< Process complete without Error or Warning */



/**
 * @brief Message body of Main Body
 */
typedef struct _t_if_msgbody {
    uint16_t class;

}if_msgbody_t;



