// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef FPDFSDK_JAVASCRIPT_CJS_GLOBALARRAYS_H_
#define FPDFSDK_JAVASCRIPT_CJS_GLOBALARRAYS_H_

#include "fpdfsdk/javascript/JS_Define.h"

class CJS_GlobalArrays : public CJS_Object {
 public:
  static void DefineJSObjects(CJS_Runtime* pRuntmie);
};

#endif  // FPDFSDK_JAVASCRIPT_CJS_GLOBALARRAYS_H_