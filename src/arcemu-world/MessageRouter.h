/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2005-2007 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008-2019 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _MESSAGEROUTER_H
#define _MESSAGEROUTER_H

/// Routes and sends messages
class MessageRouter
{
private:
	bool sendToObject;
	bool sendToSameTeamOnly;
	Object *object;

public:
	MessageRouter();
	MessageRouter( Object* object, bool sendToObject, bool sendToSameTeamOnly );

	/// Send the message to the players around the object
	void sendMessageToPlayersInRange( WorldPacket* packet );

	void setObject( Object* object ){ this->object = object; }
	void setSendToObject( bool b ){ sendToObject = b; }
	void setSendToSameTeamOnly( bool b ){ sendToSameTeamOnly = b; }
};

#endif
