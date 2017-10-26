// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "fpdfsdk/javascript/cjs_display.h"

const JSConstSpec CJS_Display::ConstSpecs[] = {
    {"visible", JSConstSpec::Number, 0, 0},
    {"hidden", JSConstSpec::Number, 1, 0},
    {"noPrint", JSConstSpec::Number, 2, 0},
    {"noView", JSConstSpec::Number, 3, 0},
    {0, JSConstSpec::Number, 0, 0}};

int CJS_Display::ObjDefnID = -1;

// static
void CJS_Display::DefineJSObjects(CFXJS_Engine* pEngine, FXJSOBJTYPE eObjType) {
  ObjDefnID = pEngine->DefineObj("display", eObjType, nullptr, nullptr);
  DefineConsts(pEngine, ObjDefnID, ConstSpecs);
}
