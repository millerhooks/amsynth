/*
 *  main.h
 *
 *  Copyright (c) 2001-2012 Nick Dowell
 *
 *  This file is part of amsynth.
 *
 *  amsynth is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  amsynth is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with amsynth.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _amsynth_main_h
#define _amsynth_main_h

#ifdef __cplusplus
extern "C" {
#endif

extern void amsynth_save_bank(const char *filename);
extern void amsynth_load_bank(const char *filename);
extern int  amsynth_get_preset_number();
extern void amsynth_set_preset_number(int preset_no);
extern void amsynth_midi_input(unsigned char status, unsigned char data1, unsigned char data2);

#ifdef __cplusplus
}
#endif

#endif
