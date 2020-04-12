# Усложненный make-file.  Введены переменные для параметров компиляции и исполняемых файлов

.PHONY: all debug release clean

RELEASE_FLAGS = -O2 -Wall -DNDEBUG
DEBUG_FLAGS   = -g -O0 -Wall
RELEASE_EXEC  = hello
DEBUG_EXEC    = hello-dbg
#SOURCE        =

all: debug release

debug: $(DEBUG_EXEC)

hello-dbg: hello.cpp
	g++ $(DEBUG_FLAGS) hello.cpp -o $(DEBUG_EXEC) 

release: $(RELEASE_EXEC)

hello: hello.cpp
	g++ $(RELEASE_FLAGS) hello.cpp -o $(RELEASE_EXEC)

clean:
	rm -f $(RELEASE_EXEC) $(DEBUG_EXEC)

