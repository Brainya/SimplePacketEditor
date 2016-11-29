#include "MultiInclude.h"

bool Packet::TokenizePacket(QString packet, QByteArray &data)
{
	packet.trimmed();
	
	if (packet.isEmpty())
	{
		return false;
	}

	QStringList list = packet.split(" ");

	for (int i = 0; i < list.count(); i++)
	{
		QString str = list.at(i);

		if (str.length() > 2)
		{
			return false;
		}

		for (int j = 0; j < str.length(); j++)
		{
			QChar c = str.at(j);

			if (c == '*')
			{
				c = QString().sprintf("%X", Random::GenerateNumberInRange(0, 15)).at(0);
			}

			if (!isxdigit(c.toAscii()))
			{
				return false;
			}

			str.replace(j, 1, c);
		}

		if (str.length() == 1)
		{
			str = ("0" + str);
		}

		list.replace(i, str);
	}

	data = QByteArray::fromHex(list.join("").toUtf8());

	return true;
}

void Packet::InjectPacket(const COutPacket *packet)
{
	__asm
	{
		pushad

		push End
		push [packet]
		push [Address::Packet::Trampoline]

		mov ecx,[Address::Packet::CClientSocket]
		mov ecx,[ecx]

		jmp [Address::MapleStory::CClientSocket::SendPacket]
End:
		popad
	}
}

bool Packet::SendPacket(const QString packet)
{
	QByteArray data;
	
	if (!TokenizePacket(packet, data))
	{
		return false;
	}

	COutPacket p;

	SecureZeroMemory(&p, sizeof(COutPacket));

	p.Size = data.size();
	p.Data = (unsigned char *)data.data();
	
	try
	{
		InjectPacket(&p);

		return true;
	}
	catch (...)
	{
		return false;
	}
}