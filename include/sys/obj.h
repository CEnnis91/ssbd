#ifndef _OBJ_H_
#define _OBJ_H_

#include "objtypes.h"

#define DObjParentNULL ((void*)1)

#define ACommandAdvance(acommand) \
((acommand)++) \

#define DObjGetStruct(gobj) \
((DObj*)(gobj)->obj) \

#define SObjGetStruct(gobj) \
((SObj*)(gobj)->obj) \

#define OMCameraGetStruct(gobj) \
((OMCamera*)(gobj)->obj) \

#define SObjGetSprite(sobj) \
((Sprite*)&(sobj)->sprite) \

#define SObjGetPrev(sobj) \
((SObj*)(sobj)->prev) \

#define SObjGetNext(sobj) \
((SObj*)(sobj)->next) \

#endif