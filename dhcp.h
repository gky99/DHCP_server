//
// Created by 关恺岳 on 2017/6/13.
//

#include <cstdint>
#include <sys/types.h>

#ifndef DHCP_SERVER_DHCP_H
#define DHCP_SERVER_DHCP_H

#endif //DHCP_SERVER_DHCP_H

#define DHCP_CHADDR_LEN 16
#define DHCP_SNAME_LEN  64
#define DHCP_FILE_LEN   128

typedef struct dhcp {
    u_int8_t opcode;
    u_int8_t hardware_address_type;
    u_int8_t hardware_address_length;
    u_int8_t hops;
    u_int32_t tanscation_id;
    u_int16_t seconds;
    u_int16_t flags;
    in_addr_t client_ip_address;
    in_addr_t your_ip_address;
    in_addr_t server_ip_address;
    in_addr_t router_ip_address;
    u_int8_t client_hardware_address[DHCP_CHADDR_LEN];
    char server_host_name[DHCP_SNAME_LEN];
    char boot_file_name[DHCP_FILE_LEN];
    uint32_t magic_cookie;
    u_int8_t options[0];
} dhcp_t;