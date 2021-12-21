cmake_minimum_required (VERSION 3.15)
project (meir)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
if (MSVC)
add_compile_options (/W4 /permissive- /Zc:externConstexpr /Zc:inline)
endif ()
target_sources (meir PRIVATE "main.cpp"
                             "Add.cpp"
                             "Comp.cpp"
                             "Mul.cpp"
                             "Lan.cpp"
                             "Log.cpp"
                             "Sin.cpp"
                             "NumToStr.cpp"
                             "FuncList.cpp"
                             "Poly.cpp")
