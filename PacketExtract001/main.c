/*
 * main.c
 *
 *  Created on: 29-Mar-2023
 *      Author: HP
 */

// Video 163
// using struct and bitwise operations to extract different bit-fields from a 32 bit data packet

#include <stdio.h>
#include <stdint.h>

// creating the structure for the different bit-fields
struct Packet
{
	uint8_t crc;  // as only 2 bits wide uint8_t is sufficient for that
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addrMode;
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

	/* Concept:
	 we will see that the size of the structure is 10 Bytes but we only passed 32 bits(4 Bytes)
	 so it additionally occupied 6 Bytes which are unused to store 4 Bytes in structure format
	 so is there a way to mininmize memory consumption?
	 yes using BIT FIELDS */
	// Done in PacketExtract002



	while(getchar() != '\n')
	{
	}
	getchar();
	return 0;

}
