cmake_minimum_required(VERSION 3.10)

project(InsomniaDB VERSION 1.0)

set(CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED True)

configure_file(config.h.in config.h)

add_executable(
                InsomniaDB main.cpp
                src/parser.cpp
            )

target_include_directories (
                            InsomniaDB PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/include"
                        )