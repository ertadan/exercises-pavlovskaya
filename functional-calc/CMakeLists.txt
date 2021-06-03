cmake_minimum_required(VERSION 2.8.12)
file(GLOB SRC
    "*.cpp"
)
add_executable(calc ${SRC})
