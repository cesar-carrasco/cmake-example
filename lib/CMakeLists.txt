
add_library(MyLib mylib.cxx)

install(TARGETS MyLib DESTINATION bin)
install(FILES mylib.h DESTINATION include)
