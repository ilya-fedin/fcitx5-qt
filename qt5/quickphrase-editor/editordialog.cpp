//
// Copyright (C) 2017~2017 by CSSlayer
// wengxt@gmail.com
//
// This library is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 2.1 of the
// License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; see the file COPYING. If not,
// see <http://www.gnu.org/licenses/>.
//

#include "editordialog.h"
#include <fcitx-utils/i18n.h>

namespace fcitx {
EditorDialog::EditorDialog(QWidget *parent) : QDialog(parent) { setupUi(this); }

EditorDialog::~EditorDialog() {}

void EditorDialog::setKey(const QString &s) { keyLineEdit->setText(s); }

void EditorDialog::setValue(const QString &s) { valueLineEdit->setText(s); }

QString EditorDialog::key() const { return keyLineEdit->text(); }

QString EditorDialog::value() const { return valueLineEdit->text(); }
}
