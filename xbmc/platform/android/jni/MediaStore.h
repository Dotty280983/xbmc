#pragma once
/*
 *      Copyright (C) 2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "JNIBase.h"
#include "BaseColumns.h"

class CJNIMediaStoreMediaColumns : public CJNIBaseColumns
{
public:
  static void PopulateStaticFields();

  static std::string DATA; 
  static std::string SIZE; 
  static std::string DISPLAY_NAME;
  static std::string TITLE;
  static std::string DATE_ADDED;
  static std::string DATE_MODIFIED;
  static std::string MIME_TYPE;

private:
  CJNIMediaStoreMediaColumns();
};

class CJNIMediaStore : public CJNIBase
{
public:
  CJNIMediaStore(const jni::jhobject &object) : CJNIBase(object) {};
  ~CJNIMediaStore() {};
};
