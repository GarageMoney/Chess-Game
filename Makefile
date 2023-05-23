all:
	g++ -Iinclude -Iinclude/sdl -Iinclude/headers -Isrc -Llib -o chess src/*.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer
