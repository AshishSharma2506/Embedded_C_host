/*
 * main.c
 *
 *  Created on: 29-Mar-2023
 *      Author: HP
 */

// Video 167
// extracting different bit-fields from 32 bit packet now using Unions
// earlier in PacketExtract001 & PacketExtract002 we used bitwise operations to extract the bit-fields of the data apcket
// but now we can skip that using another method by using a combo of union and struct


#include <stdio.h>
#include <stdint.h>

// creating the combo of union & structure. Keep struct inside the union
union Packet
{

	uint32_t packetValue;
	struct
	{
		// bit field based structure
		uint32_t crc        :2;
		uint32_t status     :1;
		uint32_t payload    :12;
		uint32_t bat        :3;
		uint32_t sensor     :3;
		uint32_t longAddr   :8;
		uint32_t shortAddr  :2;
		uint32_t addrMode   :1;
	}packetFields;  // var name for struct. Remember neither a tag name nor a struct

	// so as both member elments occupy 4Bytes the union will occupy 4Bytes

};

int main(void)
{
	// the data packet which will be passed in the union
	union Packet packet;
	printf("Enter the 32 bit Data Packet in Hex:");
	// inputing the packetVlaue directly in the union member variable
	scanf("%X",&packet.packetValue);



	/* All this is now not required.
	 The union-struct combo elimiated our earlier work of bitwise operation for bit-fields

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
	*/


	// print the packet fields using the struct inside the union
	printf("crc          :%#x\n",packet.packetFields.crc);
	printf("status       :%#x\n",packet.packetFields.status);
	printf("payload      :%#x\n",packet.packetFields.payload);
	printf("bat          :%#x\n",packet.packetFields.bat);
	printf("sensor       :%#x\n",packet.packetFields.sensor);
	printf("longAddr     :%#x\n",packet.packetFields.longAddr);
	printf("shortAddr    :%#x\n",packet.packetFields.shortAddr);
	printf("addrMode     :%#x\n",packet.packetFields.addrMode);


	// print the size of the structure
	printf("Size of the union is %u\n",sizeof(packet));




	while(getchar() != '\n')
	{
	}
	getchar();
	return 0;

}
