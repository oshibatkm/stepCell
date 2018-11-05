OBJS	=	client_main.o client_opr_win.o
TARGET	=	client
CFLAGS	=	-c -DNDEBUG
OPTION	=	-L/usr/local/lib -I/usr/local/include/SDL2 -Wl,-rpath,/usr/local/lib  
.c.o:
	gcc $(CFLAGS) $<

all: $(TARGET)

$(TARGET):	$(OBJS)
	gcc -o $(TARGET) $(OBJS) -lm -lSDL2 $(OPTION) $(LDFLAGS)

clean:
	rm *.o $(TARGET)
	
client_main.o: client_main.c client_func.h common.h
client_opr_win.o: client_opr_win.c client_func.h common.h
