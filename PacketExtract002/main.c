/*
 * main.c
 *
 *  Created on: 29-Mar-2023
 *      Author: HP
 */

// Video 164
// extracting different bit-fields from 32 bit packet and minimizing memory consumption using bit-fields


#include <stdio.h>
#include <stdint.h>

// creating the structure for the different bit-fields
struct Packet
{
	// unlike in PacketExtrat001 we will now use bit-fields to minimize memory consumption
	// Refer ECB 52(ii) steps
	// so the appropriate data type will be uint32_t
	uint32_t crc        :2; // telling the compiler to use only 2 bits for crc
	uint32_t status     :1;
	uint32_t payload    :12;
	uint32_t bat        :3;
	uint32_t sensor     :3;
	uint32_t longAddr   :8;
	uint32_t shortAddr  :2;
	uint32_t addrMode   :1;
};

int main(void)
{
	// the data packet
	uint32_t packetValue;
	printf("Enter the 32 bit Data Packet in Hex:");
	scanf("%X",&packetValue);

	// creating the structure variable
	struct Packet packet;



	// let us start decoding. rferer to ECB 51(ii) and V163
	packet.crc      = (uint8_t) (packetValue & 0x3);// last(left to right if considered direction)2 bits
	packet.status   = (uint8_t) ((packetValue >>  2) & (0x1));
	packet.payload  = (uint16_t)((packetValue >> 3) & 0xFFF);
	packet.bat      = (uint8_t) ((packetValue >> 15) & 0x7);
	packet.sensor   = (uint8_t) ((packetValue >> 18) & 0x7);
	packet.longAddr = (uint8_t) ((packetValue >> 21) & 0xFF);
	packet.shortAddr= (uint8_t) ((packetValue >> 29) & 0x3);
	packet.addrMode = (uint8_t) ((packetValue >> 31) & 0x1);


	// print the packet fields
	/* notice the # before the x of format specifier of hex %#x rathert than %x this adds the "0x"
	in the printed hex numbers*/
	printf("crc          :%#x\n",packet.crc);
	printf("status       :%#x\n",packet.status);
	printf("payload      :%#x\n",packet.payload);
	printf("bat          :%#x\n",packet.bat);
	printf("sensor       :%#x\n",packet.sensor);
	printf("longAddr     :%#x\n",packet.longAddr);
	printf("shortAddr    :%#x\n",packet.shortAddr);
	printf("addrMode     :%#x\n",packet.addrMode);


	// print the size of the structure
	printf("Size of the structure is %u\n",sizeof(packet));




	while(getchar() != '\n')
	{
	}
	getchar();
	return 0;

}
