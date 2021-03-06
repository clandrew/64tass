/*
    $Id: gapobj.h 2475 2021-03-07 01:34:55Z soci $

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/
#ifndef GAPOBJ_H
#define GAPOBJ_H
#include "obj.h"

extern struct Type *const GAP_OBJ;

struct Str;

typedef struct Gap {
    Obj v;
    struct Str *repr;
} Gap;

#define Gap(a) ((Gap *)(1 ? (a) : (Obj *)(Gap *)(a)))

extern Obj *const gap_value;

extern void gapobj_init(void);
extern void gapobj_names(void);
extern void gapobj_destroy(void);

static inline Obj *ref_gap(void) {
    gap_value->refcount++; return gap_value;
}

#endif
