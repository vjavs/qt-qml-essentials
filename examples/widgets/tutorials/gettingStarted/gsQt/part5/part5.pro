QT += widgets
requires(qtConfig(filedialog))
SOURCES = main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/wigets/tutorials/gettingStarted/gsQt/part4
INSTALLS += target
