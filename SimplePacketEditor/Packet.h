#pragma once

class Packet
{
private:
	struct COutPacket
	{
		int Loopback;
		
		union
		{
			unsigned char *Data;
			void *Unknown;
			unsigned short *Header;
		};
		
		unsigned long Size;
		unsigned int Offset;
		int EncryptedByShanda;
	};

private:
	bool TokenizePacket(QString packet, QByteArray &data);

	void InjectPacket(const COutPacket *packet);

public:
	bool SendPacket(const QString packet);
};