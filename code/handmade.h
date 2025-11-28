#if !defined(HANDMADE_H)
struct game_offscreen_buffer
{
    // BITMAPINFO Info;
    void *Memory;
    int Width;
    int Height;
    int Pitch;
};

static void GameUpdateAndRender(game_offscreen_buffer *Buffer, int XOffset, int YOffset);

#define HANDMADE_H
#endif
