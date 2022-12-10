cmake_minimum_required(VERSION 3.25)

project(cppmodules LANGUAGES CXX)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

file(GLOB_RECURSE srcs CONFIGURE_DEPENDS code/*.ixx code/*.cpp)
source_group(TREE . FILES ${srcs})

add_executable(main ${srcs})
set_target_properties(main PROPERTIES
	CXX_STANDARD 20
	CXX_EXTENSIONS OFF)
target_compile_options(main PRIVATE
	$<$<CXX_COMPILER_ID:MSVC>:/W4>
	$<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall -Wextra -g>
	$<$<CXX_COMPILER_ID:GNU>:-fdiagnostics-color>
	$<$<CXX_COMPILER_ID:Clang,AppleClang>:-fcolor-diagnostics>)

# fmt serves as an example third-party dependency. Since we are using `import`
# rather than `include`, we have to define preprocessor switches here.
target_compile_definitions(main PRIVATE FMT_HEADER_ONLY)
target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/external/fmt/include)
