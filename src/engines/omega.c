/*
Copyright (C) 2011 Michael D. Täht

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU Affero General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option) any
later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see http://www.gnu.org/licenses/
 */

/* Xapian's omega does support the opensearch API, but I'm thinking I want more of a direct interface to omega */

#include <stddef.h>
#include <errno.h>
#include <iconv.h>
#include "query.h"

int setup(QueryOptions_t *q)
{
  return EOPNOTSUPP;
}

int search(QueryOptions_t *q)
{
  return EOPNOTSUPP;
}

