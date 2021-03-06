// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_PARSER_CSCRIPT_LAYOUTPSEUDOMODEL_H_
#define XFA_FXFA_PARSER_CSCRIPT_LAYOUTPSEUDOMODEL_H_

#include "fxjs/xfa/cjx_layoutpseudomodel.h"
#include "xfa/fxfa/parser/cxfa_object.h"

class CXFA_LayoutProcessor;

class CScript_LayoutPseudoModel : public CXFA_Object {
 public:
  explicit CScript_LayoutPseudoModel(CXFA_Document* pDocument);
  ~CScript_LayoutPseudoModel() override;

  CJX_LayoutPseudoModel* JSLayoutPseudoModel() {
    return static_cast<CJX_LayoutPseudoModel*>(JSObject());
  }
};

#endif  // XFA_FXFA_PARSER_CSCRIPT_LAYOUTPSEUDOMODEL_H_
