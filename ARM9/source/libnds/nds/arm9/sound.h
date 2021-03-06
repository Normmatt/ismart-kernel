/*---------------------------------------------------------------------------------
	$Id: sound.h,v 1.1 2010/08/17 12:00:56 cpy Exp $

	Sound Functions

	Copyright (C) 2005
		Dave Murphy (WinterMute)

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any
	damages arising from the use of this software.

	Permission is granted to anyone to use this software for any
	purpose, including commercial applications, and to alter it and
	redistribute it freely, subject to the following restrictions:

	1.	The origin of this software must not be misrepresented; you
		must not claim that you wrote the original software. If you use
		this software in a product, an acknowledgment in the product
		documentation would be appreciated but is not required.
	2.	Altered source versions must be plainly marked as such, and
		must not be misrepresented as being the original software.
	3.	This notice may not be removed or altered from any source
		distribution.

	$Log: sound.h,v $
	Revision 1.1  2010/08/17 12:00:56  cpy
	
	Committed on the Free edition of March Hare Software CVSNT Server.
	Upgrade to CVS Suite for more features and support:
	http://march-hare.com/cvsnt/
	
	
	Revision 1.1  2009/03/30 16:04:57  administrator
	
	Committed on the Free edition of March Hare Software CVSNT Server.
	Upgrade to CVS Suite for more features and support:
	http://march-hare.com/cvsnt/
	
	Revision 1.1  2009/03/30 15:26:24  administrator
	最初建立的版本
	Committed on the Free edition of March Hare Software CVSNT Server.
	Upgrade to CVS Suite for more features and support:
	http://march-hare.com/cvsnt/
	
	Revision 1.3  2005/08/15 03:49:25  wntrmute
	export setGenericSound
	
	Revision 1.2  2005/08/04 17:57:58  wntrmute
	playSoundBlock internal only
	
	Revision 1.1  2005/08/03 05:28:07  wntrmute
	added arm9 sound functions
	

---------------------------------------------------------------------------------*/
#ifndef _sound_h_
#define _sound_h_

#ifdef __cplusplus
extern "C" {
#endif

#include <nds/ipc.h>

void playSound( pTransferSoundData sound);
void setGenericSound( u32 rate, u8 vol, u8 pan, u8 format);
void playGenericSound(const void* data, u32 length);


#ifdef __cplusplus
}
#endif

#endif // _sound_h_
