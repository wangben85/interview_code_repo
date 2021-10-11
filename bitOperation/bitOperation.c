// test of set, clear or revert the bit X

#include <stdio.h>

#define BIT3  ( 0x1<<3 )           // pay attention the () here
#define uchar unsigned char

uchar SetBit3(unsigned char p)
{
	p|=BIT3;
	return p;
}

uchar ClearBit3(unsigned char p)
{
	p &=~BIT3;
	return p;
}

uchar RevertBit3(unsigned char p)
{
	p ^=BIT3;
	return p;
}


int main(void)
{
	uchar testData1 = 0b11111111;
	uchar testData2 = 0b01111110;

    uchar testResult1 = 0b0;
    uchar testResult2 = 0b0;

	testResult1 = ClearBit3(testData1);
	testResult2 = RevertBit3(testData2);

	printf("Clear bits3 of testData1  %x is  %x\n", testData1, testResult1);
	printf("Revert bits3 of testData2  %x is  %x\n", testData2, testResult2);

	return 0;
}