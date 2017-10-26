// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "fpdfsdk/javascript/cjs_scalehow.h"

const JSConstSpec CJS_ScaleHow::ConstSpecs[] = {
    {"proportional", JSConstSpec::Number, 0, 0},
    {"anamorphic", JSConstSpec::Number, 1, 0},
    {0, JSConstSpec::Number, 0, 0}};

int CJS_ScaleHow::ObjDefnID = -1;

// static
void CJS_ScaleHow::DefineJSObjects(CFXJS_Engine* pEngine,
                                   FXJSOBJTYPE eObjType) {
  ObjDefnID = pEngine->DefineObj("scaleHow", eObjType, nullptr, nullptr);
  DefineConsts(pEngine, ObjDefnID, ConstSpecs);
}
