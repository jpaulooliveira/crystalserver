////////////////////////////////////////////////////////////////////////
// Crystal Server - an opensource roleplaying game
////////////////////////////////////////////////////////////////////////
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////

#pragma once

class GroupFunctions {
public:
	static void init(lua_State* L);

private:
	static int luaGroupCreate(lua_State* L);

	static int luaGroupGetId(lua_State* L);
	static int luaGroupGetName(lua_State* L);
	static int luaGroupGetFlags(lua_State* L);
	static int luaGroupGetAccess(lua_State* L);
	static int luaGroupGetMaxDepotItems(lua_State* L);
	static int luaGroupGetMaxVipEntries(lua_State* L);
	static int luaGroupHasFlag(lua_State* L);
};
