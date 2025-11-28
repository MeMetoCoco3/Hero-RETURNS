
#include "handmade.h"

static void
RenderWeirdGradient(game_offscreen_buffer *Buffer, int XOffset, int YOffset)
{
    u8 *Row = (u8*) Buffer->Memory;
    for (int Y = 0; Y < Buffer->Height; ++Y)
    {
	u32* Pixel = (u32*)Row;
	for (int X = 0; X < Buffer->Width; ++X)
	{
	    u8 Blue = (X + XOffset);
	    u8 Green = (Y + YOffset);

	    *Pixel++ =  ((Green << 8) | (Blue));
	}
	Row += Buffer->Pitch;
    }
}


static void 
GameUpdateAndRender(game_offscreen_buffer *Buffer, int XOffset, int YOffset)
{
    RenderWeirdGradient(Buffer, XOffset, YOffset);
}
