cmake_minimum_required(VERSION 3.5)

project(
  playg
  VERSION 0.0.1
  LANGUAGES C)

find_package(PkgConfig REQUIRED)

# new in version 3.6: The IMPORTED_TARGET argument will create an imported
# target named PkgConfig::<prefix> that can be passed directly as an argument to
# target_link_libraries().
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

add_executable(${PROJECT_NAME} main.c)

file(GLOB_RECURSE TRIVIAL_SRC trivial/*.c trivial/*.h)

add_executable(pack examples/packing.c)
add_executable(draw examples/drawing.c)
add_executable(builder examples/builder/builder.c)
add_executable(trivial trivial/main.c ${TRIVIAL_SRC})

target_link_libraries(${PROJECT_NAME} PkgConfig::GTK4)

target_link_libraries(pack PkgConfig::GTK4)

target_link_libraries(draw PkgConfig::GTK4)

target_link_libraries(builder PkgConfig::GTK4)

target_link_libraries(trivial PkgConfig::GTK4)
