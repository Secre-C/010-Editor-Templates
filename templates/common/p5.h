#ifndef P5_H
#define P5_H

typedef int Bitflag<read=FlagConvert(this)>;
						  
int FlagConvert( int flag )
{
	if (flag >= 0x50000000){ flag = (flag - 0x50000000) + 12288; }
	else if (flag >= 0x40000000){ flag = (flag - 0x40000000) + 11776; }
	else if (flag >= 0x30000000){ flag = (flag - 0x30000000) + 11264; }
	else if (flag >= 0x20000000){ flag = (flag - 0x20000000) + 6144; }
	else if (flag >= 0x10000000){ flag = (flag - 0x10000000) + 3072; }
	return flag;
}

#endif