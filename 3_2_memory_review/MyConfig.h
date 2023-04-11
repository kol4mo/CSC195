#pragma once

struct _BufByte {
	char myByte;
};

struct _WiFi {
	char SSID[51];
	_BufByte Buffw1;
	char Pswd[51];
	_BufByte Buffw2;
};

struct _Version {
	short major;
	short minor;
	short revision;
};

struct Config {
	_Version Version;
	_WiFi wifi;
	_BufByte Buff1;
};