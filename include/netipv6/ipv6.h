/*
 *   Copyright 2016 Simon Schmidt
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */


#ifndef _NETIPV6_IPV6_H_
#define _NETIPV6_IPV6_H_

#include <netstd/packing.h>
#include <netstd/stdint.h>

union ipv6_addr {
	uint8_t  addr[16];
	uint32_t addr32[4];
} NETSTD_PACKED;
typedef union ipv6_addr ipv6_addr_t;

#define IP6ADDR_EQ(a,b) ( \
	((a).addr32[0]==(b).addr32[0]) &&\
	((a).addr32[1]==(b).addr32[1]) &&\
	((a).addr32[2]==(b).addr32[2]) &&\
	((a).addr32[3]==(b).addr32[3]) \
)

#endif

