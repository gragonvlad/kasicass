SRC = main.cpp TimeIt.cpp
OBJ = main.obj TimeIt.obj
CFLAGS = /c /EHsc /Zc:wchar_t /fp:precise /D_WIN32_WINNT=0x0500 /D "_MBCS" /D "_CONSOLE" /D "_DEBUG" /MTd
LDFLAGS = /SUBSYSTEM:CONSOLE /LARGEADDRESSAWARE

all:
	cl $(CFLAGS) $(SRC)
	link /OUT:timeit.exe $(LDFLAGS) $(OBJ)

clean:
	del *.obj *.exe *.res
