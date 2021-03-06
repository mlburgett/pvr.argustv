#pragma once
/*
 *      Copyright (C) 2005-2010 Team XBMC
 *      http://www.xbmc.org
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string>
#include <json/json.h>

// don't use the UNUSED macro from StdString.h as it will generate "error: statement has no effect [-Werror=unused-value]"
#define NOTUSED(x) ((void) x)

namespace Json
{
  /**
   * \brief  Json support function to print the response from AGUS TV.
   *         Can be used for debugging purposes.
   * \param  value  Reference to the Json::Value that you want to print
   * \param  path   Optional path
   */
  void printValueTree( const Json::Value& value, const std::string& path = "." );
}

namespace BASE64
{
  std::string b64_encode(unsigned char const* in, unsigned int in_len, bool urlEncode);
}

std::string ToCIFS(std::string& UNCName);
std::string ToUNC(std::string& CIFSName);
std::string ToUNC(const char* CIFSName);
