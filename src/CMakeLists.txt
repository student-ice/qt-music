add_executable(${PROJECT_NAME} ./main.cpp ./mainwindow.cpp ./mainwindow.h)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets Dtk6::Core Dtk6::Gui Dtk6::Widget)