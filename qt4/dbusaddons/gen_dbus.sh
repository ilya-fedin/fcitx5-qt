#!/bin/sh

qdbusxml2cpp -N -p fcitxqtinputcontextproxyimpl -c FcitxQtInputContextProxyImpl interfaces/org.fcitx.Fcitx.InputContext1.xml -i fcitxqtdbustypes.h -i fcitx5qt4dbusaddons_export.h
qdbusxml2cpp -N -p fcitxqtinputmethodproxy -c FcitxQtInputMethodProxy interfaces/org.fcitx.Fcitx.InputMethod1.xml -i fcitxqtdbustypes.h -i fcitx5qt4dbusaddons_export.h
