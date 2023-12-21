# 搜索所有的 .cc 和 .cpp 文件，排除特定的文件
file(GLOB_RECURSE ALL_CPP_FILES [^.]*.cc [^.]*.cpp)

# 将所有的 .cpp 文件添加到 LOC_FILES
GLOBAL_ADD_MODULE_SRC(LOC_FILES ${ALL_CPP_FILES})

# 搜索所有的 .h 和 .hpp 文件，排除特定的文件
file(GLOB_RECURSE ALL_HPP_FILES [^.]*.h [^.]*.hpp)

# 将所有的 .hpp 文件添加到 LOC_HEADERS
GLOBAL_ADD_MODULE_SRC(LOC_HEADERS ${ALL_HPP_FILES})
