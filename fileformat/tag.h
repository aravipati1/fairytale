/*
  This file is part of the Fairytale project

  Copyright (C) 2018 Andrew Epstein

  This library is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TAG_H
#define TAG_H

#include "../common.h"

class Tag {
private:
  VLI id;
  VLI value;
  uint8_t data[];

public:
  int64_t getId();
  int64_t getValue();
  uint8_t* getData();
};

#endif // TAG_H
