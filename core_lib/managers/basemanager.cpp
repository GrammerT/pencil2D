/*

Pencil - Traditional Animation Software
Copyright (C) 2005-2007 Patrick Corrieri & Pascal Naidon
Copyright (C) 2012-2017 Matthew Chiawen Chang

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation;

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

*/

#include "basemanager.h"
#include "editor.h"

BaseManager::BaseManager(QObject* parent) : QObject(parent)
{
}

BaseManager::~BaseManager()
{
    mEditor = nullptr;
}

void BaseManager::setEditor(Editor* editor)
{
    Q_ASSERT_X( editor != nullptr, "BaseManager", "Editor is null." );
    mEditor = editor;
}
